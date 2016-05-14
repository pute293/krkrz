//---------------------------------------------------------------------------
/*
	TJS2 Script Engine
	Copyright (C) 2000 W.Dee <dee@kikyou.info> and contributors

	See details of license at "license.txt"
*/
//---------------------------------------------------------------------------
// Iterator class implementation
//---------------------------------------------------------------------------

#ifndef tjsRationalH
#define tjsRationalH

#include "tjsCommHead.h"
#include "tjsNative.h"

namespace TJS
{

iTJSDispatch2 * TJSCreateRational(tTVInteger num, tTVInteger den, iTJSDispatch2 **classout = nullptr);

//---------------------------------------------------------------------------
// TJS `Rational` class/instance
//---------------------------------------------------------------------------
class tTJSNI_Rational : public tTJSNativeInstance
{
	typedef tTJSNativeInstance inherited;
	
	tTVInteger numerator;
	tTVInteger denominator;
	
public:
	tTJSNI_Rational();

public:
	tjs_error TJS_INTF_METHOD
		Construct(tjs_int numparams, tTJSVariant **param, iTJSDispatch2 *tjs_obj);
	
	tTVInteger GetNumerator() const { return numerator; }
	tTVInteger GetDenominator() const { return denominator; }
	int GetSign() const { return numerator < 0 ? -1 : 0 < numerator ? 1 : 0; }
	tTVInteger ToInteger() const { return numerator / denominator; }
	tTVReal ToReal() const { return (tTVReal)numerator / denominator; }

private:
	tjs_error Init1(const tTJSVariant *arg);
	tjs_error Init2(const tTJSVariant *arg1, const tTJSVariant *arg2);
	tjs_error InitReal(tTVReal arg);

};

//---------------------------------------------------------------------------
class tTJSNC_Rational : public tTJSNativeClass
{
	typedef tTJSNativeClass inherited;

public:
	tTJSNC_Rational();
	
	static tjs_uint32 ClassID;

private:
	tTJSNativeInstance *CreateNativeInstance();
};

}

#endif // tjsRationalH