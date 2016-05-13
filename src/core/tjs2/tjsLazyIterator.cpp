//---------------------------------------------------------------------------
/*
	TJS2 Script Engine
	Copyright (C) 2000 W.Dee <dee@kikyou.info> and contributors

	See details of license at "license.txt"
*/
//---------------------------------------------------------------------------
// Iterator.Lazy class implementation
//---------------------------------------------------------------------------

#include <functional>
#include "tjsLazyIterator.h"
#include "tjsLazyIteratorinternal.h"
#include "tjsArray.h"

namespace TJS
{
namespace
{
tTJSNC_LazyMapIterator      *LazyMapIterator = nullptr;
tTJSNC_LazyFilterIterator   *LazyFilterIterator = nullptr;

tjs_uint32 ClassID_Lazy;
tjs_uint32 ClassID_LazyMap;
tjs_uint32 ClassID_LazyFilter;

iTJSDispatch2 *TJSCreateLazyMapIterator(ParamList params, tTJSLazyIterator *backend, iTJSDispatch2 *source);
iTJSDispatch2 *TJSCreateLazyFilterIterator(ParamList params, tTJSLazyIterator *backend, iTJSDispatch2 *source);

//---------------------------------------------------------------------------
// Utility Functions
//---------------------------------------------------------------------------

typedef std::function<tjs_error(tTJSVariant*,tjs_int)> Action;
typedef std::function<bool(tTJSVariant*,tjs_int,bool*)> Pred;

#define TJS_LAZY_ITERATOR_METHOD_DECL(name) \
tjs_error name(tTJSVariant *result, tjs_int numparams, \
tTJSVariant **param, tTJSLazyIterator *ni, iTJSDispatch2 *source)
#define TJS_LAZY_ITERATOR_PREPARE_PARAMLIST(paramList, fn, fn_this) \
tTJSVariant map(fn, nullptr); \
tTJSVariant ctx(fn_this, nullptr); \
ParamList paramList(numparams + 1); \
params[0] = &map; params[1] = &ctx; \
for (tjs_int i = 1; i < numparams; ++i) paramList[i + 1] = param[i]; \


// Each ---------------------------------------------------------------------
TJS_LAZY_ITERATOR_METHOD_DECL(Each)
{
	TJS_ITERATOR_CHECK_FUNCTION2(0, fn, fn_this, source);
	TJS_ITERATOR_PREPARE_ARRAY_PARAMLIST(paramList);
	paramList.UpdateIndex(-1);
	
	tTJSVariant move_next;
	tTJSVariant item;
	
	move_next.Clear();
	tjs_error hr = ni->MoveNext(&move_next);
	if (TJS_FAILED(hr)) return hr;
	while (move_next.operator bool()) {
		item.Clear();
		hr = ni->GetCurrent(&item);
		if (TJS_FAILED(hr)) return hr;
		
		paramList[0] = &item;
		paramList.IncrementIndex();
		hr = fn->FuncCall(0, nullptr, nullptr, nullptr, paramList.Count, paramList.Params, fn_this);
		if (TJS_FAILED(hr) || hr == TJS_S_FALSE) return hr;
		// `TJS_S_FALSE` means "break"
		
		move_next.Clear();
		hr = ni->MoveNext(&move_next);
		if (TJS_FAILED(hr)) return hr;
	}
	
	return TJS_S_OK;
}

// Each ---------------------------------------------------------------------
tjs_error Each(tTJSVariant *result , Action action, tTJSLazyIterator *ni)
{
	tTJSVariant move_next;
	tTJSVariant item;
	
	tjs_uint32 move_next_hint = 0;
	tjs_uint32 current_hint = 0;
	
	if (result) result->Clear();
	tjs_int index = 0;
	move_next.Clear();
	tjs_error hr = ni->MoveNext(&move_next);
	if (TJS_FAILED(hr)) return hr;
	while (move_next.operator bool()) {
		item.Clear();
		hr = ni->GetCurrent(&item);
		if (TJS_FAILED(hr)) return hr;
		
		hr = action(&item, index++);
		if (TJS_FAILED(hr) || hr == TJS_S_FALSE) return hr;
		// `TJS_S_FALSE` means "break"
		
		move_next.Clear();
		hr = ni->MoveNext(&move_next);
		if (TJS_FAILED(hr)) return hr;
	}
	
	return TJS_S_OK;
}

// Map ----------------------------------------------------------------------
TJS_LAZY_ITERATOR_METHOD_DECL(Map)
{
	TJS_ITERATOR_CHECK_FUNCTION2(0, fn, fn_this, source);
	TJS_LAZY_ITERATOR_PREPARE_PARAMLIST(params, fn, fn_this);
	
	iTJSDispatch2 *iter = TJSCreateLazyMapIterator(std::move(params), ni, source);
	if (result) *result = tTJSVariant(iter, iter);
	iter->Release();
	
	return TJS_S_OK;
}

// Filter -------------------------------------------------------------------
TJS_LAZY_ITERATOR_METHOD_DECL(Filter)
{
	TJS_ITERATOR_CHECK_FUNCTION2(0, fn, fn_this, source);
	TJS_LAZY_ITERATOR_PREPARE_PARAMLIST(params, fn, fn_this);
	
	iTJSDispatch2 *iter = TJSCreateLazyFilterIterator(std::move(params), ni, source);
	if (result) *result = tTJSVariant(iter, iter);
	iter->Release();
	
	return TJS_S_OK;
}

// Filter -------------------------------------------------------------------
tjs_error Filter(tTJSVariant *result, Pred pred,
				tTJSLazyIterator *ni, iTJSDispatch2 *source)
{
	struct FilterCallback : public tTJSDispatch {
		Pred Fn;
		tjs_int Index = 0;
		tjs_error TJS_INTF_METHOD FuncCall(
		tjs_uint32 flag, const tjs_char *membername, tjs_uint32 *hint,
		tTJSVariant *result, tjs_int numparams, tTJSVariant **param,
		iTJSDispatch2 *objthis) {
			bool break_now = false;
			*result = Fn(param[0], Index++, &break_now);
			return break_now ? TJS_S_FALSE : TJS_S_TRUE;
		}
	};
	
	FilterCallback *callback = new FilterCallback();
	callback->Fn = pred;
	
	tTJSVariant filter(callback, nullptr);
	tTJSVariant ctx(source, nullptr);
	callback->Release();
	
	ParamList params(2);
	params[0] = &filter;
	params[1] = &ctx;
	
	iTJSDispatch2 *iter = TJSCreateLazyFilterIterator(std::move(params), ni, source);
	if (result) *result = tTJSVariant(iter, iter);
	iter->Release();
	
	return TJS_S_OK;
}

// Reduce -------------------------------------------------------------------
TJS_LAZY_ITERATOR_METHOD_DECL(Reduce)
{
	TJS_ITERATOR_CHECK_FUNCTION2(0, fn, fn_this, source);
	ParamList paramList(numparams + 2);
	/* paramList[0]  := accumulator
	 * paramList[1]  := current value
	 * paramList[2]  := index
	 * paramList[..] := *args */
	paramList.SetIndex(2, 0);
	for (tjs_int i = 2; i < numparams; ++i)	{
		paramList[i + 1] = param[i];
	}
	tTJSVariant *init = 1 < numparams ? param[1] : nullptr;
	
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
	tjs_error hr = ni->MoveNext(&next);
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
	paramList[0] = &acc;
	paramList[1] = &cur;
	
	if (init) {
		// 1.2.
		acc = *init;
	} else {
		hr = ni->GetCurrent(&acc);
		if (TJS_FAILED(hr)) return hr;
		hr = ni->MoveNext(&next);
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
		hr = ni->GetCurrent(&cur);
		if (TJS_FAILED(hr)) return hr;
		hr = fn->FuncCall(0, nullptr, nullptr, &v, paramList.Count, paramList.Params, fn_this);
		if (TJS_FAILED(hr)) return hr;
		if (hr == TJS_S_FALSE) break;
		acc = v;
		hr = ni->MoveNext(&next);
		if (TJS_FAILED(hr)) return hr;
	} while (next.operator bool() && hr != TJS_S_FALSE);
	
	if (result) *result = v;
	return TJS_S_OK;
}

// Drop ---------------------------------------------------------------------
TJS_LAZY_ITERATOR_METHOD_DECL(Drop)
{
	TJS_ITERATOR_PREPARE_INT(count);
	auto pred = [=](tTJSVariant *item, tjs_int idx, bool *break_now) {
		return count <= idx;
	};
	return Filter(result, pred, ni, source);
}

// Take ---------------------------------------------------------------------
TJS_LAZY_ITERATOR_METHOD_DECL(Take)
{
	TJS_ITERATOR_PREPARE_INT(count);
	auto pred = [=](tTJSVariant *item, tjs_int idx, bool *break_now) {
		bool b = idx < count;
		*break_now = count <= idx + 1;
		return b;
	};
	return Filter(result, pred, ni, source);
}

// All ----------------------------------------------------------------------
TJS_LAZY_ITERATOR_METHOD_DECL(All)
{
	TJS_ITERATOR_CHECK_FUNCTION2(0, fn, fn_this, source);
	TJS_ITERATOR_PREPARE_ARRAY_PARAMLIST(params);
	
	auto action = [&](tTJSVariant *item, tjs_int idx) {
		params[0] = item;
		params.UpdateIndex(idx);
		tTJSVariant pred;
		pred.Clear();
		(void)fn->FuncCall(0, nullptr, nullptr, &pred, params.Count, params.Params, fn_this);
		return pred.operator bool() ? TJS_S_TRUE : TJS_S_FALSE;
	};
	
	tjs_error hr = Each(nullptr, action, ni);
	if (TJS_FAILED(hr)) return hr;
	if (result) *result = (tjs_int)(hr == TJS_S_FALSE ? 0 : 1);
	return hr;
}

// Any ----------------------------------------------------------------------
TJS_LAZY_ITERATOR_METHOD_DECL(Any)
{
	TJS_ITERATOR_CHECK_FUNCTION2(0, fn, fn_this, source);
	TJS_ITERATOR_PREPARE_ARRAY_PARAMLIST(params);
	
	auto action = [&](tTJSVariant *item, tjs_int idx) {
		params[0] = item;
		params.UpdateIndex(idx);
		tTJSVariant pred;
		pred.Clear();
		(void)fn->FuncCall(0, nullptr, nullptr, &pred, params.Count, params.Params, fn_this);
		return pred.operator bool() ? TJS_S_FALSE : TJS_S_TRUE;
	};
	
	tjs_error hr = Each(nullptr, action, ni);
	if (TJS_FAILED(hr)) return hr;
	if (result) *result = (tjs_int)(hr == TJS_S_FALSE ? 1 : 0);
	return hr;
}

// None ---------------------------------------------------------------------
TJS_LAZY_ITERATOR_METHOD_DECL(None)
{
	TJS_ITERATOR_CHECK_FUNCTION2(0, fn, fn_this, source);
	TJS_ITERATOR_PREPARE_ARRAY_PARAMLIST(params);
	
	auto action = [&](tTJSVariant *item, tjs_int idx) {
		params[0] = item;
		params.UpdateIndex(idx);
		tTJSVariant pred;
		pred.Clear();
		(void)fn->FuncCall(0, nullptr, nullptr, &pred, params.Count, params.Params, fn_this);
		return pred.operator bool() ? TJS_S_FALSE : TJS_S_TRUE;
	};
	
	tjs_error hr = Each(nullptr, action, ni);
	if (TJS_FAILED(hr)) return hr;
	if (result) *result = (tjs_int)(hr == TJS_S_FALSE ? 0 : 1);
	return hr;
}

// ToArray ------------------------------------------------------------------
TJS_LAZY_ITERATOR_METHOD_DECL(ToArray)
{
	if (numparams != 0) return TJS_E_BADPARAMCOUNT;
	
	tjs_uint32 add_hint = 0;
	iTJSDispatch2 *array = TJSCreateArrayObject();
	auto action = [&](tTJSVariant *item, tjs_int index) {
		return array->FuncCall(0, TJS_W("add"), &add_hint, nullptr, 1, &item, array);
	};
	
	tjs_error hr = Each(nullptr, action, ni);
	
	if (result && TJS_SUCCEEDED(hr)) *result = tTJSVariant(array, array);
	array->Release();
	
	return hr;
}

#define TJS_LAZY_ITERATOR_METHOD_DELEGATE(methodname, funcname, classname) \
TJS_BEGIN_NATIVE_METHOD_DECL(methodname) \
{ \
TJS_GET_NATIVE_INSTANCE(_this, classname); \
return funcname(result, numparams, param, _this, _this->GetSource()); \
} \
TJS_END_NATIVE_METHOD_DECL(methodname)

#define TJS_LAZY_ITERATOR_METHOD_DELEGATE_ALL(classname) \
TJS_LAZY_ITERATOR_METHOD_DELEGATE(each, Each, classname) \
TJS_LAZY_ITERATOR_METHOD_DELEGATE(map, Map, classname) \
TJS_LAZY_ITERATOR_METHOD_DELEGATE(filter, Filter, classname) \
TJS_LAZY_ITERATOR_METHOD_DELEGATE(reduce, Reduce, classname) \
TJS_LAZY_ITERATOR_METHOD_DELEGATE(drop, Drop, classname) \
TJS_LAZY_ITERATOR_METHOD_DELEGATE(take, Take, classname) \
TJS_LAZY_ITERATOR_METHOD_DELEGATE(all, All, classname) \
TJS_LAZY_ITERATOR_METHOD_DELEGATE(any, Any, classname) \
TJS_LAZY_ITERATOR_METHOD_DELEGATE(none, None, classname) \
/*TJS_LAZY_ITERATOR_METHOD_DELEGATE(partition, Partition, classname) \
TJS_LAZY_ITERATOR_METHOD_DELEGATE(dropWhile, DropWhile, classname) \
TJS_LAZY_ITERATOR_METHOD_DELEGATE(takeWhile, TakeWhile, classname) \
TJS_LAZY_ITERATOR_METHOD_DELEGATE(find, Find, classname) \
TJS_LAZY_ITERATOR_METHOD_DELEGATE(findIndex, FindIndex, classname) \
TJS_LAZY_ITERATOR_METHOD_DELEGATE(pairwise, Pairwise, classname) \
TJS_LAZY_ITERATOR_METHOD_DELEGATE(slice, Slice, classname) \
TJS_LAZY_ITERATOR_METHOD_DELEGATE(reject, Reject, classname)*/ \
TJS_LAZY_ITERATOR_METHOD_DELEGATE(toArray, ToArray, classname)

}



//---------------------------------------------------------------------------
// tTJSNI_LazyIterator : TJS Native Instance : Iterator.Lazy
//---------------------------------------------------------------------------
tTJSNI_LazyIterator::tTJSNI_LazyIterator()
	: inherited()
{
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_LazyIterator::Construct(tjs_int numparams, tTJSVariant **param, iTJSDispatch2 *tjs_obj)
{
	tjs_error hr = inherited::Construct(numparams, param, tjs_obj);
	if (TJS_FAILED(hr)) return hr;
	
	BackEnd = tjs_obj;
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
void TJS_INTF_METHOD tTJSNI_LazyIterator::Destruct()
{
	inherited::Destruct();
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD tTJSNI_LazyIterator::ForceGetCurrent(tTJSVariant *result)
{
	return BackEnd->FuncCall(0, TJS_W("current"), nullptr, result, 0, nullptr, BackEnd);
}
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD tTJSNI_LazyIterator::MoveNextInternal(tTJSVariant *result)
{
	return BackEnd->FuncCall(0, TJS_W("moveNext"), nullptr, result, 0, nullptr, BackEnd);
}
//---------------------------------------------------------------------------



//---------------------------------------------------------------------------
// tTJSNC_LazyIterator : TJS Native Class : Iterator.Lazy
//---------------------------------------------------------------------------
tjs_uint32 tTJSNC_LazyIterator::ClassID = (tjs_uint32)-1;

// call from ONLY tjs.cpp!
tTJSNC_LazyIterator::tTJSNC_LazyIterator()
	: inherited(TJS_W("Lazy"))
{
	// prepare classes for internal use
	{
		LazyMapIterator = new tTJSNC_LazyMapIterator();
		LazyFilterIterator = new tTJSNC_LazyFilterIterator();
		LazyMapIterator->SetSuper(this);
		LazyFilterIterator->SetSuper(this);
	}
//#ifdef _DEBUG
	// add `__LazyMap__` and `__LazyFilter__` property
	{
		// This operation increments the refcount of this object,
		// then `Release` must destruct this object when `RefCount` is 3 (not 1).
		tTJSVariant map(LazyMapIterator, nullptr);
		tTJSVariant fil(LazyFilterIterator, nullptr);
		LazyMapIterator->Release();
		LazyFilterIterator->Release();
		PropSet(TJS_MEMBERENSURE, TJS_W("__LazyMap__"), nullptr, &map, this);
		PropSet(TJS_MEMBERENSURE, TJS_W("__LazyFilter__"), nullptr, &fil, this);
	}
//#endif
	
	// class constructor
	TJS_BEGIN_NATIVE_MEMBERS(/*TJS class name*/Lazy)
//----------------------------------------------------------------------
	TJS_DECL_EMPTY_FINALIZE_METHOD
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_CONSTRUCTOR_DECL(/*var. name*/_this,
	/*var. type*/tTJSNI_LazyIterator, /*TJS class name*/Lazy)
{
	// inherit `Iterator` class
	tTJSVariant name("Iterator");
	objthis->ClassInstanceInfo(TJS_CII_ADD, 0, &name);
	return TJS_S_OK;
}
TJS_END_NATIVE_CONSTRUCTOR_DECL(/*TJS class name*/Lazy)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(current)
{
	// default implementation
	return TJS_E_INVALIDTYPE;
}
TJS_END_NATIVE_METHOD_DECL(current)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(moveNext)
{
	// default implementation
	if (result) *result = (tjs_int)1;
	return TJS_S_OK;
}
TJS_END_NATIVE_METHOD_DECL(moveNext)
//----------------------------------------------------------------------
TJS_LAZY_ITERATOR_METHOD_DELEGATE_ALL(tTJSNI_LazyIterator)
//----------------------------------------------------------------------
	ClassID_Lazy = TJS_NCM_CLASSID;
//----------------------------------------------------------------------
	TJS_END_NATIVE_MEMBERS
}
//----------------------------------------------------------------------
tjs_uint TJS_INTF_METHOD
tTJSNC_LazyIterator::Release()
{
	// try delete LazyIterator; see above
	if (GetRefCount() == 3) {
		LazyMapIterator->SetSuperWithoutRelease(nullptr);
		LazyFilterIterator->SetSuperWithoutRelease(nullptr);
		inherited::Release();
		inherited::Release();
	}
	
	return inherited::Release();
}
//----------------------------------------------------------------------
tTJSNativeInstance *tTJSNC_LazyIterator::CreateNativeInstance()
{
	return new tTJSNI_LazyIterator();
}
//----------------------------------------------------------------------



//---------------------------------------------------------------------------
// TJS `Iterator.LazyMap` class/instance (Internal use only)
//---------------------------------------------------------------------------
// - ctor
//   - new Iterator.LazyMap(proc, ctx, args...)
//     - proc
//         Procedure maps back-end yielded element to another
//         Arguments of this procedure are:
//           0: item
//           1: index
//           2.. : `args`
//     - ctx
//         The context object of `proc`.
//     - args
//         Arguments for `proc`
//----------------------------------------------------------------------
tTJSNI_LazyMapIterator::tTJSNI_LazyMapIterator() : inherited() { }
//----------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_LazyMapIterator::Construct(tjs_int numparams, tTJSVariant **param, iTJSDispatch2 *tjs_obj)
{
	tjs_error hr = inherited::Construct(numparams, param, tjs_obj);
	if (TJS_FAILED(hr)) return hr;
	if (numparams < 2) return TJS_E_BADPARAMCOUNT;
	Proc    = param[0]->AsObject();
	Context = param[1]->AsObject();
	Params = ParamList(numparams);
	Params.SetIndex(1, -1);
	/* Params[0]  := item
	 * Params[1]  := index
	 * Params[..] := remain args */
	for (tjs_int i = 2; i < numparams; ++i)
		Params[i] = param[i];
	return TJS_S_OK;
}
//----------------------------------------------------------------------
void TJS_INTF_METHOD tTJSNI_LazyMapIterator::Destruct()
{
	if (Proc) Proc->Release();
	if (Context) Context->Release();
	inherited::Destruct();
}
//----------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_LazyMapIterator::ForceGetCurrent(tTJSVariant *result)
{
	// project a back-end yielded element to the new element
	tTJSVariant item;
	tjs_error hr = BackEnd->GetCurrent(&item);
	if (TJS_FAILED(hr)) return hr;
	Params[0] = &item;
	Params.UpdateIndex(Index);
	return Proc->FuncCall(0, nullptr, nullptr, result,
				Params.Count, Params.Params, Context);
}
//----------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_LazyMapIterator::MoveNextInternal(tTJSVariant *result)
{
	// do nothing, delegate to the back-end object
	return BackEnd->MoveNext(result);
}
//----------------------------------------------------------------------


//----------------------------------------------------------------------
tjs_uint32 tTJSNC_LazyMapIterator::ClassID = (tjs_uint)-1;
//----------------------------------------------------------------------
tTJSNC_LazyMapIterator::tTJSNC_LazyMapIterator()
	: inherited(TJS_W("LazyMap"))
{
	// class constructor
	TJS_BEGIN_NATIVE_MEMBERS(/*TJS class name*/LazyMap)
//--------------------------------------------------------------
	TJS_DECL_EMPTY_FINALIZE_METHOD
//--------------------------------------------------------------
TJS_BEGIN_NATIVE_CONSTRUCTOR_DECL(_this, tTJSNI_LazyMapIterator, LazyMap)
{
	// inherit `Iterator.Lazy` class
	tTJSVariant name1("Lazy");
	tTJSVariant name2("Iterator");
	objthis->ClassInstanceInfo(TJS_CII_ADD, 0, &name1);
	objthis->ClassInstanceInfo(TJS_CII_ADD, 0, &name2);
	return TJS_S_OK;
}
TJS_END_NATIVE_CONSTRUCTOR_DECL(LazyMap)
//--------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(current)
{
	TJS_GET_NATIVE_INSTANCE(_this, tTJSNI_LazyMapIterator);
	return _this->GetCurrent(result);
}
TJS_END_NATIVE_METHOD_DECL(current)
//--------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(moveNext)
{
	TJS_GET_NATIVE_INSTANCE(_this, tTJSNI_LazyMapIterator);
	return _this->MoveNext(result);
}
TJS_END_NATIVE_METHOD_DECL(moveNext)
//--------------------------------------------------------------
TJS_LAZY_ITERATOR_METHOD_DELEGATE_ALL(tTJSNI_LazyMapIterator)
//----------------------------------------------------------------------
	ClassID_LazyMap = TJS_NCM_CLASSID;
//--------------------------------------------------------------
	TJS_END_NATIVE_MEMBERS
}
//--------------------------------------------------------------
tTJSNativeInstance *tTJSNC_LazyMapIterator::CreateNativeInstance() {
	return new tTJSNI_LazyMapIterator();
}



//---------------------------------------------------------------------------
// TJS `Iterator.LazyFilter` class/instance (Internal use only)
//---------------------------------------------------------------------------
// - ctor
//   - new Iterator.LazyFilter(proc, ctx, args...)
//     - proc
//         Procedure maps back-end yielded element to another
//         Arguments of this procedure are:
//           0: item
//           1: index
//           2.. : `args`
//     - ctx
//         The context object of `proc`.
//     - args
//         Arguments for `proc`
//----------------------------------------------------------------------
tTJSNI_LazyFilterIterator::tTJSNI_LazyFilterIterator() : inherited() { }
//----------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_LazyFilterIterator::Construct(tjs_int numparams, tTJSVariant **param, iTJSDispatch2 *tjs_obj)
{
	tjs_error hr = inherited::Construct(numparams, param, tjs_obj);
	if (TJS_FAILED(hr)) return hr;
	if (numparams < 2) return TJS_E_BADPARAMCOUNT;
	Proc    = param[0]->AsObject();
	Context = param[1]->AsObject();
	Params = ParamList(numparams);
	Params.SetIndex(1, -1);
	/* Params[0]  := item
	 * Params[1]  := index
	 * Params[..] := remain args */
	for (tjs_int i = 2; i < numparams; ++i)
		Params[i] = param[i];
	return TJS_S_OK;
}
//----------------------------------------------------------------------
void TJS_INTF_METHOD tTJSNI_LazyFilterIterator::Destruct() {
	if (Proc) Proc->Release();
	if (Context) Context->Release();
	inherited::Destruct();
}
//----------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_LazyFilterIterator::ForceGetCurrent(tTJSVariant *result)
{
	// do nothing, delegate to the back-end object
	return BackEnd->GetCurrent(result);
}
//----------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_LazyFilterIterator::MoveNextInternal(tTJSVariant *result)
{
	// - return `false` if the back-end object failed to move to next state
	// - return `false` if the back-end object notify "break" (TJS_S_FALSE)
	// - skip a state if the back-end object successed to move to next state
	//   but this object reject it
	// - otherwise return `true`
	
	if (Break) {
		// already break called
		if (result) *result = (tjs_int)0;  // return `false`
		return TJS_S_OK;
	}
	
	tTJSVariant pred;
	//tjs_error hr = BackEnd->FuncCall(0, TJS_W("moveNext"),
	//					nullptr, &pred, 0, nullptr, Context);
	tjs_error hr = BackEnd->MoveNext(&pred);
	while ((hr == TJS_S_OK || hr == TJS_S_TRUE) && pred.operator bool()) {
		// peek current element to detect
		//   wheather we can go to the next state or not
		tTJSVariant item;
		hr = BackEnd->GetCurrent(&item);
		if (TJS_FAILED(hr))
			return hr;  // unknown error
		
		Params[0] = &item;
		Params.UpdateIndex(Index);
		
		// detection
		hr = Proc->FuncCall(0, nullptr, nullptr, &pred,
				Params.Count, Params.Params, Context);
		if (TJS_FAILED(hr))
			return hr;  // unknown error
		if (hr == TJS_S_FALSE) {
			// "break", but return `true` if move succeeded
			if (result) *result = (tjs_int)(pred.operator bool() ? 1 : 0);
			Break = true;
			return TJS_S_OK;
		}
		
		// now `hr` is either TJS_E_OK or TJS_E_TRUE
		
		if (pred.operator bool()) {
			// success
			if (result) *result = (tjs_int)1;  // return `true`
			return hr;
		} else {
			// rejected, skip this state and move to next
			hr = BackEnd->MoveNext(&pred);
		}
	}
	
	// back-end iterator is exhausted or notify "break"
	if (result) *result = (tjs_int)0; // return `false`
	return TJS_S_OK;
}
//----------------------------------------------------------------------


//----------------------------------------------------------------------
tjs_uint32 tTJSNC_LazyFilterIterator::ClassID = (tjs_uint)-1;
//----------------------------------------------------------------------
tTJSNC_LazyFilterIterator::tTJSNC_LazyFilterIterator()
	: inherited(TJS_W("LazyFilter"))
{
	// class constructor
	TJS_BEGIN_NATIVE_MEMBERS(/*TJS class name*/LazyFilter)
//--------------------------------------------------------------
	TJS_DECL_EMPTY_FINALIZE_METHOD
//--------------------------------------------------------------
TJS_BEGIN_NATIVE_CONSTRUCTOR_DECL(_this, tTJSNI_LazyFilterIterator, LazyFilter)
{
	// inherit `Iterator.Lazy` class
	tTJSVariant name1("Lazy");
	tTJSVariant name2("Iterator");
	objthis->ClassInstanceInfo(TJS_CII_ADD, 0, &name1);
	objthis->ClassInstanceInfo(TJS_CII_ADD, 0, &name2);
	return TJS_S_OK;
}
TJS_END_NATIVE_CONSTRUCTOR_DECL(LazyFilter)
//--------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(current)
{
	TJS_GET_NATIVE_INSTANCE(_this, tTJSNI_LazyFilterIterator);
	return _this->GetCurrent(result);
}
TJS_END_NATIVE_METHOD_DECL(current)
//--------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(moveNext)
{
	TJS_GET_NATIVE_INSTANCE(_this, tTJSNI_LazyFilterIterator);
	return _this->MoveNext(result);
}
TJS_END_NATIVE_METHOD_DECL(moveNext)
//--------------------------------------------------------------
TJS_LAZY_ITERATOR_METHOD_DELEGATE_ALL(tTJSNI_LazyFilterIterator)
//----------------------------------------------------------------------
	ClassID_LazyFilter = TJS_NCM_CLASSID;
//--------------------------------------------------------------
	TJS_END_NATIVE_MEMBERS
}
//--------------------------------------------------------------
tTJSNativeInstance *tTJSNC_LazyFilterIterator::CreateNativeInstance() {
	return new tTJSNI_LazyFilterIterator();
}

namespace {

iTJSDispatch2 *TJSCreateLazyMapIterator(ParamList params, tTJSLazyIterator *backend, iTJSDispatch2 *source)
{
	iTJSDispatch2 *iter;
	LazyMapIterator->CreateNew(0, nullptr, nullptr, &iter,
								params.Count, params.Params, LazyMapIterator);
	tTJSNI_LazyMapIterator *self;
	iter->NativeInstanceSupport(TJS_NIS_GETINSTANCE, ClassID_LazyMap, (iTJSNativeInstance**)&self);
	self->SetBackEnd(backend);
	self->SetSource(source);
	
	return iter;
}

iTJSDispatch2 *TJSCreateLazyFilterIterator(ParamList params, tTJSLazyIterator *backend, iTJSDispatch2 *source)
{
	iTJSDispatch2 *iter;
	LazyFilterIterator->CreateNew(0, nullptr, nullptr, &iter, params.Count,
									params.Params, LazyFilterIterator);
	tTJSNI_LazyFilterIterator *self;
	iter->NativeInstanceSupport(TJS_NIS_GETINSTANCE, ClassID_LazyFilter, (iTJSNativeInstance**)&self);
	self->SetBackEnd(backend);
	self->SetSource(source);
	
	return iter;
}

}



}
