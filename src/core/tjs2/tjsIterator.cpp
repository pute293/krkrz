//---------------------------------------------------------------------------
/*
	TJS2 Script Engine
	Copyright (C) 2000 W.Dee <dee@kikyou.info> and contributors

	See details of license at "license.txt"
*/
//---------------------------------------------------------------------------
// Iterator class implementation
//---------------------------------------------------------------------------

#include "tjsCommHead.h"
#include "tjsArray.h"
#include "tjsDictionary.h"
#include "tjsIterator.h"

namespace TJS
{
namespace
{
tTJSNC_Iterator				*Iterator = nullptr;
tTJSNC_ArrayIterator		*ArrayIterator = nullptr;
tTJSNC_DictionaryIterator	*DictionaryIterator = nullptr;

// for RAII
struct ParamList {
	tTJSVariant **Params;
	ParamList(tjs_int count) {
		Params = new tTJSVariant*[count];
	}
	~ParamList() { delete[] Params; }
	tTJSVariant *&operator[](int i) { return Params[i]; }
	const tTJSVariant *operator[](int i) const { return Params[i]; }
	
	ParamList(const ParamList &o) = delete;
	ParamList &operator=(const ParamList &o) = delete;
	
	operator tTJSVariant**() const { return Params; }
};
}

//---------------------------------------------------------------------------
// tTJSNI_Iterator : TJS Native Instance : Iterator
//---------------------------------------------------------------------------
tTJSNI_Iterator::tTJSNI_Iterator()
	: inherited()
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
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/from)
{
	// TODO: return lazy iterator if 1 < numparams
	if (numparams != 1) return TJS_E_BADPARAMCOUNT;
	if (!result) return TJS_S_OK;
	
	if (TJS_S_TRUE == TJSDefaultIsInstanceOf(0, *param[0], TJS_W("Array"), nullptr)) {
		auto array_it = TJSCreateArrayIterator(param[0], nullptr);
		tTJSVariant it(array_it, array_it);
		array_it->Release();
		*result = it;
	} else if (TJS_S_TRUE == TJSDefaultIsInstanceOf(0, *param[0], TJS_W("Dictionary"), nullptr)) {
		auto dict_it = TJSCreateDictionaryIterator(param[0], nullptr);
		tTJSVariant it(dict_it, dict_it);
		dict_it->Release();
		*result = it;
	} else if (TJS_S_TRUE == TJSDefaultIsInstanceOf(0, *param[0], TJS_W("Dictionary"), nullptr)) {
		*result = *param[0];
	} else {
		return TJS_E_INVALIDPARAM;
	}
	
	return TJS_S_OK;
}
TJS_END_NATIVE_STATIC_METHOD_DECL(/*func. name*/from)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/next)
{
	if(result) result->Clear();
	return TJS_E_NOTIMPL;
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/next)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/hasNext)
{
	if(result) *result = (tjs_int)(0); // returns false
	return TJS_E_NOTIMPL;
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/hasNext)
//----------------------------------------------------------------------
	TJS_END_NATIVE_MEMBERS
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
	tTJSVariant has_next;
	tTJSVariant next_item;
	
	tjs_uint32 has_next_hint = 0;
	tjs_uint32 next_hint = 0;
	
	bool break_now = false;
	tjs_int idx = 0;
	has_next.Clear();
	objthis->FuncCall(0, TJS_W("hasNext"), &has_next_hint, &has_next, 0, nullptr, objthis);
	while (has_next.operator bool()) {
		next_item.Clear();
		(void)objthis->FuncCall(0, TJS_W("next"), &next_hint, &next_item, 0, nullptr, objthis);
		
		action(&next_item, idx, &break_now);
		if (break_now) break;
		
		idx += 1;
		has_next.Clear();
		objthis->FuncCall(0, TJS_W("hasNext"), &has_next_hint, &has_next, 0, nullptr, objthis);
	}
	if (result) result->Clear();
	
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
template<typename Action>
tjs_error tTJSNI_ArrayIterator::FilterMap(tTJSVariant *result,
									iTJSDispatch2 *objthis, Action action)
{
	tTJSVariant has_next;
	tTJSVariant next_item;
	tTJSVariant mapped_item;
	tTJSVariant *mapped_param = &mapped_item;
	bool pred;
	
	tjs_uint32 has_next_hint = 0;
	tjs_uint32 next_hint = 0;
	
	bool break_now = false;
	tjs_int idx = 0;
	tTJSArrayObject *array = (tTJSArrayObject*)TJSCreateArrayObject();
	tjs_uint32 add_hint = 0;
	
	has_next.Clear();
	objthis->FuncCall(0, TJS_W("hasNext"), &has_next_hint, &has_next, 0, nullptr, objthis);
	while (has_next.operator bool()) {
		next_item.Clear();
		(void)objthis->FuncCall(0, TJS_W("next"), &next_hint, &next_item, 0, nullptr, objthis);
		
		pred = true;
		mapped_item.Clear();
		action(&next_item, &mapped_item, idx, &pred, &break_now);
		if (pred) array->FuncCall(0, TJS_W("add"), &add_hint, nullptr, 1, &mapped_param, array);
		if (break_now) break;
		
		idx += 1;
		has_next.Clear();
		objthis->FuncCall(0, TJS_W("hasNext"), nullptr, &has_next, 0, nullptr, objthis);
	}
	if (result) *result = tTJSVariant(array, array);
	array->Release();
	
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
template<typename Action>
tjs_error tTJSNI_ArrayIterator::Reduce(tTJSVariant *result, tTJSVariant *init, iTJSDispatch2 *objthis, Action action)
{
	tTJSVariant has_next;
	tTJSVariant next_item;
	tTJSVariant *prev_accumulator;
	tTJSVariant accumulator;
	
	tjs_uint32 has_next_hint = 0;
	tjs_uint32 next_hint = 0;
	
	has_next.Clear();
	objthis->FuncCall(0, TJS_W("hasNext"), &has_next_hint, &has_next, 0, nullptr, objthis);
	if (init) {
		if (!has_next.operator bool()) {
			if (result) {
				*result = tTJSVariant(*init, *init);
				init->Release();
			}
			return TJS_S_OK;
		}
		prev_accumulator = init;
	} else {
		if (!has_next.operator bool()) {
			if (result) result->Clear();
			return TJS_S_OK;
		}
		objthis->FuncCall(0, TJS_W("next"), &next_hint, &prev_accumulator, 0, nullptr, objthis);
		has_next.Clear();
		objthis->FuncCall(0, TJS_W("hasNext"), &has_next_hint, &has_next, 0, nullptr, objthis);
		if (!has_next.operator bool()) {
			if (result) *result = *prev_accumulator;
			return TJS_S_OK;
		}
	}
	
	bool break_now = false;
	tjs_int idx = 0;
	
	do {
		next_item.Clear();
		objthis->FuncCall(0, TJS_W("next"), &next_hint, &next_item, 0, nullptr, objthis);
		
		accumulator.Clear();
		action(&accumulator, prev_accumulator, &next_item, idx, &break_now);
		if (break_now) break;
		
		idx += 1;
		*prev_accumulator = accumulator;
		has_next.Clear();
		objthis->FuncCall(0, TJS_W("hasNext"), nullptr, &has_next, 0, nullptr, objthis);
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
tjs_uint32 tTJSNI_ArrayIterator::CountHint = 0;

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
	tTJSVariant name("Iterator");
	objthis->ClassInstanceInfo(TJS_CII_ADD, 0, &name);
	return TJS_S_OK;
}
TJS_END_NATIVE_CONSTRUCTOR_DECL(/*TJS class name*/ArrayIterator)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/next)
{
	if(result) {
		TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_ArrayIterator);
		return _this->Next(result);
	}
	return TJS_S_OK;
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/next)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/hasNext)
{
	if(result) {
		TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_ArrayIterator);
		*result = _this->HasNext();
	}
	return TJS_S_OK;
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/hasNext)
//----------------------------------------------------------------------
#define TJS_ITERATOR_CHECK_FUNCTION(index, fn, fn_this)						\
	if (numparams < index + 1) return TJS_E_BADPARAMCOUNT;					\
	iTJSDispatch2 *fn;														\
	iTJSDispatch2 *fn_this;													\
	{																		\
		tTJSVariantClosure &clo = param[index]->AsObjectClosureNoAddRef();	\
		fn = clo.Object;													\
		fn_this = clo.ObjThis;												\
		if (!fn) return TJS_E_INVALIDPARAM;									\
		if (!fn_this) fn_this = objthis;									\
	}
