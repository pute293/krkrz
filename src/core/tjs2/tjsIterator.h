//---------------------------------------------------------------------------
/*
	TJS2 Script Engine
	Copyright (C) 2000 W.Dee <dee@kikyou.info> and contributors

	See details of license at "license.txt"
*/
//---------------------------------------------------------------------------
// Iterator class implementation
//---------------------------------------------------------------------------

#ifndef tjsIteratorH
#define tjsIteratorH

#include "tjsNative.h"


namespace TJS
{
//---------------------------------------------------------------------------
class tTJSNI_Iterator : public tTJSNativeInstance
{
public:
	tTJSNI_Iterator();
	
	// LIST -> VOID
	tjs_error Each(	tTJSVariant *result,
					tjs_int numparams,
					tTJSVariant **param,
					iTJSDispatch2 *objthis);
	
	// LIST -> LIST
	tjs_error Map(	tTJSVariant *result,
					tjs_int numparams,
					tTJSVariant **param,
					iTJSDispatch2 *objthis);
	
	// LIST -> LIST
	tjs_error Filter(	tTJSVariant *result,
						tjs_int numparams,
						tTJSVariant **param,
						iTJSDispatch2 *objthis);
	
	// LIST -> LIST
	template<typename Func>
	tjs_error Filter(	tTJSVariant *result,
						Func pred,
						iTJSDispatch2 *objthis);
	
	// LIST -> LIST
	tjs_error Drop(	tTJSVariant *result,
					tjs_int numparams,
					tTJSVariant **param,
					iTJSDispatch2 *objthis);
	
	// LIST -> LIST
	tjs_error Take(	tTJSVariant *result,
					tjs_int numparams,
					tTJSVariant **param,
					iTJSDispatch2 *objthis);
	
	/*	LIST -> ATOM
			reduce
			at
			first
			last
		LIST -> LIST
			dropWhile
			takeWhile
		
	 */
	
private:
};

//---------------------------------------------------------------------------
class tTJSNC_Iterator : public tTJSNativeClass
{
public:
	tTJSNC_Iterator();
	
	static tjs_uint32 ClassID;

private:
	tTJSNativeInstance *CreateNativeInstance();
};
//---------------------------------------------------------------------------
}

#endif
