//---------------------------------------------------------------------------
/*
	TJS2 Script Engine
	Copyright (C) 2000 W.Dee <dee@kikyou.info> and contributors

	See details of license at "license.txt"
*/
//---------------------------------------------------------------------------
// Iterator classes implementation
//---------------------------------------------------------------------------

#include "tjsIterator.h"
#include "tjsLazyIterator.h"
#include "tjsIteratorInternal.h"
#include "tjsArray.h"
#include "tjsDictionary.h"

namespace TJS
{
namespace
{
tTJSNC_Iterator				*Iterator = nullptr;
tTJSNC_ArrayIterator		*ArrayIterator = nullptr;
tTJSNC_DictionaryIterator	*DictionaryIterator = nullptr;
tTJSNC_LazyIterator         *LazyIterator = nullptr;

//---------------------------------------------------------------------------
// Utility Functions for Iterator (method adapter)
//---------------------------------------------------------------------------
inline tjs_error decompose(tTJSVariant *keyval, tTJSVariant *key, tTJSVariant *val)
{
	auto obj = keyval->AsObjectNoAddRef();
	if (key) {
		key->Clear();
		tjs_error hr = obj->PropGetByNum(TJS_MEMBERMUSTEXIST|TJS_IGNOREPROP, 0, key, obj);
		if (TJS_FAILED(hr)) return hr;
	}
	if (val) {
		val->Clear();
		tjs_error hr = obj->PropGetByNum(TJS_MEMBERMUSTEXIST|TJS_IGNOREPROP, 1, val, obj);
		if (TJS_FAILED(hr)) return hr;
	}
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
#define TJS_ITERATOR_METHOD_DECL(name) \
inline tjs_error name(tTJSVariant *result, tjs_int numparams, \
tTJSVariant **param, iTJSIterator *ni, iTJSDispatch2 *objthis)

#define TJS_ITERATOR_PREPARE_DICT_PARAMLIST(paramList)	\
	ParamList paramList(numparams + 1);					\
	/* paramList[0]  := key								\
	 * paramList[1]  := value							\
	 * paramList[..] := *args */						\
	tTJSVariant key, val;								\
	paramList[0] = &key; paramList[1] = &val;			\
	for (tjs_int i = 1; i < numparams; ++i)	paramList[i + 1] = param[i];

#define TJS_ITERATOR_METHOD_INNER(name) \
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);		\
	TJS_ITERATOR_PREPARE_ARRAY_PARAMLIST(paramList);	\
	return ni->name(result, [&](tTJSVariant *pred, tTJSVariant *item, tjs_int idx) {\
		paramList[0] = item;							\
		paramList.UpdateIndex(idx);                     \
		return fn->FuncCall(0, nullptr, nullptr, pred, paramList.Count, paramList.Params, fn_this);\
	});

#define TJS_ITERATOR_DICT_METHOD_INNER(name) \
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);		\
	TJS_ITERATOR_PREPARE_DICT_PARAMLIST(paramList);     \
	return ni->name(result, [&](tTJSVariant *map, tTJSVariant *keyval, tjs_int idx) {\
		tjs_error hr = decompose(keyval, &key, &val);	\
		if (TJS_FAILED(hr)) return hr;                  \
		return fn->FuncCall(0, nullptr, nullptr, map, paramList.Count, paramList.Params, fn_this);\
	});

#define TJS_ITERATOR_UTILITY(name) TJS_ITERATOR_METHOD_DECL(name) { TJS_ITERATOR_METHOD_INNER(name) }
#define TJS_ITERATOR_DICT_UTILITY(name) TJS_ITERATOR_METHOD_DECL(Dict##name) { TJS_ITERATOR_DICT_METHOD_INNER(name) }
//---------------------------------------------------------------------------

// Each ---------------------------------------------------------------------
TJS_ITERATOR_METHOD_DECL(Each)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_ARRAY_PARAMLIST(paramList);
	
	if (result) result->Clear();
	
	return ni->Each([&](tTJSVariant *item, tjs_int idx) {
		paramList[0] = item;
		paramList.UpdateIndex(idx);
		return fn->FuncCall(0, nullptr, nullptr, nullptr, paramList.Count, paramList.Params, fn_this);
	});
}
// DictEach -----------------------------------------------------------------
TJS_ITERATOR_METHOD_DECL(DictEach)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_DICT_PARAMLIST(paramList);
	
	if (result) result->Clear();
	
	return ni->Each([&](tTJSVariant *keyval, tjs_int idx) {
		tjs_error hr = decompose(keyval, &key, &val);
		if (TJS_FAILED(hr)) return hr;
		return fn->FuncCall(0, nullptr, nullptr, nullptr, paramList.Count, paramList.Params, fn_this);
	});
}
// Map ----------------------------------------------------------------------
TJS_ITERATOR_UTILITY(Map)
TJS_ITERATOR_DICT_UTILITY(Map)
// Filter -------------------------------------------------------------------
TJS_ITERATOR_UTILITY(Filter)
TJS_ITERATOR_DICT_UTILITY(Filter)
// Reduce -------------------------------------------------------------------
TJS_ITERATOR_METHOD_DECL(Reduce)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	
	ParamList paramList(numparams + 2);
	paramList.SetIndex(2, 0);
	/* paramList[0]  := accumulator
	 * paramList[1]  := current value
	 * paramList[2]  := index
	 * paramList[..] := *args */
	for (tjs_int i = 2; i < numparams; ++i)	{
		paramList[i + 1] = param[i];
	}
	
	return ni->Reduce(result, 1 < numparams ? param[1] : nullptr,
	[&](tTJSVariant *v, tTJSVariant *acc, tTJSVariant *cur, tjs_int idx) {
		paramList[0] = acc;
		paramList[1] = cur;
		paramList.UpdateIndex(idx);
		return fn->FuncCall(0, nullptr, nullptr, v, paramList.Count, paramList.Params, fn_this);
	});
}
// Drop ---------------------------------------------------------------------
TJS_ITERATOR_METHOD_DECL(Drop)
{
	TJS_ITERATOR_PREPARE_INT_PARAMLIST(paramList, count);
	return ni->Drop(result, count);
}
// Take ---------------------------------------------------------------------
TJS_ITERATOR_METHOD_DECL(Take)
{
	TJS_ITERATOR_PREPARE_INT_PARAMLIST(paramList, count);
	return ni->Take(result, count);
}
// All ----------------------------------------------------------------------
TJS_ITERATOR_UTILITY(All)
TJS_ITERATOR_DICT_UTILITY(All)
// Any ----------------------------------------------------------------------
TJS_ITERATOR_UTILITY(Any)
TJS_ITERATOR_DICT_UTILITY(Any)
// None ---------------------------------------------------------------------
TJS_ITERATOR_UTILITY(None)
TJS_ITERATOR_DICT_UTILITY(None)
// Partition ----------------------------------------------------------------
TJS_ITERATOR_UTILITY(Partition)
TJS_ITERATOR_DICT_UTILITY(Partition)
// DropWhile ----------------------------------------------------------------
TJS_ITERATOR_UTILITY(DropWhile)
TJS_ITERATOR_DICT_UTILITY(DropWhile)
// TakeWhile ----------------------------------------------------------------
TJS_ITERATOR_UTILITY(TakeWhile)
TJS_ITERATOR_DICT_UTILITY(TakeWhile)
// Find ---------------------------------------------------------------------
TJS_ITERATOR_UTILITY(Find)
TJS_ITERATOR_DICT_UTILITY(Find)
// FindIndex ----------------------------------------------------------------
TJS_ITERATOR_UTILITY(FindIndex)
TJS_ITERATOR_DICT_UTILITY(FindIndex)
// Pairwise -----------------------------------------------------------------
TJS_ITERATOR_METHOD_DECL(Pairwise)
{
	TJS_ITERATOR_PREPARE_INT_PARAMLIST(paramList, count);
	return ni->Pairwise(result, count);
}
// Slice --------------------------------------------------------------------
TJS_ITERATOR_METHOD_DECL(Slice)
{
	TJS_ITERATOR_PREPARE_INT_PARAMLIST(paramList, count);
	return ni->Slice(result, count);
}
// Reject -------------------------------------------------------------------
TJS_ITERATOR_UTILITY(Reject)
TJS_ITERATOR_DICT_UTILITY(Reject)
// --------------------------------------------------------------------------

}



