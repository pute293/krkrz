//---------------------------------------------------------------------------
/*
	TJS2 Script Engine
	Copyright (C) 2000 W.Dee <dee@kikyou.info> and contributors

	See details of license at "license.txt"
*/
//---------------------------------------------------------------------------

#ifndef tjsIteratorInternalH
#define tjsIteratorInternalH

namespace TJS { namespace {

// for RAII
struct ParamList {
	tTJSVariant **Params;
	tTJSVariant *Index = nullptr;
	tjs_int Count;
	
	void SetIndex(tjs_uint idx, tjs_int init) {
		Index = new tTJSVariant(init);
		Params[idx] = Index;
	}
	tjs_int GetIndex() { return Index->operator tjs_int(); }
	void UpdateIndex(tjs_int val) {
		*Index = val;
	}
	void IncrementIndex() {
		*Index = Index->AsInteger() + 1;
	}
	
	ParamList() : Params(nullptr), Count(0) { }
	ParamList(tjs_int count) : Count(count) {
		Params = new tTJSVariant*[count];
	}
	~ParamList() { delete[] Params; delete Index; }
	tTJSVariant *&operator[](int i) { return Params[i]; }
	const tTJSVariant *operator[](int i) const { return Params[i]; }
	
	// inhibit copy
	ParamList(const ParamList &o) = delete;
	ParamList &operator=(const ParamList &o) = delete;
	
	// move
	ParamList(ParamList &&o) TJS_NOEXCEPT
		: Params(o.Params), Index(o.Index), Count(o.Count) {
		o.Params = nullptr;
		o.Index = nullptr;
	}
	ParamList &operator=(ParamList &&o) TJS_NOEXCEPT {
		if (this != &o) {
			Params = o.Params;
			Index = o.Index;
			Count = o.Count;
			o.Params = nullptr;
			o.Index = nullptr;
		}
		return *this;
	}
};



//----------------------------------------------------------------------
// MACROS
//----------------------------------------------------------------------
#define TJS_ITERATOR_CHECK_FUNCTION2(index, fn, fn_this, instead) \
	if (numparams < index + 1) return TJS_E_BADPARAMCOUNT;	\
	iTJSDispatch2 *fn;										\
	iTJSDispatch2 *fn_this;									\
	{														\
		tTJSVariantClosure &clo =							\
			param[index]->AsObjectClosureNoAddRef();		\
		fn = clo.Object;									\
		fn_this = clo.ObjThis;								\
		if (!fn) return TJS_E_INVALIDPARAM;					\
		if (!fn_this) fn_this = instead;					\
	}

#define TJS_ITERATOR_CHECK_FUNCTION(index, fn, fn_this)	TJS_ITERATOR_CHECK_FUNCTION2(index, fn, fn_this, objthis)

#define TJS_ITERATOR_PREPARE_ARRAY_PARAMLIST(paramList)		\
	ParamList paramList(numparams + 1);						\
	paramList.SetIndex(1, 0);								\
	/* paramList[0]  := item								\
	 * paramList[1]  := index								\
	 * paramList[..] := *args */							\
	for (tjs_int i = 1; i < numparams; ++i)	{				\
		paramList[i + 1] = param[i];						\
	}

#define TJS_ITERATOR_PREPARE_ARRAY_PARAMLISTX(paramList, index)\
	ParamList paramList(numparams + index);					\
	paramList.SetIndex(index, 0);							\
	for (tjs_int i = index; i < numparams; ++i)	{			\
		paramList[i + 1] = param[i];						\
	}

#define TJS_ITERATOR_PREPARE_INT(count)						\
	if (numparams != 1) return TJS_E_BADPARAMCOUNT;			\
	if (param[0]->Type() != tvtInteger)						\
		return TJS_E_INVALIDPARAM;							\
	tTVInteger count = param[0]->AsInteger();

#define TJS_ITERATOR_PREPARE_INT_PARAMLIST(paramList, count)\
	if (numparams != 1) return TJS_E_BADPARAMCOUNT;			\
	if (param[0]->Type() != tvtInteger)						\
		return TJS_E_INVALIDPARAM;							\
	tTVInteger count = param[0]->AsInteger();				\
	ParamList paramList(1);	/* paramList[0] := item */
//----------------------------------------------------------------------


} }

#endif