#define TJS_ITERATOR_PREPARE_ARRAY_PARAMLIST(paramList, paramCount, index)\
	auto paramCount = numparams + 1;										\
	ParamList paramList(paramCount);										\
	/* paramList[0]  := item												\
	 * paramList[1]  := index												\
	 * paramList[..] := *args */											\
	tTJSVariant index;														\
	paramList[1] = &index;													\
	for (tjs_int i = 1; i < numparams; ++i)	paramList[i + 1] = param[i];
#define TJS_ITERATOR_PREPARE_INT_PARAMLIST(paramList, count)				\
	if (numparams != 1) return TJS_E_BADPARAMCOUNT;							\
	if (param[0]->Type() != tvtInteger) return TJS_E_INVALIDPARAM;			\
	tTVInteger count = param[0]->AsInteger();								\
	ParamList paramList(1);	/* paramList[0] := item */
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/each)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_ARRAY_PARAMLIST(paramList, paramCount, index);
	
	auto action = [&](tTJSVariant *item, tjs_int idx, bool *break_now) {
		paramList[0] = item;
		index = idx;
		(void)fn->FuncCall(0, nullptr, nullptr, nullptr, paramCount, paramList, fn_this);
	};
	
	tjs_error hr = ((tTJSNI_ArrayIterator*)objthis)->Each(result, objthis, action);
	
	return hr;
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/each)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/map)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_ARRAY_PARAMLIST(paramList, paramCount, index);
	
	auto action = [&](tTJSVariant *item, tTJSVariant *map, tjs_int idx, bool *pred, bool *break_now) {
		paramList[0] = item;
		index = idx;
		(void)fn->FuncCall(0, nullptr, nullptr, map, paramCount, paramList, fn_this);
	};
	
	return ((tTJSNI_ArrayIterator*)objthis)->FilterMap(result, objthis, action);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/map)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/filter)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_ARRAY_PARAMLIST(paramList, paramCount, index);
	
	auto action = [&](tTJSVariant *item, tTJSVariant *map, tjs_int idx, bool *pred, bool *break_now) {
		paramList[0] = item;
		index = idx;
		tTJSVariant _pred;
		_pred.Clear();
		(void)fn->FuncCall(0, nullptr, nullptr, &_pred, paramCount, paramList, fn_this);
		*pred = _pred.operator bool();
		if (*pred) *map = *item;
	};
	
	return ((tTJSNI_ArrayIterator*)objthis)->FilterMap(result, objthis, action);
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
	return ((tTJSNI_ArrayIterator*)objthis)->FilterMap(result, objthis, action);
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
	
	return ((tTJSNI_ArrayIterator*)objthis)->FilterMap(result, objthis, action);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/take)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/all)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_ARRAY_PARAMLIST(paramList, paramCount, index);
	
	bool ret = true;
	auto action = [&](tTJSVariant *item, tjs_int idx, bool *break_now) {
		paramList[0] = item;
		index = idx;
		tTJSVariant pred;
		pred.Clear();
		(void)fn->FuncCall(0, nullptr, nullptr, &pred, paramCount, paramList, fn_this);
		if (!pred.operator bool()) {
			ret = false;
			*break_now = true;
		}
	};
	
	tjs_error hr = ((tTJSNI_ArrayIterator*)objthis)->Each(result, objthis, action);
	
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
	TJS_ITERATOR_PREPARE_ARRAY_PARAMLIST(paramList, paramCount, index);
	
	bool ret = false;
	auto action = [&](tTJSVariant *item, tjs_int idx, bool *break_now) {
		paramList[0] = item;
		index = idx;
		tTJSVariant pred;
		pred.Clear();
		(void)fn->FuncCall(0, nullptr, nullptr, &pred, paramCount, paramList, fn_this);
		if (pred.operator bool()) {
			ret = true;
			*break_now = true;
		}
	};
	
	tjs_error hr = ((tTJSNI_ArrayIterator*)objthis)->Each(result, objthis, action);
	
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
	TJS_ITERATOR_PREPARE_ARRAY_PARAMLIST(paramList, paramCount, index);
	
	bool ret = true;
	auto action = [&](tTJSVariant *item, tjs_int idx, bool *break_now) {
		paramList[0] = item;
		index = idx;
		tTJSVariant pred;
		pred.Clear();
		(void)fn->FuncCall(0, nullptr, nullptr, &pred, paramCount, paramList, fn_this);
		if (pred.operator bool()) {
			ret = false;
			*break_now = true;
		}
	};
	
	tjs_error hr = ((tTJSNI_ArrayIterator*)objthis)->Each(result, objthis, action);
	
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
//								It is NOT guaranteed that all elements will
//								be traversed just once if a Dictionary object
//								in back-end is modified over iteration.
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
	inherited::Destruct();
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
			tjs_char *key1 = new tjs_char[TJS_strlen(key) + 1];
			TJS_strcpy(key1, key);
			CachedKeys.insert(key1);
			found = true;
		}
	}
	
	return found;
}
//---------------------------------------------------------------------------
template<typename Action>
tjs_error tTJSNI_DictionaryIterator::Each(tTJSVariant *result,
								iTJSDispatch2 *objthis, Action action)
{
	tTJSVariant has_next;
	tTJSVariant keyval, key, val;
	tjs_uint32 has_next_hint = 0;
	tjs_uint32 next_hint = 0;
	
	bool break_now = false;
	has_next.Clear();
	objthis->FuncCall(0, TJS_W("hasNext"), &has_next_hint, &has_next, 0, nullptr, objthis);
	while (has_next.operator bool()) {
		keyval.Clear();
		objthis->FuncCall(0, TJS_W("next"), &next_hint, &keyval, 0, nullptr, objthis);
		
		auto clo = keyval.AsObjectNoAddRef();
		clo->PropGetByNum(TJS_MEMBERMUSTEXIST|TJS_IGNOREPROP, 0, &key, clo);
		clo->PropGetByNum(TJS_MEMBERMUSTEXIST|TJS_IGNOREPROP, 1, &val, clo);
		
		action(&key, &val, &break_now);
		if (break_now) break;
		
		has_next.Clear();
		objthis->FuncCall(0, TJS_W("hasNext"), &has_next_hint, &has_next, 0, nullptr, objthis);
	}
	if (result) result->Clear();
	
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
template<typename Action>
tjs_error tTJSNI_DictionaryIterator::FilterMap(tTJSVariant *result,
									iTJSDispatch2 *objthis, Action action)
{
	tTJSVariant has_next;
	tTJSVariant keyval, key, val;
	tTJSVariant mapped_item;
	tTJSVariant count;  // count of returned array
	tjs_uint32 has_next_hint = 0;
	tjs_uint32 next_hint = 0;
	tjs_uint32 count_hint = 0;
	
	bool break_now = false;
	bool pred;
	tTJSDictionaryObject *dict = (tTJSDictionaryObject*)TJSCreateDictionaryObject();
	
	has_next.Clear();
	objthis->FuncCall(0, TJS_W("hasNext"), &has_next_hint, &has_next, 0, nullptr, objthis);
	while (has_next.operator bool()) {
		keyval.Clear();
		objthis->FuncCall(0, TJS_W("next"), &next_hint, &keyval, 0, nullptr, objthis);
		
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
		
		has_next.Clear();
		objthis->FuncCall(0, TJS_W("hasNext"), &has_next_hint, &has_next, 0, nullptr, objthis);
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
	tTJSVariant name("Iterator");
	objthis->ClassInstanceInfo(TJS_CII_ADD, 0, &name);
	return TJS_S_OK;
}
TJS_END_NATIVE_CONSTRUCTOR_DECL(/*TJS class name*/DictionaryIterator)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/next)
{
	if(result) {
		TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_DictionaryIterator);
		return _this->Next(result);
	}
	return TJS_S_OK;
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/next)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/hasNext)
{
	if(result) {
		TJS_GET_NATIVE_INSTANCE(/*var. name*/_this, /*var. type*/tTJSNI_DictionaryIterator);
		*result = _this->HasNext();
	}
	return TJS_S_OK;
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/hasNext)
//----------------------------------------------------------------------
#define TJS_ITERATOR_PREPARE_DICT_PARAMLIST(paramList, paramCount)	\
	auto paramCount = numparams + 1;								\
	ParamList paramList(paramCount);								\
	/* paramList[0]  := key											\
	 * paramList[1]  := valye										\
	 * paramList[..] := *args */									\
	for (tjs_int i = 1; i < numparams; ++i)	paramList[i + 1] = param[i];
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/each)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_DICT_PARAMLIST(paramList, paramCount);
	
	auto action = [&](tTJSVariant *key, tTJSVariant *val, bool *break_now) {
		paramList[0] = key;
		paramList[1] = val;
		(void)fn->FuncCall(0, nullptr, nullptr, nullptr, paramCount, paramList, fn_this);
	};
	
	return ((tTJSNI_DictionaryIterator*)objthis)->Each(result, objthis, action);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/each)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/map)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_DICT_PARAMLIST(paramList, paramCount);
	
	auto action = [&](tTJSVariant *key, tTJSVariant *val, tTJSVariant *map, bool *pred, bool *break_now) {
		paramList[0] = key;
		paramList[1] = val;
		(void)fn->FuncCall(0, nullptr, nullptr, map, paramCount, paramList, fn_this);
	};
	
	return ((tTJSNI_DictionaryIterator*)objthis)->FilterMap(result, objthis, action);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/map)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/filter)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_DICT_PARAMLIST(paramList, paramCount);
	
	auto action = [&](tTJSVariant *key, tTJSVariant *val, tTJSVariant *map, bool *pred, bool *break_now) {
		paramList[0] = key;
		paramList[1] = val;
		tTJSVariant _pred;
		_pred.Clear();
		(void)fn->FuncCall(0, nullptr, nullptr, &_pred, paramCount, paramList, fn_this);
		*pred = _pred.operator bool();
		if (*pred) *map = *val;
	};
	
	return ((tTJSNI_DictionaryIterator*)objthis)->FilterMap(result, objthis, action);
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
	return ((tTJSNI_DictionaryIterator*)objthis)->FilterMap(result, objthis, action);
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
	
	return ((tTJSNI_DictionaryIterator*)objthis)->FilterMap(result, objthis, action);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/take)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/all)
{
	TJS_ITERATOR_CHECK_FUNCTION(0, fn, fn_this);
	TJS_ITERATOR_PREPARE_DICT_PARAMLIST(paramList, paramCount);
	
	bool ret = true;
	auto action = [&](tTJSVariant *key, tTJSVariant *val, bool *break_now) {
		paramList[0] = key;
		paramList[1] = val;
		tTJSVariant pred;
		pred.Clear();
		(void)fn->FuncCall(0, nullptr, nullptr, &pred, paramCount, paramList, fn_this);
		if (!pred.operator bool()) {
			ret = false;
			*break_now = true;
		}
	};
	
	tjs_error hr = ((tTJSNI_DictionaryIterator*)objthis)->Each(result, objthis, action);
	
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
	TJS_ITERATOR_PREPARE_DICT_PARAMLIST(paramList, paramCount);
	
	bool ret = false;
	auto action = [&](tTJSVariant *key, tTJSVariant *val, bool *break_now) {
		paramList[0] = key;
		paramList[1] = val;
		tTJSVariant pred;
		pred.Clear();
		(void)fn->FuncCall(0, nullptr, nullptr, &pred, paramCount, paramList, fn_this);
		if (pred.operator bool()) {
			ret = true;
			*break_now = true;
		}
	};
	
	tjs_error hr = ((tTJSNI_DictionaryIterator*)objthis)->Each(result, objthis, action);
	
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
	TJS_ITERATOR_PREPARE_DICT_PARAMLIST(paramList, paramCount);
	
	bool ret = true;
	auto action = [&](tTJSVariant *key, tTJSVariant *val, bool *break_now) {
		paramList[0] = key;
		paramList[1] = val;
		tTJSVariant pred;
		pred.Clear();
		(void)fn->FuncCall(0, nullptr, nullptr, &pred, paramCount, paramList, fn_this);
		if (pred.operator bool()) {
			ret = false;
			*break_now = true;
		}
	};
	
	tjs_error hr = ((tTJSNI_DictionaryIterator*)objthis)->Each(result, objthis, action);
	
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

