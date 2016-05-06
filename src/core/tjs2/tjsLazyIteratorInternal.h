//---------------------------------------------------------------------------
/*
	TJS2 Script Engine
	Copyright (C) 2000 W.Dee <dee@kikyou.info> and contributors

	See details of license at "license.txt"
*/
//---------------------------------------------------------------------------

#ifndef tjsLazyIteratorInternalH
#define tjsLazyIteratorInternalH

#include "tjsIteratorInternal.h"

namespace TJS { namespace {

//---------------------------------------------------------------------------
// TJS `LazyMapIterator` class/instance
//---------------------------------------------------------------------------
class tTJSNI_LazyMapIterator : public tTJSNativeInstance, public tTJSLazyIterator
{
	typedef tTJSNativeInstance inherited;

public:
	tTJSNI_LazyMapIterator();
	tjs_error TJS_INTF_METHOD
		Construct(tjs_int numparams, tTJSVariant **param, iTJSDispatch2 *tjs_obj);
	void TJS_INTF_METHOD Destruct();

public:
	iTJSDispatch2 *GetSource() { return Source; }
	void SetSource(iTJSDispatch2 *source) { Source = source; }
	void SetBackEnd(tTJSLazyIterator *backend) { BackEnd = backend; }

protected:
	tjs_error TJS_INTF_METHOD ForceGetCurrent(tTJSVariant *result);
	tjs_error TJS_INTF_METHOD MoveNextInternal(tTJSVariant *result);

private:
	iTJSDispatch2 *Source = nullptr;  // original LazyIterator or its inheritance
	tTJSLazyIterator *BackEnd; // points to Lazy(|Map|Filter)Iterator
	iTJSDispatch2 *Proc;    // map procedure (without context)
	iTJSDispatch2 *Context; // context of `Proc`
	ParamList Params;
};

//---------------------------------------------------------------------------
class tTJSNC_LazyMapIterator : public tTJSNativeClass
{
	typedef tTJSNativeClass inherited;

public:
	tTJSNC_LazyMapIterator();
	
	static tjs_uint32 ClassID;

private:
	tTJSNativeInstance *CreateNativeInstance();
};

//---------------------------------------------------------------------------
// TJS `LazyFilterIterator` class/instance
//---------------------------------------------------------------------------
class tTJSNI_LazyFilterIterator : public tTJSNativeInstance, public tTJSLazyIterator
{
	typedef tTJSNativeInstance inherited;

public:
	tTJSNI_LazyFilterIterator();
	tjs_error TJS_INTF_METHOD
		Construct(tjs_int numparams, tTJSVariant **param, iTJSDispatch2 *tjs_obj);
	void TJS_INTF_METHOD Destruct();

public:
	iTJSDispatch2 *GetSource() { return Source; }
	void SetSource(iTJSDispatch2 *source) { Source = source; }
	void SetBackEnd(tTJSLazyIterator *backend) { BackEnd = backend; }

protected:
	tjs_error TJS_INTF_METHOD ForceGetCurrent(tTJSVariant *result);
	tjs_error TJS_INTF_METHOD MoveNextInternal(tTJSVariant *result);

private:
	bool Break = false;
	iTJSDispatch2 *Source = nullptr;  // original LazyIterator or its inheritance
	tTJSLazyIterator *BackEnd; // points to Lazy(|Map|Filter)Iterator
	iTJSDispatch2 *Proc;    // map procedure (without context)
	iTJSDispatch2 *Context; // context of `Proc`
	ParamList Params;
};

//---------------------------------------------------------------------------
class tTJSNC_LazyFilterIterator : public tTJSNativeClass
{
	typedef tTJSNativeClass inherited;

public:
	tTJSNC_LazyFilterIterator();
	
	static tjs_uint32 ClassID;

private:
	tTJSNativeInstance *CreateNativeInstance();
};

} }

#endif
