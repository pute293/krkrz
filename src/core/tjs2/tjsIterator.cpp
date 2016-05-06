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
}

//---------------------------------------------------------------------------
// tTJSNI_Iterator : TJS Native Instance : Iterator
//---------------------------------------------------------------------------
tTJSNI_Iterator::tTJSNI_Iterator()
{
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// tTJSNC_Iterator : TJS Native Class : Iterator
//---------------------------------------------------------------------------
tjs_uint32 tTJSNC_Iterator::ClassID = (tjs_uint32)-1;

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
template<typename Action>
tjs_error tTJSNI_ArrayIterator::Each(tTJSVariant *result,
								iTJSDispatch2 *objthis, Action action)
{
	tTJSVariant move_next;
	tTJSVariant item;
	
	tjs_uint32 move_next_hint = 0;
	tjs_uint32 current_hint = 0;
	
	bool break_now = false;
	tjs_int idx = 0;
	move_next.Clear();
	objthis->FuncCall(0, TJS_W("moveNext"), &move_next_hint, &move_next, 0, nullptr, objthis);
	while (move_next.operator bool()) {
		item.Clear();
		(void)objthis->FuncCall(0, TJS_W("current"), &current_hint, &item, 0, nullptr, objthis);
		
		action(&item, idx, &break_now);
		if (break_now) break;
		
		idx += 1;
		move_next.Clear();
		objthis->FuncCall(0, TJS_W("moveNext"), &move_next_hint, &move_next, 0, nullptr, objthis);
	}
	if (result) result->Clear();
	
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
template<typename Action>
tjs_error tTJSNI_ArrayIterator::FilterMap(tTJSVariant *result,
									iTJSDispatch2 *objthis, Action action)
{
	tTJSVariant move_next;
	tTJSVariant item;
	tTJSVariant mapped_item;
	tTJSVariant *mapped_param = &mapped_item;
	bool pred;
	
	tjs_uint32 move_next_hint = 0;
	tjs_uint32 current_hint = 0;
	
	bool break_now = false;
	tjs_int idx = 0;
	tTJSArrayObject *array = (tTJSArrayObject*)TJSCreateArrayObject();
	tjs_uint32 add_hint = 0;
	
	move_next.Clear();
	objthis->FuncCall(0, TJS_W("moveNext"), &move_next_hint, &move_next, 0, nullptr, objthis);
	while (move_next.operator bool()) {
		item.Clear();
		(void)objthis->FuncCall(0, TJS_W("current"), &current_hint, &item, 0, nullptr, objthis);
		
		pred = true;
		mapped_item.Clear();
		action(&item, &mapped_item, idx, &pred, &break_now);
		if (pred) array->FuncCall(0, TJS_W("add"), &add_hint, nullptr, 1, &mapped_param, array);
		if (break_now) break;
		
		idx += 1;
		move_next.Clear();
		objthis->FuncCall(0, TJS_W("moveNext"), nullptr, &move_next, 0, nullptr, objthis);
	}
	if (result) *result = tTJSVariant(array, array);
	array->Release();
	
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
template<typename Action>
tjs_error tTJSNI_ArrayIterator::Reduce(tTJSVariant *result, tTJSVariant *init, iTJSDispatch2 *objthis, Action action)
{
	tTJSVariant move_next;
	tTJSVariant item;
	tTJSVariant *prev_accumulator;
	tTJSVariant accumulator;
	
	tjs_uint32 move_next_hint = 0;
	tjs_uint32 current_hint = 0;
	
	move_next.Clear();
	objthis->FuncCall(0, TJS_W("moveNext"), &move_next_hint, &move_next, 0, nullptr, objthis);
	if (init) {
		if (!move_next.operator bool()) {
			if (result) {
				*result = tTJSVariant(*init, *init);
				init->Release();
			}
			return TJS_S_OK;
		}
		prev_accumulator = init;
	} else {
		if (!move_next.operator bool()) {
			if (result) result->Clear();
			return TJS_S_OK;
		}
		objthis->FuncCall(0, TJS_W("current"), &current_hint, &prev_accumulator, 0, nullptr, objthis);
		move_next.Clear();
		objthis->FuncCall(0, TJS_W("moveNext"), &move_next_hint, &move_next, 0, nullptr, objthis);
		if (!move_next.operator bool()) {
			if (result) *result = *prev_accumulator;
			return TJS_S_OK;
		}
	}
	
	bool break_now = false;
	tjs_int idx = 0;
	
	do {
		item.Clear();
		objthis->FuncCall(0, TJS_W("current"), &current_hint, &item, 0, nullptr, objthis);
		
		accumulator.Clear();
		action(&accumulator, prev_accumulator, &item, idx, &break_now);
		if (break_now) break;
		
		idx += 1;
		*prev_accumulator = accumulator;
		move_next.Clear();
		objthis->FuncCall(0, TJS_W("moveNext"), nullptr, &move_next, 0, nullptr, objthis);
	} while (has_next.operator bool());
	
	if (result) *result = tTJSVariant(accumulator, accumulator);
	accumulator.Release();
	
	return TJS_S_OK;
}
//----------------------------------------------------------------------


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
	if(result) {
		TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_ArrayIterator);
		*result = _this->MoveNext();
	}
	return TJS_S_OK;
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/moveNext)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/each)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_ARRAY_PARAMLIST(paramList);
	
	auto action = [&](tTJSVariant *item, tjs_int idx, bool *break_now) {
		paramList[0] = item;
		paramList.UpdateIndex(idx);
		(void)fn->FuncCall(0, nullptr, nullptr, nullptr, paramList.Count, paramList.Params, fn_this);
	};
	
	TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_ArrayIterator);
	tjs_error hr = _this->Each(result, objthis, action);
	
	return hr;
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/each)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/map)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_ARRAY_PARAMLIST(paramList);
	
	auto action = [&](tTJSVariant *item, tTJSVariant *map, tjs_int idx, bool *pred, bool *break_now) {
		paramList[0] = item;
		paramList.UpdateIndex(idx);
		(void)fn->FuncCall(0, nullptr, nullptr, map, paramList.Count, paramList.Params, fn_this);
	};
	
	TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_ArrayIterator);
	return _this->FilterMap(result, objthis, action);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/map)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/filter)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_ARRAY_PARAMLIST(paramList);
	
	auto action = [&](tTJSVariant *item, tTJSVariant *map, tjs_int idx, bool *pred, bool *break_now) {
		paramList[0] = item;
		paramList.UpdateIndex(idx);
		tTJSVariant _pred;
		_pred.Clear();
		(void)fn->FuncCall(0, nullptr, nullptr, &_pred, paramList.Count, paramList.Params, fn_this);
		*pred = _pred.operator bool();
		if (*pred) *map = *item;
	};
	
	TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_ArrayIterator);
	return _this->FilterMap(result, objthis, action);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/filter)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/drop)
{
	TJS_ITERATOR_PREPARE_INT_PARAMLIST(paramList, count);
	auto action = [&](tTJSVariant *item, tTJSVariant *map, tjs_int idx, bool *pred, bool *break_now) {
		*pred = count <= idx;
		if (*pred) *map = *item;
	};
	
	TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_ArrayIterator);
	return _this->FilterMap(result, objthis, action);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/drop)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/take)
{
	TJS_ITERATOR_PREPARE_INT_PARAMLIST(paramList, count);
	
	if (count <= 0) {
		if (result) {
			tTJSArrayObject *array = (tTJSArrayObject*)TJSCreateArrayObject();
			*result = tTJSVariant(array, array);
			array->Release();
		}
		return TJS_S_OK;
	}
	
	count -= 1;
	auto action = [&](tTJSVariant *item, tTJSVariant *map, tjs_int idx, bool *pred, bool *break_now) {
		if (count == idx) *break_now = true;
		*map = *item;
	};
	
	TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_ArrayIterator);
	return _this->FilterMap(result, objthis, action);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/take)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/all)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_ARRAY_PARAMLIST(paramList);
	
	bool ret = true;
	auto action = [&](tTJSVariant *item, tjs_int idx, bool *break_now) {
		paramList[0] = item;
		paramList.UpdateIndex(idx);
		tTJSVariant pred;
		pred.Clear();
		(void)fn->FuncCall(0, nullptr, nullptr, &pred, paramList.Count, paramList.Params, fn_this);
		if (!pred.operator bool()) {
			ret = false;
			*break_now = true;
		}
	};
	
	TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_ArrayIterator);
	tjs_error hr = _this->Each(result, objthis, action);
	
	if (hr == TJS_S_OK) {
		if (result) *result = tTJSVariant(ret);
		return TJS_S_OK;
	} else {
		return hr;
	}
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/all)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/any)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_ARRAY_PARAMLIST(paramList);
	
	bool ret = false;
	auto action = [&](tTJSVariant *item, tjs_int idx, bool *break_now) {
		paramList[0] = item;
		paramList.UpdateIndex(idx);
		tTJSVariant pred;
		pred.Clear();
		(void)fn->FuncCall(0, nullptr, nullptr, &pred, paramList.Count, paramList.Params, fn_this);
		if (pred.operator bool()) {
			ret = true;
			*break_now = true;
		}
	};
	
	TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_ArrayIterator);
	tjs_error hr = _this->Each(result, objthis, action);
	
	if (hr == TJS_S_OK) {
		if (result) *result = tTJSVariant(ret);
		return TJS_S_OK;
	} else {
		return hr;
	}
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/any)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/none)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_ARRAY_PARAMLIST(paramList);
	
	bool ret = true;
	auto action = [&](tTJSVariant *item, tjs_int idx, bool *break_now) {
		paramList[0] = item;
		paramList.UpdateIndex(idx);
		tTJSVariant pred;
		pred.Clear();
		(void)fn->FuncCall(0, nullptr, nullptr, &pred, paramList.Count, paramList.Params, fn_this);
		if (pred.operator bool()) {
			ret = false;
			*break_now = true;
		}
	};
	
	TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_ArrayIterator);
	tjs_error hr = _this->Each(result, objthis, action);
	
	if (hr == TJS_S_OK) {
		if (result) *result = tTJSVariant(ret);
		return TJS_S_OK;
	} else {
		return hr;
	}
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/none)
//----------------------------------------------------------------------
	TJS_END_NATIVE_MEMBERS
}
//----------------------------------------------------------------------
tTJSNativeInstance *tTJSNC_ArrayIterator::CreateNativeInstance()
{
	return new tTJSNI_ArrayIterator(); 
}


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
tjs_error tTJSNI_DictionaryIterator::GetCurrent(tTJSVariant *val)
{
	if (!CurrentKey) {
		// `moveNext()` is not called yet
		val->Clear();
		return TJS_S_OK;
	}
	
	if (GetPair(CurrentKey, val) == TJS_S_OK) return TJS_S_OK;
	
	// CurrentKey is now invalidated; find next key
	delete[] CurrentKey;
	for (const tjs_char *key : CachedKeys) {
		if (GetPair(key, val) == TJS_S_OK) {
			CurrentKey = new tjs_char[TJS_strlen(key)+1];
			TJS_strcpy(CurrentKey, key);
			CachedKeys.erase(key);
			delete[] key;
			return TJS_S_OK;
		}
	}
	
	// not found (error)
	val->Clear();
	CurrentKey = nullptr;
	return TJS_E_MEMBERNOTFOUND;
}
//---------------------------------------------------------------------------
bool tTJSNI_DictionaryIterator::MoveNext(void)
{
	if (CachedKeys.empty() && !UpdateKeys()) {
		// exhausted
		if (CurrentKey) {
			VisitedKeys.insert(CurrentKey);
			CurrentKey = nullptr;
		}
		return false;
	}
	tTJSVariant dummy;
	if (CurrentKey) VisitedKeys.insert(CurrentKey);
	for (const tjs_char *key : CachedKeys) {
		if (isExist(key)) {
			CurrentKey = new tjs_char[TJS_strlen(key)+1];
			TJS_strcpy(CurrentKey, key);
			CachedKeys.erase(key);
			delete[] key;
			return true;
		}
	}
	CurrentKey = nullptr;
	return false;
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
template<typename Action>
tjs_error tTJSNI_DictionaryIterator::Each(tTJSVariant *result,
								iTJSDispatch2 *objthis, Action action)
{
	tTJSVariant move_next;
	tTJSVariant keyval, key, val;
	tjs_uint32 move_next_hint = 0;
	tjs_uint32 current_hint = 0;
	
	bool break_now = false;
	move_next.Clear();
	objthis->FuncCall(0, TJS_W("moveNext"), &move_next_hint, &move_next, 0, nullptr, objthis);
	while (move_next.operator bool()) {
		keyval.Clear();
		objthis->FuncCall(0, TJS_W("current"), &current_hint, &keyval, 0, nullptr, objthis);
		
		auto clo = keyval.AsObjectNoAddRef();
		clo->PropGetByNum(TJS_MEMBERMUSTEXIST|TJS_IGNOREPROP, 0, &key, clo);
		clo->PropGetByNum(TJS_MEMBERMUSTEXIST|TJS_IGNOREPROP, 1, &val, clo);
		
		action(&key, &val, &break_now);
		if (break_now) break;
		
		move_next.Clear();
		objthis->FuncCall(0, TJS_W("moveNext"), &move_next_hint, &move_next, 0, nullptr, objthis);
	}
	if (result) result->Clear();
	
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
template<typename Action>
tjs_error tTJSNI_DictionaryIterator::FilterMap(tTJSVariant *result,
									iTJSDispatch2 *objthis, Action action)
{
	tTJSVariant move_next;
	tTJSVariant keyval, key, val;
	tTJSVariant mapped_item;
	tTJSVariant count;  // count of returned array
	tjs_uint32 move_next_hint = 0;
	tjs_uint32 current_hint = 0;
	tjs_uint32 count_hint = 0;
	
	bool break_now = false;
	bool pred;
	tTJSDictionaryObject *dict = (tTJSDictionaryObject*)TJSCreateDictionaryObject();
	
	move_next.Clear();
	objthis->FuncCall(0, TJS_W("moveNext"), &move_next_hint, &move_next, 0, nullptr, objthis);
	while (move_next.operator bool()) {
		keyval.Clear();
		objthis->FuncCall(0, TJS_W("current"), &current_hint, &keyval, 0, nullptr, objthis);
		
		auto kv = keyval.AsObjectNoAddRef();
		kv->PropGetByNum(TJS_MEMBERMUSTEXIST|TJS_IGNOREPROP, 0, &key, kv);
		kv->PropGetByNum(TJS_MEMBERMUSTEXIST|TJS_IGNOREPROP, 1, &val, kv);
		
		pred = true;
		action(&key, &val, &mapped_item, &pred, &break_now);
		if (pred) {
			// If map operation returns
			// - Array object:
			//     It will be treated as [key, value] pair.
			//     If the object has only one element, it will be treated as [key, void].
			//     If the object is empty, this iteration will be ignored.
			// - Other Object:
			//     It will be treated as a new value with same key.
			if (TJS_S_TRUE == TJSDefaultIsInstanceOf(0, mapped_item, TJS_W("Array"), nullptr)) {
				auto clo = mapped_item.AsObjectNoAddRef();
				clo->PropGet(0, TJS_W("count"), &count_hint, &count, clo);
				if (count.AsInteger() != 0) {
					key.Clear(); val.Clear();
					clo->PropGetByNum(TJS_MEMBERMUSTEXIST|TJS_IGNOREPROP, 0, &key, clo);
					clo->PropGetByNum(TJS_MEMBERMUSTEXIST|TJS_IGNOREPROP, 1, &val, clo);
					
					auto keystr = key.AsString();
					dict->PropSet(TJS_MEMBERENSURE|TJS_IGNOREPROP, *keystr, nullptr, &val, dict);
					keystr->Release();
				}
			} else {
				dict->PropSet(TJS_MEMBERENSURE|TJS_IGNOREPROP, key.GetString(), nullptr, &mapped_item, dict);
			}
		}
		if (break_now) break;
		
		move_next.Clear();
		objthis->FuncCall(0, TJS_W("moveNext"), &move_next_hint, &move_next, 0, nullptr, objthis);
	}
	if (result) *result = tTJSVariant(dict, dict);
	dict->Release();
	
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
template<typename Action>
tjs_error tTJSNI_DictionaryIterator::Reduce(tTJSVariant *result, tTJSVariant *init, iTJSDispatch2 *objthis, Action action)
{
	return TJS_S_OK;
}
//----------------------------------------------------------------------


//---------------------------------------------------------------------------
// tTJSNC_DictionaryIterator : TJS Native Class : DictionaryIterator
//---------------------------------------------------------------------------
tjs_uint32 tTJSNC_DictionaryIterator::ClassID = (tjs_uint32)-1;

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
	if(result) {
		TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_DictionaryIterator);
		*result = _this->MoveNext();
	}
	return TJS_S_OK;
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/moveNext)
//----------------------------------------------------------------------
#define TJS_ITERATOR_PREPARE_DICT_PARAMLIST(paramList)	\
	ParamList paramList(numparams + 1);					\
	/* paramList[0]  := key								\
	 * paramList[1]  := valye							\
	 * paramList[..] := *args */						\
	for (tjs_int i = 1; i < numparams; ++i)	paramList[i + 1] = param[i];
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/each)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_DICT_PARAMLIST(paramList);
	
	auto action = [&](tTJSVariant *key, tTJSVariant *val, bool *break_now) {
		paramList[0] = key;
		paramList[1] = val;
		(void)fn->FuncCall(0, nullptr, nullptr, nullptr, paramList.Count, paramList.Params, fn_this);
	};
	
	TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_DictionaryIterator);
	return _this->Each(result, objthis, action);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/each)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/map)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_DICT_PARAMLIST(paramList);
	
	auto action = [&](tTJSVariant *key, tTJSVariant *val, tTJSVariant *map, bool *pred, bool *break_now) {
		paramList[0] = key;
		paramList[1] = val;
		(void)fn->FuncCall(0, nullptr, nullptr, map, paramList.Count, paramList.Params, fn_this);
	};
	
	TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_DictionaryIterator);
	return _this->FilterMap(result, objthis, action);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/map)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/filter)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_DICT_PARAMLIST(paramList);
	
	auto action = [&](tTJSVariant *key, tTJSVariant *val, tTJSVariant *map, bool *pred, bool *break_now) {
		paramList[0] = key;
		paramList[1] = val;
		tTJSVariant _pred;
		_pred.Clear();
		(void)fn->FuncCall(0, nullptr, nullptr, &_pred, paramList.Count, paramList.Params, fn_this);
		*pred = _pred.operator bool();
		if (*pred) *map = *val;
	};
	
	TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_DictionaryIterator);
	return _this->FilterMap(result, objthis, action);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/filter)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/drop)
{
	TJS_ITERATOR_PREPARE_INT_PARAMLIST(paramList, count);
	auto action = [&](tTJSVariant *key, tTJSVariant *val, tTJSVariant *map, bool *pred, bool *break_now) {
		count -= 1;
		*pred = 0 <= count;
		if (*pred) *map = *val;
	};
	
	TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_DictionaryIterator);
	return _this->FilterMap(result, objthis, action);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/drop)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/take)
{
	TJS_ITERATOR_PREPARE_INT_PARAMLIST(paramList, count);
	
	if (count <= 0) {
		if (result) {
			tTJSDictionaryObject *dict = (tTJSDictionaryObject*)TJSCreateDictionaryObject();
			*result = tTJSVariant(dict, dict);
			dict->Release();
		}
		return TJS_S_OK;
	}
	
	auto action = [&](tTJSVariant *key, tTJSVariant *val, tTJSVariant *map, bool *pred, bool *break_now) {
		*map = *val;
		count -= 1;
		if (count == 0) *break_now = true;
	};
	
	TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_DictionaryIterator);
	return _this->FilterMap(result, objthis, action);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/take)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/all)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_DICT_PARAMLIST(paramList);
	
	bool ret = true;
	auto action = [&](tTJSVariant *key, tTJSVariant *val, bool *break_now) {
		paramList[0] = key;
		paramList[1] = val;
		tTJSVariant pred;
		pred.Clear();
		(void)fn->FuncCall(0, nullptr, nullptr, &pred, paramList.Count, paramList.Params, fn_this);
		if (!pred.operator bool()) {
			ret = false;
			*break_now = true;
		}
	};
	
	TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_DictionaryIterator);
	tjs_error hr = _this->Each(result, objthis, action);
	
	if (hr == TJS_S_OK) {
		if (result) *result = tTJSVariant(ret);
		return TJS_S_OK;
	} else {
		return hr;
	}
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/all)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/any)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_DICT_PARAMLIST(paramList);
	
	bool ret = false;
	auto action = [&](tTJSVariant *key, tTJSVariant *val, bool *break_now) {
		paramList[0] = key;
		paramList[1] = val;
		tTJSVariant pred;
		pred.Clear();
		(void)fn->FuncCall(0, nullptr, nullptr, &pred, paramList.Count, paramList.Params, fn_this);
		if (pred.operator bool()) {
			ret = true;
			*break_now = true;
		}
	};
	
	TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_DictionaryIterator);
	tjs_error hr = _this->Each(result, objthis, action);
	
	if (hr == TJS_S_OK) {
		if (result) *result = tTJSVariant(ret);
		return TJS_S_OK;
	} else {
		return hr;
	}
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/any)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/none)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_DICT_PARAMLIST(paramList);
	
	bool ret = true;
	auto action = [&](tTJSVariant *key, tTJSVariant *val, bool *break_now) {
		paramList[0] = key;
		paramList[1] = val;
		tTJSVariant pred;
		pred.Clear();
		(void)fn->FuncCall(0, nullptr, nullptr, &pred, paramList.Count, paramList.Params, fn_this);
		if (pred.operator bool()) {
			ret = false;
			*break_now = true;
		}
	};
	
	TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_DictionaryIterator);
	tjs_error hr = _this->Each(result, objthis, action);
	
	if (hr == TJS_S_OK) {
		if (result) *result = tTJSVariant(ret);
		return TJS_S_OK;
	} else {
		return hr;
	}
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/none)
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

