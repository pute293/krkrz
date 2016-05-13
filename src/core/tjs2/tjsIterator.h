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
#include <functional>
#include "tjsCommHead.h"
#include "tjsNative.h"

namespace TJS
{

class iTJSIterator {
	typedef tTJSVariant V;
public:
	typedef std::function<tjs_error(V*,tjs_int)> action_t;
	typedef std::function<tjs_error(V*,V*,tjs_int)> func_t;
	typedef std::function<tjs_error(V*,V*,V*,tjs_int)> reduce_t;
	
	virtual tjs_error TJS_INTF_METHOD GetCurrent(tTJSVariant *result) = 0;
	virtual tjs_error TJS_INTF_METHOD MoveNext(tTJSVariant *result) = 0;
	virtual tjs_error TJS_INTF_METHOD Each(action_t action);
	virtual tjs_error TJS_INTF_METHOD Map(tTJSVariant *result, func_t map);
	virtual tjs_error TJS_INTF_METHOD Filter(tTJSVariant *result, func_t pred);
	virtual tjs_error TJS_INTF_METHOD Reduce(tTJSVariant *result, tTJSVariant *init, reduce_t proc);
	virtual tjs_error TJS_INTF_METHOD Drop(tTJSVariant *result, tTVInteger count);
	virtual tjs_error TJS_INTF_METHOD Take(tTJSVariant *result, tTVInteger count);
	virtual tjs_error TJS_INTF_METHOD All(tTJSVariant *result, func_t pred);
	virtual tjs_error TJS_INTF_METHOD Any(tTJSVariant *result, func_t pred);
	virtual tjs_error TJS_INTF_METHOD None(tTJSVariant *result, func_t pred);
	virtual tjs_error TJS_INTF_METHOD Partition(tTJSVariant *result, func_t pred);
	virtual tjs_error TJS_INTF_METHOD DropWhile(tTJSVariant *result, func_t pred);
	virtual tjs_error TJS_INTF_METHOD TakeWhile(tTJSVariant *result, func_t pred);
	virtual tjs_error TJS_INTF_METHOD Find(tTJSVariant *result, func_t pred);
	virtual tjs_error TJS_INTF_METHOD FindIndex(tTJSVariant *result, func_t pred);
	virtual tjs_error TJS_INTF_METHOD Pairwise(tTJSVariant *result, tTVInteger count);
	virtual tjs_error TJS_INTF_METHOD Slice(tTJSVariant *result, tTVInteger count);
	virtual tjs_error TJS_INTF_METHOD Reject(tTJSVariant *result, func_t pred);
	//virtual tjs_error TJS_INTF_METHOD Zip(tTJSVariant *result, tTVInteger count);
	//virtual tjs_error TJS_INTF_METHOD ToArray(tTJSVariant *result, tTVInteger count);
};

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
//   - each
//   - map
//   - filter
//   - reduce
//   - drop
//   - take
//   - all
//   - any
//   - none
//---------------------------------------------------------------------------
class tTJSNI_Iterator : public tTJSNativeInstance, public iTJSIterator
{
	typedef tTJSNativeInstance inherited;

public:
	tTJSNI_Iterator();
	
public:
	tjs_error TJS_INTF_METHOD
		Construct(tjs_int numparams, tTJSVariant **param, iTJSDispatch2 *tjs_obj);
	void TJS_INTF_METHOD Destruct();
	
	tjs_error TJS_INTF_METHOD GetCurrent(tTJSVariant *result);
	tjs_error TJS_INTF_METHOD MoveNext(tTJSVariant *result);

private:
	iTJSDispatch2 *BackEnd = nullptr;
	tjs_int Index = -1;
	tTJSVariant CachedItem;
	bool IsCached = false;
	tjs_uint32 CurrentHint = 0;
	tjs_uint32 NextHint = 0;
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
class tTJSNI_ArrayIterator : public tTJSNativeInstance, public iTJSIterator
{
	typedef tTJSNativeInstance inherited;

public:
	/*
			at
			first
			last
			flatMap
			cycle
			contains
			groupBy
			count
			max
			min
			minmax
			uniq
			partition
			
			lazy
	*/

public:
	tTJSNI_ArrayIterator();
	tjs_error TJS_INTF_METHOD
		Construct(tjs_int numparams, tTJSVariant **param, iTJSDispatch2 *tjs_obj);
	void TJS_INTF_METHOD Destruct();

	tjs_error TJS_INTF_METHOD GetCurrent(tTJSVariant *val);
	tjs_error TJS_INTF_METHOD MoveNext(tTJSVariant *result);

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
class tTJSNI_DictionaryIterator : public tTJSNativeInstance, public iTJSIterator
{
	typedef tTJSNativeInstance inherited;

public:
	tTJSNI_DictionaryIterator();
	tjs_error TJS_INTF_METHOD
		Construct(tjs_int numparams, tTJSVariant **param, iTJSDispatch2 *tjs_obj);
	void TJS_INTF_METHOD Destruct();

	tjs_error TJS_INTF_METHOD GetCurrent(tTJSVariant *result);
	tjs_error TJS_INTF_METHOD MoveNext(tTJSVariant *result);
	tjs_error TJS_INTF_METHOD Each(action_t action);
	tjs_error TJS_INTF_METHOD Map(tTJSVariant *result, func_t map);
	tjs_error TJS_INTF_METHOD Filter(tTJSVariant *result, func_t pred);
	
	tjs_error TJS_INTF_METHOD Keys(tTJSVariant *result);
	tjs_error TJS_INTF_METHOD Values(tTJSVariant *result);

private:
	bool UpdateKeys(void);
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
