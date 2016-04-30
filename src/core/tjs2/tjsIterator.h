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

#include <algorithm>
#include <functional>
#include <unordered_set>
#include "tjsCommHead.h"
#include "tjsNative.h"


namespace TJS
{
//---------------------------------------------------------------------------
class tTJSNI_Iterator : public tTJSNativeInstance
{
	typedef tTJSNativeInstance inherited;

public:
	tTJSNI_Iterator();

private:
};

//---------------------------------------------------------------------------
class tTJSNC_Iterator : public tTJSNativeClass
{
	typedef tTJSNativeClass inherited;

public:
	tTJSNC_Iterator();
	
	static tjs_uint32 ClassID;

private:
	tTJSNativeInstance *CreateNativeInstance();
};

//---------------------------------------------------------------------------
class tTJSNI_ArrayIterator : public tTJSNI_Iterator
{
	typedef tTJSNI_Iterator inherited;

public:
	template<typename Action>
	tjs_error Each( tTJSVariant *result,
					iTJSDispatch2 *objthis,
					Action action);
	
	template<typename Action>
	tjs_error FilterMap(tTJSVariant *result,
						iTJSDispatch2 *objthis,
						Action action);
	
	template<typename Action>
	tjs_error Reduce(	tTJSVariant *result,
						tTJSVariant *init,
						iTJSDispatch2 *objthis,
						Action action);
	
	/*
			dropWhile
			takeWhile
			reduce
			at
			first
			last
			flatMap
			cycle
			find
			findIndex
			pairwise
			slice
			contains
			groupBy
			count
			max
			min
			minmax
			uniq
			partition
			reject
			zip
			
			lazy
	*/

public:
	tTJSNI_ArrayIterator();
	tjs_error TJS_INTF_METHOD
		Construct(tjs_int numparams, tTJSVariant **param, iTJSDispatch2 *tjs_obj);
	void TJS_INTF_METHOD Destruct();

	tjs_error Next(tTJSVariant *val) { return BackEnd->PropGetByNum(TJS_MEMBERMUSTEXIST | TJS_IGNOREPROP, Index++, val, BackEnd); }
	bool HasNext(void) {
		tTJSVariant count;
		BackEnd->PropGet(0, TJS_W("count"), &CountHint, &count, BackEnd);
		return Index < (tjs_int)count;
	}

private:
	iTJSDispatch2 *BackEnd = nullptr;
	tjs_int Index = 0;
	static tjs_uint32 CountHint;
};

//---------------------------------------------------------------------------
class tTJSNC_ArrayIterator : public tTJSNativeClass
{
	typedef tTJSNativeClass inherited;

public:
	tTJSNC_ArrayIterator();
	
	static tjs_uint32 ClassID;

private:
	tTJSNativeInstance *CreateNativeInstance();
};

//---------------------------------------------------------------------------
class tTJSNI_DictionaryIterator : public tTJSNI_Iterator
{
	typedef tTJSNI_Iterator inherited;

public:
	template<typename Action>
	tjs_error Each( tTJSVariant *result,
					iTJSDispatch2 *objthis,
					Action action);
	
	template<typename Action>
	tjs_error FilterMap(tTJSVariant *result,
						iTJSDispatch2 *objthis,
						Action action);
	
	template<typename Action>
	tjs_error Reduce(	tTJSVariant *result,
						tTJSVariant *init,
						iTJSDispatch2 *objthis,
						Action action);

public:
	tTJSNI_DictionaryIterator();
	tjs_error TJS_INTF_METHOD
		Construct(tjs_int numparams, tTJSVariant **param, iTJSDispatch2 *tjs_obj);
	void TJS_INTF_METHOD Destruct();

	tjs_error Next(tTJSVariant *val) {
		tTJSVariant ret_key, ret_val;
		tTJSVariant *param[2]; param[0] = &ret_key; param[1] = &ret_val;
		for (const tjs_char *key : CachedKeys) {
			if (GetDictValue(key, &ret_val) == TJS_S_OK) {
				CachedKeys.erase(key);
				VisitedKeys.insert(key);
				
				ret_key = key;
				tTJSArrayObject *array = (tTJSArrayObject*)TJSCreateArrayObject();
				array->FuncCall(0, TJS_W("push"), nullptr, nullptr, 2, param, array);
				*val = tTJSVariant(array, array);
				array->Release();
				return TJS_S_OK;
			}
		}
		// `hasNext` returns false, but `next` called
		val->Clear();
		return TJS_S_OK;
	}
	bool HasNext(void) {
		if (CachedKeys.empty() && !UpdateKeys()) return false;
		tTJSVariant dummy;
		for (const tjs_char *key : CachedKeys)
			if (GetDictValue(key, &dummy) == TJS_S_OK)
				return true;
		return false;
	}
	bool UpdateKeys(void);

private:
	tjs_error GetDictValue(const tjs_char *key, tTJSVariant *result) {
		return BackEnd->PropGet(TJS_MEMBERMUSTEXIST|TJS_IGNOREPROP, key, nullptr, result, BackEnd);
	}

private:
	struct DictKeyEqual {
		bool operator()(const tjs_char *lhs, const tjs_char *rhs) {
			return TJS_stricmp(lhs, rhs) == 0;
		}
	};
	struct DictKeyHash {
		size_t operator()(const tjs_char *key) {
			// compute hash by FNV-1a
			// ref: http://isthe.com/chongo/tech/comp/fnv/
#if defined(_M_X64) || defined(_LP64) || defined(__x86_64) || defined(_WIN64)
			static_assert(sizeof(size_t) == 8, "sizeof(size_t) != 8");
			const size_t offset_basis = 14695981039346656037ULL;
			const size_t prime = 1099511628211ULL;
#else
			static_assert(sizeof(size_t) == 4, "sizeof(size_t) != 4");
			const size_t offset_basis = 2166136261U;
			const size_t prime = 16777619U;
#endif
			const size_t len = TJS_strlen(key);
			size_t hash = offset_basis;
			for (size_t i = 0; i < len; ++i) {
				hash ^= key[i];
				hash *= prime;
			}
			return hash;
		}
	};
	typedef std::unordered_set<const tjs_char*, DictKeyHash, DictKeyEqual> KeySet;

private:
	iTJSDispatch2 *BackEnd = nullptr;
	KeySet CachedKeys;	// keys not visited yet (may not exist)
	KeySet VisitedKeys;	// keys already visited
};

//---------------------------------------------------------------------------
class tTJSNC_DictionaryIterator : public tTJSNativeClass
{
	typedef tTJSNativeClass inherited;

public:
	tTJSNC_DictionaryIterator();
	
	static tjs_uint32 ClassID;

private:
	tTJSNativeInstance *CreateNativeInstance();
};

//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// TJSCreateArrayIterator
//---------------------------------------------------------------------------
TJS_EXP_FUNC_DEF(iTJSDispatch2 *, TJSCreateArrayIterator, (tTJSVariant *backend, iTJSDispatch2 **classout = nullptr));
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// TJSCreateDictionaryIterator
//---------------------------------------------------------------------------
TJS_EXP_FUNC_DEF(iTJSDispatch2 *, TJSCreateDictionaryIterator, (tTJSVariant *backend, iTJSDispatch2 **classout = nullptr));
//---------------------------------------------------------------------------

}

#endif	// tjsIteratorH
