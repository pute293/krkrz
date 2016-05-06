//---------------------------------------------------------------------------
/*
	TJS2 Script Engine
	Copyright (C) 2000 W.Dee <dee@kikyou.info> and contributors

	See details of license at "license.txt"
*/
//---------------------------------------------------------------------------
// LazyIterator class implementation
//---------------------------------------------------------------------------

#ifndef tjsLazyIteratorH
#define tjsLazyIteratorH

#include <functional>
#include "tjsCommHead.h"
#include "tjsNative.h"

namespace TJS
{
class tTJSLazyIterator
{
public:
	tjs_error TJS_INTF_METHOD
	GetCurrent(tTJSVariant *result) {
		if (Index < 0) return TJS_E_INVALIDTYPE;
		tjs_error hr = TJS_S_OK;
		if (!IsCached) {
			hr = ForceGetCurrent(&CachedItem);
			if (TJS_FAILED(hr)) return hr;
		}
		IsCached = true;
		if (result) *result = CachedItem;
		return hr;
	}
	
	tjs_error TJS_INTF_METHOD
	MoveNext(tTJSVariant *result) {
		Index += 1;
		IsCached = false;
		return MoveNextInternal(result);
	}
	
protected:
	tjs_int Index = -1;
	virtual tjs_error TJS_INTF_METHOD ForceGetCurrent(tTJSVariant *result) = 0;
	virtual tjs_error TJS_INTF_METHOD MoveNextInternal(tTJSVariant *result) = 0;
	
private:
	tTJSVariant CachedItem;
	bool IsCached = false;

};


//---------------------------------------------------------------------------
// TJS `LazyIterator` class/instance
//   - Implementation of "lazy" list
//   - In default implementation, `current()` and `GetCurrent`
//     always throws TJS_E_INVALIDTYPE, and
//     `moveNext()` and `MoveNext` are always return `true`.
//---------------------------------------------------------------------------
// - ctor
//   - new LazyIterator(args...)
//       All arguments will be ignored.
// - dtor
//   - invalidate lazy_iter;
//       Invalidate this object.
//       Do nothing for back-end object
//---------------------------------------------------------------------------
// - static methods
//---------------------------------------------------------------------------
// - instance methods
//   - current()
//       returns the current element
//   - moveNext()
//       moves to next state and returns wheather moved or not
//---------------------------------------------------------------------------
class tTJSNI_LazyIterator : public tTJSNativeInstance, public tTJSLazyIterator
{
	typedef tTJSNativeInstance inherited;

public:
	tTJSNI_LazyIterator();
	tjs_error TJS_INTF_METHOD
		Construct(tjs_int numparams, tTJSVariant **param, iTJSDispatch2 *tjs_obj);
	void TJS_INTF_METHOD Destruct();

public:
	iTJSDispatch2 *GetSource() { return BackEnd; }

protected:
	tjs_error TJS_INTF_METHOD ForceGetCurrent(tTJSVariant *result);
	tjs_error TJS_INTF_METHOD MoveNextInternal(tTJSVariant *result);

private:
	iTJSDispatch2 *BackEnd; // TJS instance
};

//---------------------------------------------------------------------------
class tTJSNC_LazyIterator : public tTJSNativeClass
{
	typedef tTJSNativeClass inherited;

public:
	tTJSNC_LazyIterator();
	tjs_uint TJS_INTF_METHOD Release();
	
	static tjs_uint32 ClassID;

private:
	tTJSNativeInstance *CreateNativeInstance();
};

}

#endif
