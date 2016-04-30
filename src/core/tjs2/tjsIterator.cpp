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
#include "tjsIterator.h"

namespace TJS
{
//---------------------------------------------------------------------------
// tTJSNI_Iterator : TJS Native Instance : Iterator
//---------------------------------------------------------------------------
tTJSNI_Iterator::tTJSNI_Iterator()
{
}
//---------------------------------------------------------------------------
//tjs_error tTJSNI_Iterator::Each(tTJSVariant *result,
//								tjs_int numparams,
//								tTJSVariant **param,
//								iTJSDispatch2 *objthis) {
//	if (numparams < 1) return TJS_E_BADPARAMCOUNT;
//	
//	tTJSVariantClosure &clo = param[0]->AsObjectClosureNoAddRef();
//	iTJSDispatch2 *fn = clo.Object;
//	iTJSDispatch2 *fn_this = clo.ObjThis;
//	if (!fn) return TJS_E_INVALIDPARAM;
//	if (!fn_this) fn_this = objthis;
//	
//	tTJSVariant **paramList = new tTJSVariant*[numparams + 1];
//	/* paramList[0]  := item
//	 * paramList[1]  := index
//	 * paramList[..] := *args
//	 */
//	tTJSVariant index;
//	paramList[1] = &index;
//	for (tjs_int i = 1; i < numparams; ++i)
//		paramList[i + 1] = param[i];
//	
//	{
//		tTJSVariant has_next;
//		tTJSVariant next_item;
//		
//		tjs_uint32 has_next_hint = 0;
//		tjs_uint32 next_hint = 0;
//		auto param_count = numparams + 1;
//		tjs_int idx = 0;
//		objthis->FuncCall(0, TJS_W("hasNext"), &has_next_hint, &has_next, 0, nullptr, objthis);
//		while (has_next.operator bool()) {
//			next_item.Clear();
//			index = idx;
//			(void)objthis->FuncCall(0, TJS_W("next"), &next_hint, &next_item, 0, nullptr, objthis);
//			paramList[0] = &next_item;
//			
//			(void)fn->FuncCall(0, nullptr, nullptr, nullptr, param_count, paramList, fn_this);
//			
//			idx += 1;
//			objthis->FuncCall(0, TJS_W("hasNext"), nullptr, &has_next, 0, nullptr, objthis);
//		}
//	}
//	
//	if (result) result->Clear();
//	
//	delete[] paramList;
//	
//	return TJS_S_OK;
//	
//}
//---------------------------------------------------------------------------
template<typename Action>
tjs_error tTJSNI_Iterator::Each(tTJSVariant *result,
								iTJSDispatch2 *objthis,
								Action action)
{
	tTJSVariant has_next;
	tTJSVariant next_item;
	next_item.Clear();
	
	tjs_uint32 has_next_hint = 0;
	tjs_uint32 next_hint = 0;
	
	bool break_now = false;
	tjs_int idx = 0;
	objthis->FuncCall(0, TJS_W("hasNext"), &has_next_hint, &has_next, 0, nullptr, objthis);
	while (has_next.operator bool()) {
		next_item.Clear();
		(void)objthis->FuncCall(0, TJS_W("next"), &next_hint, &next_item, 0, nullptr, objthis);
		
		action(&next_item, idx, &break_now);
		if (break_now) break;
		
		idx += 1;
		has_next.Clear();
		objthis->FuncCall(0, TJS_W("hasNext"), nullptr, &has_next, 0, nullptr, objthis);
	}
	if (result) result->Clear();
	
	return TJS_S_OK;
	
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// tTJSNC_Iterator : TJS Native Class : Iterator
//---------------------------------------------------------------------------
tjs_uint32 tTJSNC_Iterator::ClassID = (tjs_uint32)-1;

tTJSNC_Iterator::tTJSNC_Iterator()
	: tTJSNativeClass(TJS_W("Iterator"))
{
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
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/next)
{
	if(result) result->Clear();
	
	return TJS_S_OK;
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/next)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/hasNext)
{
	if(result) *result = (tjs_int)(0); // returns false
	
	return TJS_S_OK;
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/hasNext)
//----------------------------------------------------------------------
#define TJS_ITERATOR_FUNCTION(index, fn, fn_this)							\
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
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/each)
{
	TJS_ITERATOR_FUNCTION(0, fn, fn_this);
	
	auto param_count = numparams + 1;
	tTJSVariant **paramList = new tTJSVariant*[param_count];
	/* paramList[0]  := item
	 * paramList[1]  := index
	 * paramList[..] := *args
	 */
	
	tTJSVariant index;
	paramList[1] = &index;
	for (tjs_int i = 1; i < numparams; ++i)
		paramList[i + 1] = param[i];
	
	auto action = [&](tTJSVariant *item, tjs_int idx, bool *break_now) {
		index = idx;
		paramList[0] = item;
		(void)fn->FuncCall(0, nullptr, nullptr, nullptr, param_count, paramList, fn_this);
	};
	
	tjs_error hr = ((tTJSNI_Iterator*)objthis)->Each(result, objthis, action);
	
	delete[] paramList;
	
	return hr;
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/each)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/map)
{
	TJS_ITERATOR_FUNCTION(0, fn, fn_this);
	
	auto param_count = numparams + 1;
	tTJSVariant **paramList = new tTJSVariant*[param_count];
	/* paramList[0]  := item
	 * paramList[1]  := index
	 * paramList[..] := *args
	 */
	
	tTJSVariant index;
	paramList[1] = &index;
	for (tjs_int i = 1; i < numparams; ++i)
		paramList[i + 1] = param[i];
	
	tTJSArrayObject *array = (tTJSArrayObject*)TJSCreateArrayObject();
	tjs_uint32 add_hint = 0;
	auto action = [&](tTJSVariant *item, tjs_int idx, bool *break_now) {
		index = idx;
		tTJSVariant mapped_item;
		mapped_item.Clear();
		paramList[0] = item;
		(void)fn->FuncCall(0, nullptr, nullptr, &mapped_item, param_count, paramList, fn_this);
		paramList[0] = &mapped_item;
		array->FuncCall(0, TJS_W("add"), &add_hint, nullptr, 1, paramList, array);
	};
	
	tjs_error hr = ((tTJSNI_Iterator*)objthis)->Each(result, objthis, action);
	
	delete[] paramList;
	
	if (hr == TJS_S_OK) {
		if (result) *result = tTJSVariant(array, array);
		array->Release();
		return TJS_S_OK;
	} else {
		return hr;
	}
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/map)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/filter)
{
	TJS_ITERATOR_FUNCTION(0, fn, fn_this);
	
	auto param_count = numparams + 1;
	tTJSVariant **paramList = new tTJSVariant*[param_count];
	/* paramList[0]  := item
	 * paramList[1]  := index
	 * paramList[..] := *args
	 */
	
	tTJSVariant index;
	paramList[1] = &index;
	for (tjs_int i = 1; i < numparams; ++i)
		paramList[i + 1] = param[i];
	
	tTJSArrayObject *array = (tTJSArrayObject*)TJSCreateArrayObject();
	tjs_uint32 add_hint = 0;
	auto action = [&](tTJSVariant *item, tjs_int idx, bool *break_now) {
		index = idx;
		tTJSVariant pred;
		pred.Clear();
		paramList[0] = item;
		(void)fn->FuncCall(0, nullptr, nullptr, &pred, param_count, paramList, fn_this);
		if (pred.operator bool()) {
			array->FuncCall(0, TJS_W("add"), &add_hint, nullptr, 1, paramList, array);
		}
	};
	
	tjs_error hr = ((tTJSNI_Iterator*)objthis)->Each(result, objthis, action);
	
	delete[] paramList;
	
	if (hr == TJS_S_OK) {
		if (result) *result = tTJSVariant(array, array);
		array->Release();
		return TJS_S_OK;
	} else {
		return hr;
	}
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/filter)
////----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/drop)
{
	if (numparams != 1) return TJS_E_BADPARAMCOUNT;
	if (param[0]->Type() != tvtInteger) return TJS_E_INVALIDPARAM;
	tTVInteger count = param[0]->AsInteger();
	
	tTJSArrayObject *array = (tTJSArrayObject*)TJSCreateArrayObject();
	tTJSVariant **paramList = new tTJSVariant*[1];
	tjs_uint32 add_hint = 0;
	auto action = [&](tTJSVariant *item, tjs_int idx, bool *break_now) {
		if (idx < count) return;
		paramList[0] = item;
		array->FuncCall(0, TJS_W("add"), &add_hint, nullptr, 1, paramList, array);
	};
	
	tjs_error hr = ((tTJSNI_Iterator*)objthis)->Each(result, objthis, action);
	
	delete[] paramList;
	
	if (hr == TJS_S_OK) {
		if (result) *result = tTJSVariant(array, array);
		array->Release();
		return TJS_S_OK;
	} else {
		return hr;
	}
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/drop)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/take)
{
	if (numparams != 1) return TJS_E_BADPARAMCOUNT;
	if (param[0]->Type() != tvtInteger) return TJS_E_INVALIDPARAM;
	tTVInteger count = param[0]->AsInteger();
	
	tTJSArrayObject *array = (tTJSArrayObject*)TJSCreateArrayObject();
	if (count <= 0) {
		if (result) *result = tTJSVariant(array, array);
		array->Release();
		return TJS_S_OK;
	}
	
	count -= 1;
	tTJSVariant **paramList = new tTJSVariant*[1];
	tjs_uint32 add_hint = 0;
	auto action = [&](tTJSVariant *item, tjs_int idx, bool *break_now) {
		if (count == idx) *break_now = true;
		paramList[0] = item;
		array->FuncCall(0, TJS_W("add"), &add_hint, nullptr, 1, paramList, array);
	};
	
	tjs_error hr = ((tTJSNI_Iterator*)objthis)->Each(result, objthis, action);
	
	delete[] paramList;
	
	if (hr == TJS_S_OK) {
		if (result) *result = tTJSVariant(array, array);
		array->Release();
		return TJS_S_OK;
	} else {
		return hr;
	}
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/take)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/all)
{
	TJS_ITERATOR_FUNCTION(0, fn, fn_this);
	
	auto param_count = numparams + 1;
	tTJSVariant **paramList = new tTJSVariant*[param_count];
	/* paramList[0]  := item
	 * paramList[1]  := index
	 * paramList[..] := *args
	 */
	
	tTJSVariant index;
	paramList[1] = &index;
	for (tjs_int i = 1; i < numparams; ++i)
		paramList[i + 1] = param[i];
	
	bool ret = true;
	auto action = [&](tTJSVariant *item, tjs_int idx, bool *break_now) {
		index = idx;
		tTJSVariant pred;
		pred.Clear();
		paramList[0] = item;
		(void)fn->FuncCall(0, nullptr, nullptr, &pred, param_count, paramList, fn_this);
		if (!pred.operator bool()) {
			ret = false;
			*break_now = true;
		}
	};
	
	tjs_error hr = ((tTJSNI_Iterator*)objthis)->Each(result, objthis, action);
	
	delete[] paramList;
	
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
	TJS_ITERATOR_FUNCTION(0, fn, fn_this);
	
	auto param_count = numparams + 1;
	tTJSVariant **paramList = new tTJSVariant*[param_count];
	/* paramList[0]  := item
	 * paramList[1]  := index
	 * paramList[..] := *args
	 */
	
	tTJSVariant index;
	paramList[1] = &index;
	for (tjs_int i = 1; i < numparams; ++i)
		paramList[i + 1] = param[i];
	
	bool ret = false;
	auto action = [&](tTJSVariant *item, tjs_int idx, bool *break_now) {
		index = idx;
		tTJSVariant pred;
		pred.Clear();
		paramList[0] = item;
		(void)fn->FuncCall(0, nullptr, nullptr, &pred, param_count, paramList, fn_this);
		if (pred.operator bool()) {
			ret = true;
			*break_now = true;
		}
	};
	
	tjs_error hr = ((tTJSNI_Iterator*)objthis)->Each(result, objthis, action);
	
	delete[] paramList;
	
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
	TJS_ITERATOR_FUNCTION(0, fn, fn_this);
	
	auto param_count = numparams + 1;
	tTJSVariant **paramList = new tTJSVariant*[param_count];
	/* paramList[0]  := item
	 * paramList[1]  := index
	 * paramList[..] := *args
	 */
	
	tTJSVariant index;
	paramList[1] = &index;
	for (tjs_int i = 1; i < numparams; ++i)
		paramList[i + 1] = param[i];
	
	bool ret = true;
	auto action = [&](tTJSVariant *item, tjs_int idx, bool *break_now) {
		index = idx;
		tTJSVariant pred;
		pred.Clear();
		paramList[0] = item;
		(void)fn->FuncCall(0, nullptr, nullptr, &pred, param_count, paramList, fn_this);
		if (pred.operator bool()) {
			ret = false;
			*break_now = true;
		}
	};
	
	tjs_error hr = ((tTJSNI_Iterator*)objthis)->Each(result, objthis, action);
	
	delete[] paramList;
	
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
tTJSNativeInstance *tTJSNC_Iterator::CreateNativeInstance()
{
	return new tTJSNI_Iterator(); 
}
//----------------------------------------------------------------------
}

//----------------------------------------------------------------------