//---------------------------------------------------------------------------
// iTJSIterator
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
iTJSIterator::Each(action_t action)
{
	tTJSVariant next, item;
	tjs_error hr = MoveNext(&next);
	if (TJS_FAILED(hr)) return hr;
	
	tjs_int index = 0;
	while (next.operator bool()) {
		hr = GetCurrent(&item);
		if (TJS_FAILED(hr)) return hr;
		
		hr = action(&item, index++);
		if (TJS_FAILED(hr) || hr == TJS_S_FALSE) return hr;
		// `TJS_S_FALSE` means "break"
		
		hr = MoveNext(&next);
		if (TJS_FAILED(hr)) return hr;
	}
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
iTJSIterator::Map(tTJSVariant *result, func_t map)
{
	tTJSArrayObject *array = (tTJSArrayObject*)TJSCreateArrayObject();
	tjs_uint32 add_hint = 0;
	
	tjs_error hr = Each([&](tTJSVariant *item, tjs_int idx) {
		tTJSVariant r;
		tjs_error hr = map(&r, item, idx);
		if (TJS_FAILED(hr)) return hr;
		tTJSVariant *pr = &r;
		array->FuncCall(0, TJS_W("add"), &add_hint, nullptr, 1, &pr, array);
		return hr;
	});
	
	if (TJS_SUCCEEDED(hr) && result) *result = tTJSVariant(array, array);
	array->Release();
	return hr;
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
iTJSIterator::Filter(tTJSVariant *result, func_t pred)
{
	tTJSArrayObject *array = (tTJSArrayObject*)TJSCreateArrayObject();
	tjs_uint32 add_hint = 0;
	
	tjs_error hr = Each([&](tTJSVariant *item, tjs_int idx) {
		tTJSVariant r;
		tjs_error hr = pred(&r, item, idx);
		if (TJS_FAILED(hr)) return hr;
		if (r.operator bool())
			array->FuncCall(0, TJS_W("add"), &add_hint, nullptr, 1, &item, array);
		return hr;
	});
	
	if (TJS_SUCCEEDED(hr) && result) *result = tTJSVariant(array, array);
	array->Release();
	return hr;
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
iTJSIterator::Reduce(tTJSVariant *result, tTJSVariant *init, reduce_t proc)
{
	/**
	 * 1. init given
	 *   1.1. empty iterator => return init
	 *   1.2  else => procedure call
	 * 2. init not given
	 *   2.1. empty iterator => return void
	 *   2.2. single iterator => return it
	 *   2.3. else => procedure call
	 */
	
	tTJSVariant next, item;
	tjs_error hr = MoveNext(&next);
	if (TJS_FAILED(hr)) return hr;
	
	if (!next.operator bool() || hr == TJS_S_FALSE) {
		// 1.1.
		// 2.1.
		if (result) {
			if (init) *result = *init;
			else result->Clear();
		}
		return TJS_S_OK;
	}
	
	tTJSVariant acc, cur;
	tjs_int index = 0;
	
	if (init) {
		// 1.2.
		acc = *init;
	} else {
		hr = GetCurrent(&acc);
		if (TJS_FAILED(hr)) return hr;
		hr = MoveNext(&next);
		if (TJS_FAILED(hr)) return hr;
		if (!next.operator bool() || hr == TJS_S_FALSE) {
			// 2.2.
			if (result) *result = acc;
			return TJS_S_OK;
		}
		// 2.3.
	}
	
	tTJSVariant v;
	do {
		hr = GetCurrent(&cur);
		if (TJS_FAILED(hr)) return hr;
		hr = proc(&v, &acc, &cur, index++);
		if (TJS_FAILED(hr)) return hr;
		if (hr == TJS_S_FALSE) break;
		acc = v;
		hr = MoveNext(&next);
		if (TJS_FAILED(hr)) return hr;
	} while (next.operator bool() && hr != TJS_S_FALSE);
	
	if (result) *result = v;
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
iTJSIterator::Drop(tTJSVariant *result, tTVInteger count)
{
	auto proc = [&](tTJSVariant *pred, tTJSVariant *item, tjs_int idx) {
		*pred = count <= idx;
		return TJS_S_OK;
	};
	return Filter(result, proc);
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
iTJSIterator::Take(tTJSVariant *result, tTVInteger count)
{
	auto proc = [=](tTJSVariant *pred, tTJSVariant *item, tjs_int idx) {
		*pred = idx < count;
		return count <= idx + 1 ? TJS_S_FALSE : TJS_S_OK;
	};
	return Filter(result, proc);
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
iTJSIterator::All(tTJSVariant *result, func_t pred)
{
	bool ret = true;
	auto proc = [&](tTJSVariant *item, tjs_int idx) {
		tTJSVariant v;
		tjs_error hr = pred(&v, item, idx);
		if (TJS_FAILED(hr)) return hr;
		if (!v.operator bool()) {
			ret = false;
			return TJS_S_FALSE;
		}
		return TJS_S_OK;
	};
	
	tjs_error hr = Each(proc);
	if (TJS_FAILED(hr)) {
		if (result) result->Clear();
		return hr;
	} else {
		if (result) *result = ret;
		return TJS_S_OK;
	}
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
iTJSIterator::Any(tTJSVariant *result, func_t pred)
{
	bool ret = false;
	auto proc = [&](tTJSVariant *item, tjs_int idx) {
		tTJSVariant v;
		tjs_error hr = pred(&v, item, idx);
		if (TJS_FAILED(hr)) return hr;
		if (v.operator bool()) {
			ret = true;
			return TJS_S_FALSE;
		}
		return TJS_S_OK;
	};
	
	tjs_error hr = Each(proc);
	if (TJS_FAILED(hr)) {
		if (result) result->Clear();
		return hr;
	} else {
		if (result) *result = ret;
		return TJS_S_OK;
	}
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
iTJSIterator::None(tTJSVariant *result, func_t pred)
{
	bool ret = true;
	auto proc = [&](tTJSVariant *item, tjs_int idx) {
		tTJSVariant v;
		tjs_error hr = pred(&v, item, idx);
		if (TJS_FAILED(hr)) return hr;
		if (v.operator bool()) {
			ret = false;
			return TJS_S_FALSE;
		}
		return TJS_S_OK;
	};
	
	tjs_error hr = Each(proc);
	if (TJS_FAILED(hr)) {
		if (result) result->Clear();
		return hr;
	} else {
		if (result) *result = ret;
		return TJS_S_OK;
	}
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
iTJSIterator::Partition(tTJSVariant *result, func_t pred)
{
	tTJSArrayObject *array = (tTJSArrayObject*)TJSCreateArrayObject();
	tTJSArrayObject *array1 = (tTJSArrayObject*)TJSCreateArrayObject();
	tTJSArrayObject *array2 = (tTJSArrayObject*)TJSCreateArrayObject();
	tjs_uint32 add_hint1 = 0;
	tjs_uint32 add_hint2 = 0;
	
	tjs_error hr = Each([&](tTJSVariant *item, tjs_int idx) {
		tTJSVariant r;
		tjs_error hr = pred(&r, item, idx);
		if (TJS_FAILED(hr)) return hr;
		if (r.operator bool())
			array1->FuncCall(0, TJS_W("add"), &add_hint1, nullptr, 1, &item, array1);
		else
			array2->FuncCall(0, TJS_W("add"), &add_hint2, nullptr, 1, &item, array2);
		return hr;
	});
	
	if (TJS_SUCCEEDED(hr) && result) {
		tTJSVariant *a[2];
		tTJSVariant v0(array1, array1);
		tTJSVariant v1(array2, array2);
		a[0] = &v0; a[1] = &v1;
		array->FuncCall(0, TJS_W("push"), nullptr, nullptr, 2, a, array);
		*result = tTJSVariant(array, array);
	}
	array1->Release();
	array2->Release();
	array->Release();
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
iTJSIterator::DropWhile(tTJSVariant *result, func_t pred)
{
	bool detected = false;
	auto proc = [&](tTJSVariant *v, tTJSVariant *item, tjs_int idx) {
		if (detected) {
			*v = (tjs_int)1;
			return TJS_S_OK;
		}
		
		tTJSVariant r;
		tjs_error hr = pred(&r, item, idx);
		if (TJS_FAILED(hr)) return hr;
		if (r.operator bool()) {
			*v = (tjs_int)0;
			return TJS_S_OK;
		} else {
			*v = (tjs_int)1;
			detected = true;
			return TJS_S_OK;
		}
	};
	return Filter(result, proc);
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
iTJSIterator::TakeWhile(tTJSVariant *result, func_t pred)
{
	auto proc = [&](tTJSVariant *v, tTJSVariant *item, tjs_int idx) {
		tTJSVariant r;
		tjs_error hr = pred(&r, item, idx);
		if (TJS_FAILED(hr)) return hr;
		if (r.operator bool()) {
			*v = (tjs_int)1;
			return TJS_S_OK;
		} else {
			*v = (tjs_int)0;
			return TJS_S_FALSE;
		}
	};
	return Filter(result, proc);
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
iTJSIterator::Find(tTJSVariant *result, func_t pred)
{
	if (result) result->Clear();
	
	return Each([&](tTJSVariant *item, tjs_int idx) {
		tTJSVariant r;
		tjs_error hr = pred(&r, item, idx);
		if (TJS_FAILED(hr)) return hr;
		if (!r.operator bool()) return TJS_S_OK;
		if (result) *result = *item;
		return TJS_S_FALSE;
	});
	
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
iTJSIterator::FindIndex(tTJSVariant *result, func_t pred)
{
	if (result) *result = (tjs_int)-1;
	
	return Each([&](tTJSVariant *item, tjs_int idx) {
		tTJSVariant r;
		tjs_error hr = pred(&r, item, idx);
		if (TJS_FAILED(hr)) return hr;
		if (!r.operator bool()) return TJS_S_OK;
		if (result) *result = idx;
		return TJS_S_FALSE;
	});
	
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
iTJSIterator::Pairwise(tTJSVariant *result, tTVInteger count)
{
	if (count <= 0) return TJS_E_INVALIDPARAM;
	
	// returns an empty array if a number of elements
	//   in this iterator is less than `count`
	
	tTJSArrayObject *array = (tTJSArrayObject*)TJSCreateArrayObject();
	tTJSArrayObject *tmp = (tTJSArrayObject*)TJSCreateArrayObject();
	tjs_int num = 0;
	tTJSVariant v;
	tTJSVariant *p = &v;
	
	tjs_error hr = Each([&](tTJSVariant *item, tjs_int idx) {
		tmp->FuncCall(0, TJS_W("add"), nullptr, nullptr, 1, &item, tmp);
		num += 1;
		if (num == count) {
			v = tTJSVariant(tmp, tmp);
			tmp->Release();
			array->FuncCall(0, TJS_W("add"), nullptr, nullptr, 1, &p, array);
			tTJSArrayObject *tmp1 = (tTJSArrayObject*)TJSCreateArrayObject();
			for (tjs_int i = 1; i < num; ++i) {
				tmp->PropGetByNum(TJS_MEMBERMUSTEXIST, i, &v, tmp);
				tmp1->FuncCall(0, TJS_W("add"), nullptr, nullptr, 1, &p, tmp1);
			}
			tmp = tmp1;
			num -= 1;
		}
		return TJS_S_OK;
	});
	
	if (result) *result = tTJSVariant(array, array);
	array->Release();
	tmp->Release();
	
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
iTJSIterator::Slice(tTJSVariant *result, tTVInteger count)
{
	if (count <= 0) return TJS_E_INVALIDPARAM;
	
	tTJSArrayObject *array = (tTJSArrayObject*)TJSCreateArrayObject();
	tTJSArrayObject *tmp = nullptr;
	tTJSVariant v;
	tTJSVariant *p = &v;
	
	tjs_int num;
	
	tjs_error hr = Each([&](tTJSVariant *item, tjs_int idx) {
		if (!tmp) {
			tmp = (tTJSArrayObject*)TJSCreateArrayObject();
			num = 0;
		}
		tmp->FuncCall(0, TJS_W("add"), nullptr, nullptr, 1, &item, tmp);
		num += 1;
		if (num == count) {
			v = tTJSVariant(tmp, tmp);
			tmp->Release();
			array->FuncCall(0, TJS_W("add"), nullptr, nullptr, 1, &p, array);
			tmp = nullptr;
		}
		return TJS_S_OK;
	});
	if (tmp) {
		v = tTJSVariant(tmp, tmp);
		tmp->Release();
		array->FuncCall(0, TJS_W("add"), nullptr, nullptr, 1, &p, array);
	}
	
	if (result) *result = tTJSVariant(array, array);
	array->Release();
	
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
iTJSIterator::Reject(tTJSVariant *result, func_t pred)
{
	return Filter(result, [&](tTJSVariant *v, tTJSVariant *item, tjs_int idx) {
		tTJSVariant r;
		tjs_error hr = pred(&r, item, idx);
		if (TJS_FAILED(hr)) return hr;
		*v = (tjs_int)(r.operator bool() ? 0 : 1);
		return TJS_S_OK;
	});
}
//---------------------------------------------------------------------------



//---------------------------------------------------------------------------
// tTJSNI_Iterator : TJS Native Instance : Iterator
//---------------------------------------------------------------------------
tTJSNI_Iterator::tTJSNI_Iterator()
{
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_Iterator::Construct(tjs_int numparams, tTJSVariant **param, iTJSDispatch2 *tjs_obj)
{
	BackEnd = tjs_obj;
	//BackEnd->AddRef();
	return inherited::Construct(numparams, param, tjs_obj);
}
//---------------------------------------------------------------------------
void TJS_INTF_METHOD
tTJSNI_Iterator::Destruct()
{
	//BackEnd->Release();
	return inherited::Destruct();
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_Iterator::GetCurrent(tTJSVariant *result)
{
	if (Index < 0) return TJS_E_INVALIDTYPE;
	tjs_error hr = TJS_S_OK;
	if (!IsCached) {
		hr = BackEnd->FuncCall(0, TJS_W("current"), &CurrentHint, &CachedItem, 0, nullptr, BackEnd);
		if (TJS_FAILED(hr)) return hr;
		IsCached = true;
	}
	if (result) *result = CachedItem;
	return hr;
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_Iterator::MoveNext(tTJSVariant *result)
{
	Index += 1;
	IsCached = false;
	return BackEnd->FuncCall(0, TJS_W("moveNext"), &NextHint, result, 0, nullptr, BackEnd);
}
//---------------------------------------------------------------------------


#define TJS_ITERATOR_METHOD_DELEGATE(methodname, funcname, classname) \
TJS_BEGIN_NATIVE_METHOD_DECL(methodname) \
{ \
TJS_GET_NATIVE_INSTANCE(_this, classname); \
return ::funcname(result, numparams, param, _this, objthis); \
} \
TJS_END_NATIVE_METHOD_DECL(methodname)

#define TJS_ITERATOR_METHOD_DELEGATE_ALL(classname) \
TJS_ITERATOR_METHOD_DELEGATE(each, Each, classname) \
TJS_ITERATOR_METHOD_DELEGATE(map, Map, classname) \
TJS_ITERATOR_METHOD_DELEGATE(filter, Filter, classname) \
TJS_ITERATOR_METHOD_DELEGATE(reduce, Reduce, classname) \
TJS_ITERATOR_METHOD_DELEGATE(drop, Drop, classname) \
TJS_ITERATOR_METHOD_DELEGATE(take, Take, classname) \
TJS_ITERATOR_METHOD_DELEGATE(all, All, classname) \
TJS_ITERATOR_METHOD_DELEGATE(any, Any, classname) \
TJS_ITERATOR_METHOD_DELEGATE(none, None, classname) \
TJS_ITERATOR_METHOD_DELEGATE(partition, Partition, classname) \
TJS_ITERATOR_METHOD_DELEGATE(dropWhile, DropWhile, classname) \
TJS_ITERATOR_METHOD_DELEGATE(takeWhile, TakeWhile, classname) \
TJS_ITERATOR_METHOD_DELEGATE(find, Find, classname) \
TJS_ITERATOR_METHOD_DELEGATE(findIndex, FindIndex, classname) \
TJS_ITERATOR_METHOD_DELEGATE(pairwise, Pairwise, classname) \
TJS_ITERATOR_METHOD_DELEGATE(slice, Slice, classname) \
TJS_ITERATOR_METHOD_DELEGATE(reject, Reject, classname)
//TJS_ITERATOR_METHOD_DELEGATE(zip, Zip, classname)

//---------------------------------------------------------------------------
// tTJSNC_Iterator : TJS Native Class : Iterator
//---------------------------------------------------------------------------
tjs_uint32 tTJSNC_Iterator::ClassID = (tjs_uint32)-1;
//---------------------------------------------------------------------------
// call from ONLY tjs.cpp!
tTJSNC_Iterator::tTJSNC_Iterator()
	: inherited(TJS_W("Iterator"))
{
	Iterator = this;
	
	// add `Lazy` property
	{
		// This operation increments the refcount of this object,
		// then `Release` must destruct this object when `RefCount` is 2 (not 1).
		auto lazy = new tTJSNC_LazyIterator();
		lazy->SetSuper(this);
		tTJSVariant val(lazy, nullptr);
		lazy->Release();
		PropSet(TJS_MEMBERENSURE, TJS_W("Lazy"), nullptr, &val, this);
		LazyIterator = lazy;
	}
	
	// class constructor
	TJS_BEGIN_NATIVE_MEMBERS(/*TJS class name*/Iterator)
//----------------------------------------------------------------------
	TJS_DECL_EMPTY_FINALIZE_METHOD
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_CONSTRUCTOR_DECL(/*var. name*/_this, /*var. type*/tTJSNI_Iterator,
	/*TJS class name*/Iterator)
{
	return TJS_S_OK;
}
TJS_END_NATIVE_CONSTRUCTOR_DECL(/*TJS class name*/Iterator)
//----------------------------------------------------------------------
#define TJS_ITERATOR_ISINSTANCEOF(ptr, klass) (TJS_S_TRUE == TJSDefaultIsInstanceOf(0, *ptr, TJS_W(#klass), nullptr))
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/from)
{
	// TODO: return lazy iterator if 1 < numparams
	if (numparams != 1) return TJS_E_BADPARAMCOUNT;
	if (!result) return TJS_S_OK;
	
	if (TJS_ITERATOR_ISINSTANCEOF(param[0], Array)) {
		auto array_it = TJSCreateArrayIterator(param[0], nullptr);
		tTJSVariant it(array_it, array_it);
		array_it->Release();
		*result = it;
	} else if (TJS_ITERATOR_ISINSTANCEOF(param[0], Dictionary)) {
		auto dict_it = TJSCreateDictionaryIterator(param[0], nullptr);
		tTJSVariant it(dict_it, dict_it);
		dict_it->Release();
		*result = it;
	} else if (TJS_ITERATOR_ISINSTANCEOF(param[0], Iterator)) {
		*result = *param[0];
	} else {
		return TJS_E_INVALIDPARAM;
	}
	
	return TJS_S_OK;
}
TJS_END_NATIVE_STATIC_METHOD_DECL(/*func. name*/from)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/current)
{
	// return `void`
	if (numparams != 0) return TJS_E_BADPARAMCOUNT;
	if (result) result->Clear();
	return TJS_S_OK;
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/current)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/moveNext)
{
	// return `true` eternally
	if (numparams != 0) return TJS_E_BADPARAMCOUNT;
	if (result) *result = (tjs_int)1;
	return TJS_S_OK;
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/moveNext)
//----------------------------------------------------------------------
TJS_ITERATOR_METHOD_DELEGATE_ALL(tTJSNI_Iterator)
//----------------------------------------------------------------------
	TJS_END_NATIVE_MEMBERS
}
//----------------------------------------------------------------------
tjs_uint TJS_INTF_METHOD
tTJSNC_Iterator::Release()
{
	// try delete LazyIterator; see above
	if (GetRefCount() == 2) {
		LazyIterator->SetSuperWithoutRelease(nullptr);
		inherited::Release();
	}
	
	return inherited::Release();
}
//----------------------------------------------------------------------
tTJSNativeInstance *tTJSNC_Iterator::CreateNativeInstance()
{
	return new tTJSNI_Iterator(); 
}
//----------------------------------------------------------------------



//---------------------------------------------------------------------------
// tTJSNI_ArrayIterator : TJS Native Instance : ArrayIterator
//---------------------------------------------------------------------------
tTJSNI_ArrayIterator::tTJSNI_ArrayIterator()
	: inherited()
{
}
//----------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_ArrayIterator::Construct(tjs_int numparams, tTJSVariant **param, iTJSDispatch2 *tjs_obj)
{
	tjs_error hr = inherited::Construct(numparams, param, tjs_obj);
	if (hr != TJS_S_OK) return hr;
	if (numparams != 1) return TJS_E_BADPARAMCOUNT;
	if (TJS_S_TRUE != TJSDefaultIsInstanceOf(0, *param[0], TJS_W("Array"), nullptr))
		return TJS_E_INVALIDPARAM;
	BackEnd = param[0]->AsObject();
	return TJS_S_OK;
}
//----------------------------------------------------------------------
void TJS_INTF_METHOD
tTJSNI_ArrayIterator::Destruct() {
	BackEnd->Release();
	inherited::Destruct();
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_ArrayIterator::GetCurrent(tTJSVariant *result)
{
	if (Index < 0) return TJS_E_INVALIDTYPE;
	if (!result) return TJS_S_OK;
	return BackEnd->PropGetByNum(TJS_MEMBERMUSTEXIST|TJS_IGNOREPROP, Index, result, BackEnd);
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_ArrayIterator::MoveNext(tTJSVariant *result)
{
	tTJSVariant count;
	BackEnd->PropGet(0, TJS_W("count"), &CountHint, &count, BackEnd);
	if (Index + 1 < (tjs_int)count) {
		Index += 1;
		if (result) *result = (tjs_int)1;
		return TJS_S_OK;
	}
	if (result) *result = (tjs_int)0;
	return TJS_S_OK;
}
//---------------------------------------------------------------------------



//---------------------------------------------------------------------------
// tTJSNC_ArrayIterator : TJS Native Class : ArrayIterator
//---------------------------------------------------------------------------
tjs_uint32 tTJSNC_ArrayIterator::ClassID = (tjs_uint32)-1;

// call from ONLY tjs.cpp!
tTJSNC_ArrayIterator::tTJSNC_ArrayIterator()
	: inherited(TJS_W("ArrayIterator"))
{
	ArrayIterator = this;
	
	// class constructor
	TJS_BEGIN_NATIVE_MEMBERS(/*TJS class name*/ArrayIterator)
//----------------------------------------------------------------------
	TJS_DECL_EMPTY_FINALIZE_METHOD
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_CONSTRUCTOR_DECL(/*var. name*/_this, /*var. type*/tTJSNI_ArrayIterator,
	/*TJS class name*/ArrayIterator)
{
	// inherit `Iterator` class
	tTJSVariant name("Iterator");
	objthis->ClassInstanceInfo(TJS_CII_ADD, 0, &name);
	return TJS_S_OK;
}
TJS_END_NATIVE_CONSTRUCTOR_DECL(/*TJS class name*/ArrayIterator)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/current)
{
	if(result) {
		TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_ArrayIterator);
		return _this->GetCurrent(result);
	}
	return TJS_S_OK;
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/current)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/moveNext)
{
	TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_ArrayIterator);
	return _this->MoveNext(result);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/moveNext)
//----------------------------------------------------------------------
TJS_ITERATOR_METHOD_DELEGATE_ALL(tTJSNI_ArrayIterator)
//----------------------------------------------------------------------
	TJS_END_NATIVE_MEMBERS
}
//----------------------------------------------------------------------
tTJSNativeInstance *tTJSNC_ArrayIterator::CreateNativeInstance()
{
	return new tTJSNI_ArrayIterator(); 
}
//----------------------------------------------------------------------



//---------------------------------------------------------------------------
// tTJSNI_DictionaryIterator : TJS Native Instance : DictionaryIterator
//								It is guaranteed that all elements will
//								be traversed just once even if a Dictionary object
//								in back-end is modified during iteration.
//---------------------------------------------------------------------------
tTJSNI_DictionaryIterator::tTJSNI_DictionaryIterator()
	: inherited()
{
}
//----------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_DictionaryIterator::Construct(tjs_int numparams, tTJSVariant **param, iTJSDispatch2 *tjs_obj)
{
	tjs_error hr = inherited::Construct(numparams, param, tjs_obj);
	if (hr != TJS_S_OK) return hr;
	if (numparams != 1) return TJS_E_BADPARAMCOUNT;
	if (TJS_S_TRUE != TJSDefaultIsInstanceOf(0, *param[0], TJS_W("Dictionary"), nullptr))
		return TJS_E_INVALIDPARAM;
	BackEnd = param[0]->AsObject();
	UpdateKeys();
	return TJS_S_OK;
}
//----------------------------------------------------------------------
void TJS_INTF_METHOD
tTJSNI_DictionaryIterator::Destruct()
{
	BackEnd->Release();
	for (const tjs_char *key : CachedKeys)  delete[] key;
	for (const tjs_char *key : VisitedKeys) delete[] key;
	delete[] CurrentKey;
	inherited::Destruct();
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_DictionaryIterator::GetCurrent(tTJSVariant *result)
{
	if (!CurrentKey) {
		// `moveNext()` is not called yet
		return TJS_E_INVALIDTYPE;
	}
	
	if (!result) return TJS_S_OK;
	
	if (GetPair(CurrentKey, result) == TJS_S_OK) return TJS_S_OK;
	
	// CurrentKey is now invalidated; find next key
	delete[] CurrentKey;
	for (const tjs_char *key : CachedKeys) {
		if (GetPair(key, result) == TJS_S_OK) {
			CurrentKey = new tjs_char[TJS_strlen(key)+1];
			TJS_strcpy(CurrentKey, key);
			CachedKeys.erase(key);
			delete[] key;
			return TJS_S_OK;
		}
	}
	
	// not found (error)
	result->Clear();
	CurrentKey = nullptr;
	return TJS_E_MEMBERNOTFOUND;
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_DictionaryIterator::MoveNext(tTJSVariant *result)
{
	if (CachedKeys.empty() && !UpdateKeys()) {
		// exhausted
		if (CurrentKey) {
			VisitedKeys.insert(CurrentKey);
			CurrentKey = nullptr;
		}
		if (result) *result = (tjs_int)0;
		return TJS_S_OK;
	}
	tTJSVariant dummy;
	if (CurrentKey) VisitedKeys.insert(CurrentKey);
	for (const tjs_char *key : CachedKeys) {
		if (isExist(key)) {
			CurrentKey = new tjs_char[TJS_strlen(key)+1];
			TJS_strcpy(CurrentKey, key);
			CachedKeys.erase(key);
			delete[] key;
			if (result) *result = (tjs_int)1;
			return TJS_S_OK;
		}
	}
	CurrentKey = nullptr;
	if (result) *result = (tjs_int)0;
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
bool tTJSNI_DictionaryIterator::UpdateKeys(void)
{
	class tCallback : public tTJSDispatch
	{
	public:
		std::vector<const tjs_char*> keys;
		tjs_error TJS_INTF_METHOD FuncCall(
			tjs_uint32 flag, const tjs_char *membername, tjs_uint32 *hint,
			tTJSVariant *result, tjs_int numparams, tTJSVariant **param,
			iTJSDispatch2 *objthis)
		{	/* param[0] := name
			 * param[1] := flags
			 * param[2] := value */
			tjs_uint32 flags = (tjs_int)*param[1];
			bool is_static = (flag & TJS_STATICMEMBER) == TJS_STATICMEMBER;
			bool is_hidden = (flag & TJS_HIDDENMEMBER) == TJS_HIDDENMEMBER;
			if (!is_static && !is_hidden)
				keys.push_back(param[0]->GetString());
			if(result) *result = (tjs_int)1; // returns true
			return TJS_S_OK;
		}
	};
	
	tCallback callback;
	
	BackEnd->EnumMembers(TJS_IGNOREPROP|TJS_ENUM_NO_VALUE, 
		&tTJSVariantClosure(&callback, nullptr), nullptr);
	
	bool found = false;
	for (const tjs_char *key : callback.keys) {
		if (VisitedKeys.find(key) == VisitedKeys.end()) {
			if (CurrentKey && TJS_stricmp(CurrentKey, key) == 0) continue;
			tjs_char *key1 = new tjs_char[TJS_strlen(key) + 1];
			TJS_strcpy(key1, key);
			CachedKeys.insert(key1);
			found = true;
		}
	}
	
	return found;
}
//---------------------------------------------------------------------------
tjs_error tTJSNI_DictionaryIterator::GetPair(const tjs_char *key, tTJSVariant *result)
{
	tTJSVariant val;
	tjs_error hr = BackEnd->PropGet(TJS_MEMBERMUSTEXIST, key, nullptr, &val, BackEnd);
	if (hr != TJS_S_OK) return hr;
	
	auto array = TJSCreateArrayObject();
	tTJSVariant k = key;
	tTJSVariant *params[2]; params[0] = &k; params[1] = &val;
	array->FuncCall(0, TJS_W("push"), nullptr, nullptr, 2, params, array);
	*result = tTJSVariant(array, array);
	array->Release();
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_DictionaryIterator::Each(action_t action)
{
	tTJSVariant next;
	tTJSVariant keyval;
	
	tjs_error hr = MoveNext(&next);
	if (TJS_FAILED(hr)) return hr;
	
	tjs_int index = 0;
	while (next.operator bool()) {
		hr = GetCurrent(&keyval);
		if (TJS_FAILED(hr)) return hr;
		
		hr = action(&keyval, index++);
		if (TJS_FAILED(hr) || hr == TJS_S_FALSE) return hr;
		// `TJS_S_FALSE` means "break"
		
		hr = MoveNext(&next);
		if (TJS_FAILED(hr)) return hr;
	}
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_DictionaryIterator::Map(tTJSVariant *result, func_t map)
{
	tTJSDictionaryObject *dict = (tTJSDictionaryObject*)TJSCreateDictionaryObject();
	
	tjs_error hr = Each([&](tTJSVariant *keyval, tjs_int idx) {
		tTJSVariant r;
		tjs_error hr = map(&r, keyval, idx);
		if (TJS_FAILED(hr)) return hr;
		
		/* If map operation returns
		 * - Array object:
		 *     It will be treated as [key, value] pair.
		 *     If the object has only one element, it will be treated as [key, void].
		 *     If the object is empty, this iteration will be ignored.
		 * - Other Object:
		 *     It will be treated as a new value with same key.
		 */
		tTJSVariant key, val;
		if (TJS_S_TRUE == TJSDefaultIsInstanceOf(0, r, TJS_W("Array"), nullptr)) {
			tjs_error hr = decompose(&r, &key, &val);
			if (TJS_FAILED(hr)) return hr;
			
			auto keystr = key.AsString();
			dict->PropSet(TJS_MEMBERENSURE|TJS_IGNOREPROP, *keystr, nullptr, &val, dict);
			keystr->Release();
		} else {
			tjs_error hr = decompose(keyval, &key, nullptr);
			if (TJS_FAILED(hr)) return hr;
			dict->PropSet(TJS_MEMBERENSURE|TJS_IGNOREPROP, key.GetString(), nullptr, &r, dict);
		}
		return TJS_S_OK;
	});
	
	if (result) *result = tTJSVariant(dict, dict);
	dict->Release();
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_DictionaryIterator::Filter(tTJSVariant *result, func_t pred)
{
	tTJSDictionaryObject *dict = (tTJSDictionaryObject*)TJSCreateDictionaryObject();
	
	tjs_error hr = Each([&](tTJSVariant *keyval, tjs_int idx) {
		tTJSVariant r;
		tjs_error hr = pred(&r, keyval, idx);
		if (TJS_FAILED(hr)) return hr;
		if (r.operator bool()) {
			tTJSVariant key, val;
			tjs_error hr = decompose(keyval, &key, &val);
			if (TJS_FAILED(hr)) return hr;
			auto keystr = key.AsString();
			dict->PropSet(TJS_MEMBERENSURE|TJS_IGNOREPROP, *keystr, nullptr, &val, dict);
			keystr->Release();
		}
		return hr;
	});
	
	if (result) *result = tTJSVariant(dict, dict);
	dict->Release();
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_DictionaryIterator::Keys(tTJSVariant *result)
{
	class tCallback : public tTJSDispatch
	{
	public:
		tTJSArrayObject *keys = (tTJSArrayObject*)TJSCreateArrayObject();
		tjs_error TJS_INTF_METHOD FuncCall(
			tjs_uint32 flag, const tjs_char *membername, tjs_uint32 *hint,
			tTJSVariant *result, tjs_int numparams, tTJSVariant **param,
			iTJSDispatch2 *objthis)
		{	/* param[0] := name
			 * param[1] := flags
			 * param[2] := value */
			tjs_uint32 flags = (tjs_int)*param[1];
			bool is_static = (flag & TJS_STATICMEMBER) == TJS_STATICMEMBER;
			bool is_hidden = (flag & TJS_HIDDENMEMBER) == TJS_HIDDENMEMBER;
			if (!is_static && !is_hidden)
				keys->FuncCall(0, TJS_W("add"), nullptr, nullptr, 1, &param[0], keys);
			if(result) *result = (tjs_int)1; // returns true
			return TJS_S_OK;
		}
	};
	
	tCallback callback;
	
	this->BackEnd->EnumMembers(TJS_IGNOREPROP|TJS_ENUM_NO_VALUE, 
		&tTJSVariantClosure(&callback, nullptr), nullptr);
	
	if (result) *result = tTJSVariant(callback.keys, callback.keys);
	callback.keys->Release();
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_DictionaryIterator::Values(tTJSVariant *result)
{
	class tCallback : public tTJSDispatch
	{
	public:
		tTJSArrayObject *values = (tTJSArrayObject*)TJSCreateArrayObject();
		tjs_error TJS_INTF_METHOD FuncCall(
			tjs_uint32 flag, const tjs_char *membername, tjs_uint32 *hint,
			tTJSVariant *result, tjs_int numparams, tTJSVariant **param,
			iTJSDispatch2 *objthis)
		{	/* param[0] := name
			 * param[1] := flags
			 * param[2] := value */
			tjs_uint32 flags = (tjs_int)*param[1];
			bool is_static = (flag & TJS_STATICMEMBER) == TJS_STATICMEMBER;
			bool is_hidden = (flag & TJS_HIDDENMEMBER) == TJS_HIDDENMEMBER;
			if (!is_static && !is_hidden) {
				values->FuncCall(0, TJS_W("add"), nullptr, nullptr, 1, &param[2], values);
			}
			if(result) *result = (tjs_int)1; // returns true
			return TJS_S_OK;
		}
	};
	
	tCallback callback;
	
	this->BackEnd->EnumMembers(TJS_IGNOREPROP, 
		&tTJSVariantClosure(&callback, nullptr), nullptr);
	
	if (result) *result = tTJSVariant(callback.values, callback.values);
	callback.values->Release();
	return TJS_S_OK;
}
//---------------------------------------------------------------------------



//---------------------------------------------------------------------------
// tTJSNC_DictionaryIterator : TJS Native Class : DictionaryIterator
//---------------------------------------------------------------------------
tjs_uint32 tTJSNC_DictionaryIterator::ClassID = (tjs_uint32)-1;
//---------------------------------------------------------------------------
// call from ONLY tjs.cpp!
tTJSNC_DictionaryIterator::tTJSNC_DictionaryIterator()
	: inherited(TJS_W("DictionaryIterator"))
{
	DictionaryIterator = this;
	
	// class constructor
	TJS_BEGIN_NATIVE_MEMBERS(/*TJS class name*/DictionaryIterator)
//----------------------------------------------------------------------
	TJS_DECL_EMPTY_FINALIZE_METHOD
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_CONSTRUCTOR_DECL(/*var. name*/_this, /*var. type*/tTJSNI_DictionaryIterator,
	/*TJS class name*/DictionaryIterator)
{
	// inherit `Iterator` class
	tTJSVariant name("Iterator");
	objthis->ClassInstanceInfo(TJS_CII_ADD, 0, &name);
	return TJS_S_OK;
}
TJS_END_NATIVE_CONSTRUCTOR_DECL(/*TJS class name*/DictionaryIterator)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/current)
{
	if(result) {
		TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_DictionaryIterator);
		return _this->GetCurrent(result);
	}
	return TJS_S_OK;
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/current)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/moveNext)
{
	TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_DictionaryIterator);
	return _this->MoveNext(result);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/moveNext)
//----------------------------------------------------------------------
TJS_ITERATOR_METHOD_DELEGATE(each, DictEach, tTJSNI_DictionaryIterator)
//----------------------------------------------------------------------
TJS_ITERATOR_METHOD_DELEGATE(map, DictMap, tTJSNI_DictionaryIterator)
//----------------------------------------------------------------------
TJS_ITERATOR_METHOD_DELEGATE(filter, DictFilter, tTJSNI_DictionaryIterator)
//----------------------------------------------------------------------
TJS_ITERATOR_METHOD_DELEGATE(reduce, Reduce, tTJSNI_DictionaryIterator)
//----------------------------------------------------------------------
TJS_ITERATOR_METHOD_DELEGATE(drop, Drop, tTJSNI_DictionaryIterator)
//----------------------------------------------------------------------
TJS_ITERATOR_METHOD_DELEGATE(take, Take, tTJSNI_DictionaryIterator)
//----------------------------------------------------------------------
TJS_ITERATOR_METHOD_DELEGATE(all, DictAll, tTJSNI_DictionaryIterator)
//----------------------------------------------------------------------
TJS_ITERATOR_METHOD_DELEGATE(any, DictAny, tTJSNI_DictionaryIterator)
//----------------------------------------------------------------------
TJS_ITERATOR_METHOD_DELEGATE(none, DictNone, tTJSNI_DictionaryIterator)
//----------------------------------------------------------------------
TJS_ITERATOR_METHOD_DELEGATE(partition, DictPartition, tTJSNI_DictionaryIterator)
//----------------------------------------------------------------------
TJS_ITERATOR_METHOD_DELEGATE(dropWhile, DictDropWhile, tTJSNI_DictionaryIterator)
//----------------------------------------------------------------------
TJS_ITERATOR_METHOD_DELEGATE(takeWhile, DictTakeWhile, tTJSNI_DictionaryIterator)
//----------------------------------------------------------------------
TJS_ITERATOR_METHOD_DELEGATE(find, DictFind, tTJSNI_DictionaryIterator)
//----------------------------------------------------------------------
TJS_ITERATOR_METHOD_DELEGATE(findIndex, DictFindIndex, tTJSNI_DictionaryIterator)
//----------------------------------------------------------------------
TJS_ITERATOR_METHOD_DELEGATE(pairwise, Pairwise, tTJSNI_DictionaryIterator)
//----------------------------------------------------------------------
TJS_ITERATOR_METHOD_DELEGATE(slice, Slice, tTJSNI_DictionaryIterator)
//----------------------------------------------------------------------
TJS_ITERATOR_METHOD_DELEGATE(reject, DictReject, tTJSNI_DictionaryIterator)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/keys)
{
	TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_DictionaryIterator);
	return _this->Keys(result);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/keys)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/values)
{
	TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_DictionaryIterator);
	return _this->Values(result);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/values)
//----------------------------------------------------------------------
	TJS_END_NATIVE_MEMBERS
}
//----------------------------------------------------------------------
tTJSNativeInstance *tTJSNC_DictionaryIterator::CreateNativeInstance()
{
	return new tTJSNI_DictionaryIterator(); 
}
//----------------------------------------------------------------------



//---------------------------------------------------------------------------
// TJSCreateArrayIterator
//---------------------------------------------------------------------------
iTJSDispatch2 * TJSCreateArrayIterator(tTJSVariant *array, iTJSDispatch2 **classout)
{
	// create an ArrayIterator object
	if(classout) *classout = ArrayIterator, ArrayIterator->AddRef();
	
	iTJSDispatch2 *iter;
	tjs_error hr = ArrayIterator->CreateNew(0, nullptr, nullptr, &iter, 1, &array, ArrayIterator);
	return iter;
}



//---------------------------------------------------------------------------
// TJSCreateDictionaryIterator
//---------------------------------------------------------------------------
iTJSDispatch2 * TJSCreateDictionaryIterator(tTJSVariant *dict, iTJSDispatch2 **classout)
{
	// create a DictionaryIterator object
	if(classout) *classout = DictionaryIterator, DictionaryIterator->AddRef();
	
	iTJSDispatch2 *iter;
	tjs_error hr = DictionaryIterator->CreateNew(0, nullptr, nullptr, &iter, 1, &dict, DictionaryIterator);
	return iter;
}

//----------------------------------------------------------------------
}
//----------------------------------------------------------------------

