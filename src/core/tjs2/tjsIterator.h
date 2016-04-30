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
	
	template<typename Action>
	tjs_error Each( tTJSVariant *result,
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
