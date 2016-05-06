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
#include <unordered_set>
#include "tjsCommHead.h"
#include "tjsNative.h"

namespace TJS
{
//---------------------------------------------------------------------------
// TJS `Iterator` class/instance
//   - The base class of all Iterator classes.
//   - This class behaves like ArrayIterator
//     (methods such as map, filter, ... returns an Array object).
//   - In default implementation, `hasNext()` return always `true`
//     and `next()` returns `void` eternally.
//---------------------------------------------------------------------------
// - ctor
//   - new Iterator(args...)
//       All arguments will be ignored.
// - dtor
//   - invalidate iter;
//       Invalidate this object.
//       Do nothing for Back-end object
//---------------------------------------------------------------------------
// - static methods
//   - Iterator.from(obj)
//       if obj is an Array then return ArrayIterator
//       if obj is a Dictionary then return DictionaryIterator
//       if obj is an Iterator then return obj itself
//       otherwise throw error
//---------------------------------------------------------------------------
// - instance methods
//   - current()
//       returns the current element
//   - moveNext()
//       moves to next state and returns wheather moved or not
//---------------------------------------------------------------------------
class tTJSNI_Iterator : public tTJSNativeInstance
{
	typedef tTJSNativeInstance inherited;

public:
	tTJSNI_Iterator();

};

//---------------------------------------------------------------------------
class tTJSNC_Iterator : public tTJSNativeClass
{
	typedef tTJSNativeClass inherited;

public:
	tTJSNC_Iterator();
	tjs_uint TJS_INTF_METHOD Release();
	
	static tjs_uint32 ClassID;

private:
	tTJSNativeInstance *CreateNativeInstance();
};


//---------------------------------------------------------------------------
// TJS ArrayIterator class/instance
//---------------------------------------------------------------------------
class tTJSNI_ArrayIterator : public tTJSNativeInstance
{
	typedef tTJSNativeInstance inherited;

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

	tjs_error GetCurrent(tTJSVariant *val) {
		if (Index < 0) {
			val->Clear();
			return TJS_S_OK;
		}
		return BackEnd->PropGetByNum(TJS_MEMBERMUSTEXIST|TJS_IGNOREPROP, Index, val, BackEnd);
	}
	bool MoveNext(void) {
		tTJSVariant count;
		BackEnd->PropGet(0, TJS_W("count"), &CountHint, &count, BackEnd);
		if (Index + 1 < (tjs_int)count) {
			Index += 1;
			return true;
		}
		return false;
	}

private:
	iTJSDispatch2 *BackEnd = nullptr;
	tjs_int Index = -1;
	tjs_uint32 CountHint = 0;
};


//---------------------------------------------------------------------------
// TJS DictionaryIterator class/instance
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
class tTJSNI_DictionaryIterator : public tTJSNativeInstance
{
	typedef tTJSNativeInstance inherited;

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

	tjs_error GetCurrent(tTJSVariant *val);
	bool MoveNext(void);
	bool UpdateKeys(void);

private:
	bool isExist(const tjs_char *key) {
		tTJSVariant dummy;
		return TJS_S_OK == BackEnd->PropGet(TJS_MEMBERMUSTEXIST, key, nullptr, &dummy, BackEnd);
	}
	tjs_error GetPair(const tjs_char *key, tTJSVariant *result);

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
	tjs_char *CurrentKey = nullptr;
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
