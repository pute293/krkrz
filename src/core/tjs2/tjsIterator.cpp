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
tjs_error tTJSNI_Iterator::Each(tTJSVariant *result,
								tjs_int numparams,
								tTJSVariant **param,
								iTJSDispatch2 *objthis) {
	if (numparams < 1) return TJS_E_BADPARAMCOUNT;
	
	tTJSVariantClosure &clo = param[0]->AsObjectClosureNoAddRef();
	iTJSDispatch2 *fn = clo.Object;
	iTJSDispatch2 *fn_this = clo.ObjThis;
	if (!fn) return TJS_E_INVALIDPARAM;
	if (!fn_this) fn_this = objthis;
	
	tTJSVariant **paramList = new tTJSVariant*[numparams + 1];
	/* paramList[0]  := item
	 * paramList[1]  := index
	 * paramList[..] := *args
	 */
	tTJSVariant index;
	paramList[1] = &index;
	for (tjs_int i = 1; i < numparams; ++i)
		paramList[i + 1] = param[i];
	
	{
		tTJSVariant has_next;
		tTJSVariant next_item;
		
		tjs_uint32 has_next_hint = 0;
		tjs_uint32 next_hint = 0;
		auto param_count = numparams + 1;
		tjs_int idx = 0;
		objthis->FuncCall(0, TJS_W("hasNext"), &has_next_hint, &has_next, 0, nullptr, objthis);
		while (has_next.operator bool()) {
			next_item.Clear();
			index = idx;
			(void)objthis->FuncCall(0, TJS_W("next"), &next_hint, &next_item, 0, nullptr, objthis);
			paramList[0] = &next_item;
			
			(void)fn->FuncCall(0, nullptr, nullptr, nullptr, param_count, paramList, fn_this);
			
			idx += 1;
			objthis->FuncCall(0, TJS_W("hasNext"), nullptr, &has_next, 0, nullptr, objthis);
		}
	}
	
	if (result) result->Clear();
	
	delete[] paramList;
	
	return TJS_S_OK;
	
}
//---------------------------------------------------------------------------
tjs_error tTJSNI_Iterator::Map(	tTJSVariant *result,
								tjs_int numparams,
								tTJSVariant **param,
								iTJSDispatch2 *objthis) {
	if (numparams < 1) return TJS_E_BADPARAMCOUNT;
	
	tTJSVariantClosure &clo = param[0]->AsObjectClosureNoAddRef();
	iTJSDispatch2 *fn = clo.Object;
	iTJSDispatch2 *fn_this = clo.ObjThis;
	if (!fn) return TJS_E_INVALIDPARAM;
	if (!fn_this) fn_this = objthis;
	
	tTJSVariant **paramList = new tTJSVariant*[numparams + 1];
	/* paramList[0]  := item
	 * paramList[1]  := index
	 * paramList[..] := *args
	 */
	tTJSVariant index;
	paramList[1] = &index;
	for (tjs_int i = 1; i < numparams; ++i)
		paramList[i + 1] = param[i];
	
	{
		tTJSArrayObject * array = (tTJSArrayObject*)TJSCreateArrayObject();
		
		tTJSVariant has_next;
		tTJSVariant next_item;
		tTJSVariant item;
		
		tjs_uint32 has_next_hint = 0;
		tjs_uint32 next_hint = 0;
		tjs_uint32 add_hint = 0;
		auto param_count = numparams + 1;
		tjs_int idx = 0;
		objthis->FuncCall(0, TJS_W("hasNext"), &has_next_hint, &has_next, 0, nullptr, objthis);
		while (has_next.operator bool()) {
			next_item.Clear();
			index = idx;
			(void)objthis->FuncCall(0, TJS_W("next"), &next_hint, &next_item, 0, nullptr, objthis);
			paramList[0] = &next_item;
			
			(void)fn->FuncCall(0, nullptr, nullptr, &item, param_count, paramList, fn_this);
			paramList[0] = &item;
			array->FuncCall(0, TJS_W("add"), &add_hint, nullptr, 1, paramList, array);
			
			idx += 1;
			objthis->FuncCall(0, TJS_W("hasNext"), nullptr, &has_next, 0, nullptr, objthis);
		}
		if (result) *result = tTJSVariant(array, array);
		array->Release();
	}
	
	delete[] paramList;
	
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error tTJSNI_Iterator::Filter(	tTJSVariant *result,
									tjs_int numparams,
									tTJSVariant **param,
									iTJSDispatch2 *objthis) {
	if (numparams < 1) return TJS_E_BADPARAMCOUNT;
	
	tTJSVariantClosure &clo = param[0]->AsObjectClosureNoAddRef();
	iTJSDispatch2 *fn = clo.Object;
	iTJSDispatch2 *fn_this = clo.ObjThis;
	if (!fn) return TJS_E_INVALIDPARAM;
	if (!fn_this) fn_this = objthis;
	
	tTJSVariant **paramList = new tTJSVariant*[numparams + 1];
	/* paramList[0]  := item
	 * paramList[1]  := index
	 * paramList[..] := *args
	 */
	tTJSVariant index;
	paramList[1] = &index;
	for (tjs_int i = 1; i < numparams; ++i)
		paramList[i + 1] = param[i];
	
	{
		tTJSArrayObject * array = (tTJSArrayObject*)TJSCreateArrayObject();
		
		tTJSVariant has_next;
		tTJSVariant next_item;
		tTJSVariant item;
		
		tjs_uint32 has_next_hint = 0;
		tjs_uint32 next_hint = 0;
		tjs_uint32 add_hint = 0;
		auto param_count = numparams + 1;
		tjs_int idx = 0;
		objthis->FuncCall(0, TJS_W("hasNext"), &has_next_hint, &has_next, 0, nullptr, objthis);
		while (has_next.operator bool()) {
			next_item.Clear();
			index = idx;
			(void)objthis->FuncCall(0, TJS_W("next"), &next_hint, &next_item, 0, nullptr, objthis);
			paramList[0] = &next_item;
			
			(void)fn->FuncCall(0, nullptr, nullptr, &item, param_count, paramList, fn_this);
			if (item.operator bool()) {
				paramList[0] = &item;
				array->FuncCall(0, TJS_W("add"), &add_hint, nullptr, 1, paramList, array);
			}
			
			idx += 1;
			objthis->FuncCall(0, TJS_W("hasNext"), nullptr, &has_next, 0, nullptr, objthis);
		}
		if (result) *result = tTJSVariant(array, array);
		array->Release();
	}
	
	delete[] paramList;
	
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
template<typename Func>
tjs_error tTJSNI_Iterator::Filter(	tTJSVariant *result,
									Func pred,
									iTJSDispatch2 *objthis) {
	tTJSArrayObject * array = (tTJSArrayObject*)TJSCreateArrayObject();
	
	tTJSVariant has_next;
	tTJSVariant next_item;
	
	tjs_uint32 has_next_hint = 0;
	tjs_uint32 next_hint = 0;
	tjs_uint32 add_hint = 0;
	tjs_int idx = 0;
	tTJSVariant *paramList[1];
	objthis->FuncCall(0, TJS_W("hasNext"), &has_next_hint, &has_next, 0, nullptr, objthis);
	while (has_next.operator bool()) {
		next_item.Clear();
		(void)objthis->FuncCall(0, TJS_W("next"), &next_hint, &next_item, 0, nullptr, objthis);
		
		if (pred(next_item, idx)) {
			paramList[0] = &next_item;
			array->FuncCall(0, TJS_W("add"), &add_hint, nullptr, 1, paramList, array);
		}
		
		idx += 1;
		objthis->FuncCall(0, TJS_W("hasNext"), nullptr, &has_next, 0, nullptr, objthis);
	}
	if (result) *result = tTJSVariant(array, array);
	array->Release();
	
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error tTJSNI_Iterator::Drop(tTJSVariant *result,
								tjs_int numparams,
								tTJSVariant **param,
								iTJSDispatch2 *objthis) {
	if (numparams != 1) return TJS_E_BADPARAMCOUNT;
	if (param[0]->Type() != tvtInteger) return TJS_E_INVALIDPARAM;
	tTVInteger count = param[0]->AsInteger();
	return Filter(result, [=](tTJSVariant &next_item, tjs_int idx){ return count <= idx; }, objthis);
}
//---------------------------------------------------------------------------
tjs_error tTJSNI_Iterator::Take(tTJSVariant *result,
								tjs_int numparams,
								tTJSVariant **param,
								iTJSDispatch2 *objthis) {
	if (numparams != 1) return TJS_E_BADPARAMCOUNT;
	if (param[0]->Type() != tvtInteger) return TJS_E_INVALIDPARAM;
	tTVInteger count = param[0]->AsInteger();
	return Filter(result, [=](tTJSVariant &next_item, tjs_int idx){ return idx < count; }, objthis);
}


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
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/each)
{
	return ((tTJSNI_Iterator*)objthis)->Each(result, numparams, param, objthis);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/each)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/map)
{
	return ((tTJSNI_Iterator*)objthis)->Map(result, numparams, param, objthis);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/map)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/filter)
{
	return ((tTJSNI_Iterator*)objthis)->Filter(result, numparams, param, objthis);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/filter)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/drop)
{
	return ((tTJSNI_Iterator*)objthis)->Drop(result, numparams, param, objthis);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/drop)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(/*func. name*/take)
{
	return ((tTJSNI_Iterator*)objthis)->Take(result, numparams, param, objthis);
}
TJS_END_NATIVE_METHOD_DECL(/*func. name*/take)
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

