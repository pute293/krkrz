//---------------------------------------------------------------------------
/*
	TJS2 Script Engine
	Copyright (C) 2000 W.Dee <dee@kikyou.info> and contributors

	See details of license at "license.txt"
*/
//---------------------------------------------------------------------------
// Rational class implementation
//---------------------------------------------------------------------------

#include <cmath>
#include <cfloat>
#include <sstream>
#include <intrin.h>
#include <cstdint>
#include <iostream>
#include "tjsRational.h"

namespace TJS
{

namespace
{
tTJSNC_Rational *Rational = nullptr;

#define TJS_IS_RATIONAL(val) (TJS_S_TRUE == TJSDefaultIsInstanceOf(0, *val, TJS_W("Rational"), nullptr))

// for portability
#ifdef _MSC_VER
#ifdef _WIN64
inline unsigned int ctz(tTVInteger x)
{
	unsigned long ret;
	_BitScanForward64(&ret, x);
	return ret;
}
#else
inline unsigned int ctz(tTVInteger x)
{
	uint32_t lo = x & 0xffffffff;
	unsigned long ret;
	_BitScanForward(&ret, lo);
	if (ret) return ret;
	if (!ret) {
		uint32_t hi = x >> 32;
		_BitScanForward(&ret, hi);
		if (!ret) return 0;
		return ret + 32;
	}
}
#endif
#else
#define ctz __builtin_ctzll
#endif

//---------------------------------------------------------------------------
inline tjs_error decompose(const tTJSVariant *rational, tTVInteger *num, tTVInteger *denom)
{
	if (!TJS_IS_RATIONAL(rational)) return TJS_E_INVALIDPARAM;
	iTJSDispatch2 *obj = rational->AsObjectNoAddRef();
	if (!obj) return TJS_E_INVALIDPARAM;
	
	tTJSVariant v;
	
	// get numerator
	tjs_error hr = obj->PropGet(0, TJS_W("numerator"), nullptr, &v, obj);
	if (TJS_FAILED(hr)) return hr;
	*num = v.AsInteger();
	
	// get denominator
	hr = obj->PropGet(0, TJS_W("denominator"), nullptr, &v, obj);
	if (TJS_FAILED(hr)) return hr;
	*denom = v.AsInteger();
	
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
inline tjs_error decompose(const tTJSNI_Rational *rational, tTVInteger *num, tTVInteger *denom)
{
	*num = rational->GetNumerator();
	*denom = rational->GetDenominator();
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
template <typename T>
inline T gcd(T i1, T i2)
{
	// Euclidean algorithm
	
	if (i1 == 0 || i2 == 0) return 1;
	if (i1 < 0) i1 = -i1;
	if (i2 < 0) i2 = -i2;
	if (i1 < i2) {
		T t = i1;
		i1 = i2;
		i2 = t;
	}
	
	T t;
	while (i2 != 0) {
		t = i2;
		i2 = i1 % i2;
		i1 = t;
	}
	
	return i1;
}
//---------------------------------------------------------------------------
inline tTVInteger pow(tTVInteger a, tTVInteger e)
{
	// `e` must be nutural number, not negative
	
	if (e == 0) return 1;
	if (e == 1) return a;
	//if (e % 2 == 0) {
	//	tTVInteger b = pow(a, e / 2);
	//	return b * b;
	//} else {
	//	tTVInteger b = pow(a, e / 2);
	//	return a * b * b;
	//}
	
	tTVInteger e0 = e < 0 ? -e : e;
	
	tTVInteger r = 1;
	while (0 < e0) {
		if (e0 % 2 == 1) r *= a;
		a *= a;
		e0 /= 2;
	}
	
	return r;
}
//---------------------------------------------------------------------------
inline unsigned int get_power(tTVInteger a)
{
	tTVInteger x = a < 0 ? -a : a;
	if (x < 2) return true;
	if (x < 4) return false;
	
	if (x % 2 == 0) {
		// high speed check!
		bool power_of_two = (x & (x-1)) == 0;
		if (!power_of_two) return 0;
		// check sign
		auto bit_pos = ctz(x);
		// 4: 0100 (bit_pos = 2)
		// 8: 1000 (bit_pos = 3)
		if (a < 0 && bit_pos % 2 == 0) return 0;
		return bit_pos;
	}
	
	// trial factorization
	std::vector<int> exps;
	for (tTVInteger i = 3, j = (tTVInteger)std::sqrt(x); i <= j; i += 2) {
		if (x % i == 0) {
			int e = 0;
			while (x % i == 0) {
				x /= i;
				++e;
			}
			if (e == 1) return 0;
			// check sign
			if (a < 0 && e % 2 == 0) return 0;
			exps.push_back(e);
		}
	}
	
	if (exps.empty()) return 0;	// prime!
	int d = exps.front();
	for (int e : exps) d = gcd<int>(d, e);
	
	return d;
}
//---------------------------------------------------------------------------
inline tjs_error to_real(const tTJSVariant *arg, tTVReal *real)
{
	switch (arg->Type()) {
	case tvtInteger:
	case tvtReal:
		*real = arg->AsReal();
		break;
	case tvtObject:
		{
			tTJSVariant v;
			iTJSDispatch2 *obj = arg->AsObjectNoAddRef();
			tjs_error hr = obj->FuncCall(0, TJS_W("toReal"), nullptr, &v, 0, nullptr, obj);
			if (TJS_FAILED(hr)) return hr;
			*real = v.AsReal();
		}
		break;
	default:
		return TJS_E_INVALIDPARAM;
	}
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
#define TJS_RATIONAL_RATIONAL(r1, r2) \
tTVInteger n, d, n1, d1, n2, d2; \
decompose(r1, &n1, &d1); \
{ tjs_error hr = decompose(r2, &n2, &d2); \
  if (TJS_FAILED(hr)) return hr; }
#define TJS_RATIONAL_INT(r1, i) \
tTVInteger n, d, n1, d1, n2, d2; \
decompose(r1, &n1, &d1); \
n2 = i; d2 = 1;
#define TJS_CREATE_RATIONAL(result) \
{ iTJSDispatch2 *dsp = TJSCreateRational(n, d); \
if (result) *result = tTJSVariant(dsp, dsp); \
dsp->Release(); \
return TJS_S_OK; }
//---------------------------------------------------------------------------
tjs_error rat_add(tTJSVariant *result, const tTJSNI_Rational *rat1, tTJSVariant *rat2)
{
	TJS_RATIONAL_RATIONAL(rat1, rat2);
	
	n = n1 * d2 + n2 * d1;
	d = d1 * d2;
	
	TJS_CREATE_RATIONAL(result);
}
//---------------------------------------------------------------------------
tjs_error rat_add(tTJSVariant *result, const tTJSNI_Rational *rat, tTVInteger i)
{
	TJS_RATIONAL_INT(rat, i);
	
	n = n1 * d2 + n2 * d1;
	d = d1 * d2;
	
	TJS_CREATE_RATIONAL(result);
}
//---------------------------------------------------------------------------
tjs_error rat_add(tTJSVariant *result, const tTJSNI_Rational *rat, tTVReal r)
{
	tTVReal r0 = rat->ToReal();
	if (result) *result = r0 + r;
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error rat_sub(tTJSVariant *result, const tTJSNI_Rational *rat1, tTJSVariant *rat2)
{
	TJS_RATIONAL_RATIONAL(rat1, rat2);
	
	n = n1 * d2 - n2 * d1;
	d = d1 * d2;
	
	TJS_CREATE_RATIONAL(result);
}
//---------------------------------------------------------------------------
tjs_error rat_sub(tTJSVariant *result, const tTJSNI_Rational *rat, tTVInteger i)
{
	TJS_RATIONAL_INT(rat, i);
	
	n = n1 * d2 - n2 * d1;
	d = d1 * d2;
	
	TJS_CREATE_RATIONAL(result);
}
//---------------------------------------------------------------------------
tjs_error rat_sub(tTJSVariant *result, const tTJSNI_Rational *rat, tTVReal r)
{
	tTVReal r0 = rat->ToReal();
	if (result) *result = r0 - r;
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error rat_mul(tTJSVariant *result, const tTJSNI_Rational *rat1, tTJSVariant *rat2)
{
	TJS_RATIONAL_RATIONAL(rat1, rat2);
	
	n = n1 * n2;
	d = d1 * d2;
	
	TJS_CREATE_RATIONAL(result);
}
//---------------------------------------------------------------------------
tjs_error rat_mul(tTJSVariant *result, const tTJSNI_Rational *rat, tTVInteger i)
{
	TJS_RATIONAL_INT(rat, i);
	
	n = n1 * n2;
	d = d1 * d2;
	
	TJS_CREATE_RATIONAL(result);
}
//---------------------------------------------------------------------------
tjs_error rat_mul(tTJSVariant *result, const tTJSNI_Rational *rat, tTVReal r)
{
	tTVReal r0 = rat->ToReal();
	if (result) *result = r0 * r;
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error rat_div(tTJSVariant *result, const tTJSNI_Rational *rat1, tTJSVariant *rat2)
{
	TJS_RATIONAL_RATIONAL(rat1, rat2);
	
	n = n1 * d2;
	d = d1 * n2;
	
	TJS_CREATE_RATIONAL(result);
}
//---------------------------------------------------------------------------
tjs_error rat_div(tTJSVariant *result, const tTJSNI_Rational *rat, tTVInteger i)
{
	TJS_RATIONAL_INT(rat, i);
	
	n = n1 * d2;
	d = d1 * n2;
	
	TJS_CREATE_RATIONAL(result);
}
//---------------------------------------------------------------------------
tjs_error rat_div(tTJSVariant *result, const tTJSNI_Rational *rat, tTVReal r)
{
	tTVReal r0 = rat->ToReal();
	if (result) *result = r0 / r;
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error rat_idiv(tTJSVariant *result, const tTJSNI_Rational *rat1, tTJSVariant *rat2)
{
	TJS_RATIONAL_RATIONAL(rat1, rat2);
	
	n = n1 * d2;
	d = d1 * n2;
	
	if (result) *result = n / d;
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error rat_idiv(tTJSVariant *result, const tTJSNI_Rational *rat, tTVInteger i)
{
	TJS_RATIONAL_INT(rat, i);
	
	n = n1 * d2;
	d = d1 * n2;
	
	if (result) *result = n / d;
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error rat_idiv(tTJSVariant *result, const tTJSNI_Rational *rat, tTVReal r)
{
	tTVReal r0 = rat->ToReal();
	if (result) *result = (tTVInteger)std::floor(r0 / r);
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error rat_pow(tTJSVariant *result, const tTJSNI_Rational *rat1, tTJSVariant *rat2)
{
	TJS_RATIONAL_RATIONAL(rat1, rat2);
	
	n = pow(n1, n2);
	d = pow(d1, n2);
	
	if (d2 == 1)
		TJS_CREATE_RATIONAL(result);
	
	unsigned int np = get_power(n);	// n = X^{np}
	unsigned int dp = get_power(d); // d = Y^{dp}
	if ((np < d2 && n != 1) || (dp < d2 && d != 1)) {
		// return as `real`
		double nr = std::pow(n, 1.0 / np); // X = n^(1/{np})
		double dr = std::pow(d, 1.0 / dp); // Y = d^(1/{dp})
		if (result) *result = nr / dr;
	} else {
		n = (tTVInteger)std::pow(n, 1.0 / np);
		d = (tTVInteger)std::pow(d, 1.0 / dp);
		TJS_CREATE_RATIONAL(result);
	}
	
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error rat_pow(tTJSVariant *result, const tTJSNI_Rational *rat, tTVInteger i)
{
	tTVInteger n, d, n1, d1;
	decompose(rat, &n1, &d1);
	tTVInteger j = i < 0 ? -i : i;
	n = pow(n1, j);
	d = pow(d1, j);
	if (i < 0) {
		tTVInteger t = n;
		n = d;
		d = t;
	}
	
	TJS_CREATE_RATIONAL(result);
}
//---------------------------------------------------------------------------
tjs_error rat_pow(tTJSVariant *result, const tTJSNI_Rational *rat, tTVReal r)
{
	//tTVReal r0 = rat->ToReal();
	//if (result) *result = std::pow(r0, r);
	//return TJS_S_OK;
	double nr = std::pow(rat->GetNumerator(), r);
	double dr = std::pow(rat->GetDenominator(), r);
	if (result) *result = nr / dr;
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error rat_eq(tTJSVariant *result, const tTJSNI_Rational *rat1, tTJSVariant *rat2)
{
	tTVInteger n2, d2;
	tjs_error hr = decompose(rat2, &n2, &d2);
	if (TJS_FAILED(hr)) return hr;
	
	if (result) {
		*result = rat1->GetNumerator() == n2 && rat1->GetDenominator() == d2;
	}
	
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error rat_eq(tTJSVariant *result, const tTJSNI_Rational *rat, tTVInteger i)
{
	if (result) {
		*result = rat->GetNumerator() == i && rat->GetDenominator() == 1;
	}
	
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error rat_eq(tTJSVariant *result, const tTJSNI_Rational *rat, tTVReal r)
{
	tTVReal r0 = rat->ToReal();
	if (result) *result = (tjs_int)(r0 == r ? 1 : 0);
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
}

//---------------------------------------------------------------------------
// tTJSNI_Rational : TJS Native Instance : Rational
//---------------------------------------------------------------------------
tTJSNI_Rational::tTJSNI_Rational() : inherited() { }
//---------------------------------------------------------------------------
tjs_error TJS_INTF_METHOD
tTJSNI_Rational::Construct(tjs_int numparams, tTJSVariant **param, iTJSDispatch2 *tjs_obj)
{
	/** Constructor
	 *    new Rational()             => (0 / 1)
	 *    new Rational(int)          => (int / 1)
	 *    new Rational(real)         => ! not implemeted yet
	 *    new Rational(rational)     => (rational.numerator / rational.denominator)
	 *    new Rational(int1, int2)   => (int1 / int2)
	 *    new Rational(real1, real2) => ! not implemeted yet
	 *    new Rational(int, real)    => ! not implemeted yet
	 *    new Rational(real, int)    => ! not implemeted yet
	 *    new Rational(rat1, rat2)   => ((rat1.numerator * rat2.numerator) / (rat1.denominator * rat2.denominator))
	 */
	
	tjs_error hr = inherited::Construct(numparams, param, tjs_obj);
	if (TJS_FAILED(hr)) return hr;
	
	switch (numparams) {
	case 0:
		numerator = 0;
		denominator = 1;
		break;
	case 1:
		hr = Init1(param[0]);
		break;
	case 2:
		hr = Init2(param[0], param[1]);
		break;
	default:
		return TJS_E_BADPARAMCOUNT;
	}
	
	if (TJS_FAILED(hr)) {
		// leak memory without `Release`... why???
		tjs_obj->Release();
		return hr;
	}
	
	if (denominator == 0) {
		tjs_obj->Release();
		return TJS_E_INVALIDPARAM;
	}
	
	if (denominator < 0) {
		numerator = -numerator;
		denominator = -denominator;
	}
	
	tTVInteger d = gcd(numerator, denominator);
	numerator /= d;
	denominator /= d;
	if (numerator == 0) denominator = 1;
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error tTJSNI_Rational::Init1(const tTJSVariant *arg)
{
	switch (arg->Type()) {
	case tvtInteger:
		numerator = arg->AsInteger();
		denominator = 1;
		break;
	case tvtReal:
		return InitReal(arg->AsReal());
	case tvtObject:
		if (TJS_IS_RATIONAL(arg)) {
			tjs_error hr = decompose(arg, &numerator, &denominator);
			if (TJS_FAILED(hr)) return hr;
		} else {
			tTVReal real;
			tjs_error hr = to_real(arg, &real);
			if (TJS_FAILED(hr)) return TJS_E_INVALIDPARAM;
			return InitReal(real);
		}
		break;
	default:
		return TJS_E_INVALIDPARAM;
	}
	
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error tTJSNI_Rational::Init2(const tTJSVariant *arg1, const tTJSVariant *arg2)
{
	if (arg1->Type() == tvtObject && arg2->Type() == tvtObject) {
		if (!TJS_IS_RATIONAL(arg1) || !TJS_IS_RATIONAL(arg2))
			return TJS_E_INVALIDPARAM;
		tTVInteger num1, den1, num2, den2;
		tjs_error hr;
		hr = decompose(arg1, &num1, &den1);
		if (TJS_FAILED(hr)) return hr;
		hr = decompose(arg2, &num2, &den2);
		if (TJS_FAILED(hr)) return hr;
		numerator = num1 * num2;
		denominator = den1 * den2;
		return TJS_S_OK;
	}
	
	if (arg1->Type() == tvtReal || arg2->Type() == tvtReal) {
		tTVReal r1, r2;
		tjs_error hr;
		hr = to_real(arg1, &r1);
		if (TJS_FAILED(hr)) return hr;
		hr = to_real(arg2, &r2);
		return InitReal(r1 / r2);
	}
	
	tTVInteger n = 1, d = 1;
	tjs_error hr = TJS_S_OK;
	
	// get numerator
	switch (arg1->Type()) {
	case tvtInteger:
		n = arg1->AsInteger();
		break;
	case tvtObject:
		if (!TJS_IS_RATIONAL(arg1))
			return TJS_E_INVALIDPARAM;
		hr = decompose(arg1, &n, &d);
		break;
	default:
		return TJS_E_INVALIDPARAM;
	}
	
	// get denominator
	switch (arg2->Type()) {
	case tvtInteger:
		d *= arg2->AsInteger();
		break;
	case tvtObject:
		if (!TJS_IS_RATIONAL(arg2))
			return TJS_E_INVALIDPARAM;
		{
			tTVInteger n1, d1;
			hr = decompose(arg2, &n1, &d1);
			if (TJS_FAILED(hr)) return hr;
			n *= n1;
			d *= d1;
		}
		break;
	default:
		return TJS_E_INVALIDPARAM;
	}
	
	numerator = n;
	denominator = d;
	
	return TJS_S_OK;
}
//---------------------------------------------------------------------------
tjs_error tTJSNI_Rational::InitReal(tTVReal arg)
{
	// tTVReal must be double!
	// from python `float_as_integer_ratio`
	// (https://github.com/python/cpython/blob/ecdf541f2e60cf2ca189acceb0791474b7cf74c7/Objects/floatobject.c#L1446)
	
	if (std::isinf(arg) || std::isnan(arg)) return TJS_E_INVALIDPARAM;
	
	int exponent;
	double float_part = std::frexp(arg, &exponent);
	for (int i = 0; i < 300 && float_part != std::floor(float_part) ; i++) {
		float_part *= 2.0;
		exponent--;
	}
	
	tTVInteger n = (tTVInteger)float_part;
	
	if (0 < exponent) {
		numerator = n << (tTVInteger)exponent;
		denominator = 1;
	} else {
		numerator = n;
		denominator = (tTVInteger)1 << (-exponent);
	}
	
	return TJS_S_OK;
}
//---------------------------------------------------------------------------



//---------------------------------------------------------------------------
// tTJSNC_Rational : TJS Native Class : Rational
//---------------------------------------------------------------------------
tjs_uint32 tTJSNC_Rational::ClassID = (tjs_uint32)-1;
//---------------------------------------------------------------------------
tTJSNC_Rational::tTJSNC_Rational() : inherited(TJS_W("Rational"))
{
	Rational = this;
	
	TJS_BEGIN_NATIVE_MEMBERS(/*TJS class name*/Iterator)
//----------------------------------------------------------------------
	TJS_DECL_EMPTY_FINALIZE_METHOD
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_CONSTRUCTOR_DECL(_this, tTJSNI_Rational, Rational)
{
	return TJS_S_OK;
}
TJS_END_NATIVE_CONSTRUCTOR_DECL(Rational)
//---------------------------------------------------------------------------
#define rat_calc(fn) \
TJS_GET_NATIVE_INSTANCE(ni, tTJSNI_Rational); \
if (numparams != 1) return TJS_E_BADPARAMCOUNT; \
switch (param[0]->Type()) { \
case tvtInteger: \
	return fn(result, ni, param[0]->AsInteger()); \
case tvtReal: \
	return fn(result, ni, param[0]->AsReal()); \
case tvtObject: \
	if (TJS_IS_RATIONAL(param[0])) { \
		return fn(result, ni, param[0]); \
	} else { \
		tTVReal real; \
		tjs_error hr = ::to_real(param[0], &real); \
		if (TJS_FAILED(hr)) return hr; \
		return fn(result, ni, real); \
	} \
default: return TJS_E_INVALIDPARAM; \
}
#define TJS_RATIONAL_METHOD_DECL(name) \
TJS_BEGIN_NATIVE_METHOD_DECL(name) \
{ rat_calc(rat_##name) } \
TJS_END_NATIVE_METHOD_DECL(name) \
TJS_BEGIN_NATIVE_METHOD_DECL(__##name##__) \
{ rat_calc(rat_##name) } \
TJS_END_NATIVE_METHOD_DECL(__##name##__)
//----------------------------------------------------------------------
TJS_RATIONAL_METHOD_DECL(add)
//----------------------------------------------------------------------
TJS_RATIONAL_METHOD_DECL(sub)
//----------------------------------------------------------------------
TJS_RATIONAL_METHOD_DECL(mul)
//----------------------------------------------------------------------
TJS_RATIONAL_METHOD_DECL(div)
//----------------------------------------------------------------------
TJS_RATIONAL_METHOD_DECL(idiv)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(__num__)
{
	TJS_GET_NATIVE_INSTANCE(ni, tTJSNI_Rational);
	iTJSDispatch2 *dsp = TJSCreateRational(ni->GetNumerator(), ni->GetDenominator());
	if (result) *result = tTJSVariant(dsp, dsp);
	dsp->Release();
	return TJS_S_OK;
}
TJS_END_NATIVE_METHOD_DECL(__num__)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(__neg__)
{
	TJS_GET_NATIVE_INSTANCE(ni, tTJSNI_Rational);
	iTJSDispatch2 *dsp = TJSCreateRational(-ni->GetNumerator(), ni->GetDenominator());
	if (result) *result = tTJSVariant(dsp, dsp);
	dsp->Release();
	return TJS_S_OK;
}
TJS_END_NATIVE_METHOD_DECL(__neg__)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(pow)
{
	rat_calc(rat_pow);
}
TJS_END_NATIVE_METHOD_DECL(pow)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(sign)
{
	TJS_GET_NATIVE_INSTANCE(ni, tTJSNI_Rational);
	if (result) *result = ni->GetSign();
	return TJS_S_OK;
}
TJS_END_NATIVE_METHOD_DECL(sign)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(abs)
{
	TJS_GET_NATIVE_INSTANCE(ni, tTJSNI_Rational);
	tTVInteger n, d;
	n = ni->GetNumerator();
	d = ni->GetDenominator();
	iTJSDispatch2 *dsp = TJSCreateRational(n < 0 ? -n : n, d);
	if (result) *result = tTJSVariant(dsp, dsp);
	dsp->Release();
	return TJS_S_OK;
}
TJS_END_NATIVE_METHOD_DECL(abs)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(__eq__)
{
	if (numparams != 1) return false;
	
	TJS_GET_NATIVE_INSTANCE(ni, tTJSNI_Rational);
	switch (param[0]->Type()) {
	case tvtInteger:
		return rat_eq(result, ni, param[0]->AsInteger());
	case tvtReal:
		return rat_eq(result, ni, param[0]->AsReal());
	case tvtObject:
		if (TJS_IS_RATIONAL(param[0])) {
			return rat_eq(result, ni, param[0]);
		} else {
			tTVReal real;
			tjs_error hr = ::to_real(param[0], &real);
			if (TJS_FAILED(hr)) return hr;
			return rat_eq(result, ni, real);
		}
	default:
		if (result) *result = (tjs_int)0;
		return TJS_S_OK;
	}
}
TJS_END_NATIVE_METHOD_DECL(__eq__)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(__deq__)
{
	if (numparams != 1) return false;
	if (!TJS_IS_RATIONAL(param[0])) {
		if (result) *result = (tjs_int)0;
		return TJS_S_OK;
	}
	tTVInteger n, d;
	tjs_error hr = ::decompose(param[0], &n, &d);
	if (TJS_FAILED(hr)) {
		if (result) *result = (tjs_int)0;
		return TJS_S_OK;
	}
	TJS_GET_NATIVE_INSTANCE(ni, tTJSNI_Rational);
	if (ni->GetNumerator() == n && ni->GetDenominator() == d) {
		if (result) *result = (tjs_int)1;
		return TJS_S_OK;
	} else {
		if (result) *result = (tjs_int)0;
		return TJS_S_OK;
	}
}
TJS_END_NATIVE_METHOD_DECL(__deq__)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(toInteger)
{
	TJS_GET_NATIVE_INSTANCE(ni, tTJSNI_Rational);
	if (result) *result = ni->ToInteger();
	return TJS_S_OK;
}
TJS_END_NATIVE_METHOD_DECL(toInteger)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(toReal)
{
	TJS_GET_NATIVE_INSTANCE(ni, tTJSNI_Rational);
	if (result) *result = ni->ToReal();
	return TJS_S_OK;
}
TJS_END_NATIVE_METHOD_DECL(toReal)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_METHOD_DECL(toString)
{
	if (result) {
		TJS_GET_NATIVE_INSTANCE(ni, tTJSNI_Rational);
		std::stringstream ss;
		ss << "(" << ni->GetNumerator() << "/" << ni->GetDenominator() << ")";
		*result = ss.str().c_str();
	}
	return TJS_S_OK;
}
TJS_END_NATIVE_METHOD_DECL(toString)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_PROP_DECL(numerator)
{
	TJS_BEGIN_NATIVE_PROP_GETTER
	{
		TJS_GET_NATIVE_INSTANCE(ni, tTJSNI_Rational);
		if (result) *result = ni->GetNumerator();
		return TJS_S_OK;
	}
	TJS_END_NATIVE_PROP_GETTER
	TJS_DENY_NATIVE_PROP_SETTER
}
TJS_END_NATIVE_PROP_DECL(numerator)
//----------------------------------------------------------------------
TJS_BEGIN_NATIVE_PROP_DECL(denominator)
{
	TJS_BEGIN_NATIVE_PROP_GETTER
	{
		TJS_GET_NATIVE_INSTANCE(ni, tTJSNI_Rational);
		if (result) *result = ni->GetDenominator();
		return TJS_S_OK;
	}
	TJS_END_NATIVE_PROP_GETTER
	TJS_DENY_NATIVE_PROP_SETTER
}
TJS_END_NATIVE_PROP_DECL(denominator)
//----------------------------------------------------------------------
	TJS_END_NATIVE_MEMBERS
}
//---------------------------------------------------------------------------
tTJSNativeInstance *tTJSNC_Rational::CreateNativeInstance()
{
	return new tTJSNI_Rational(); 
}
//---------------------------------------------------------------------------



//---------------------------------------------------------------------------
// TJSCreateRational
//---------------------------------------------------------------------------
iTJSDispatch2 * TJSCreateRational(tTVInteger num, tTVInteger den, iTJSDispatch2 **classout)
{
	if(classout) *classout = Rational, Rational->AddRef();
	
	tTJSVariant *a[2];
	tTJSVariant n(num), d(den);
	a[0] = &n;
	a[1] = &d;
	iTJSDispatch2 *dsp;
	Rational->CreateNew(0, nullptr, nullptr, &dsp, 2, a, Rational);
	return dsp;
}
//---------------------------------------------------------------------------

}

