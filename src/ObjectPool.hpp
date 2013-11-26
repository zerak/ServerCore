
// -*- C++ -*-
//==========================================================
/**
 *     Created_datetime : 10/15/2013 14:09
 *     File			    : ObjectPool.hpp
 *     Author           : GNUnix <Kingbug2010@gmail.com>
 *     Description      : 
 *
 *     <Change_list>
 */
//==========================================================
#ifndef _ObjectPool_hpp_
#define _ObjectPool_hpp_

#include "ScopedLock.h"

template<class T>
class ObjectPool
{
public:
	typedef vector<T*> objVecDef;
	typedef typename objVecDef::iterator objVecIte;
	ObjectPool()
	{
		::InitializeCriticalSection(&cs);
	}
	~ObjectPool(void)
	{
		objVecIte it;
		for( it == objVec.begin(); it != objVec.end(); ++it )
		{
			delete (*it);
		}
		objVec.clear();

		::DeleteCriticalSection(&cs);
	}

	void initialize( unsigned int nMaxObjs )
	{
		for ( unsigned int i = 0; i < nMaxObjs; i ++ )
		{
			objVec.push_back( new T() );
		}
	}

	T* createObject()
	{
		ScopedLock lock(cs);
		if ( objVec.empty() )
		{
			return nullptr;
		}

		T *p = objVec.back();
		objVec.pop_back();
		return p;
	}

	void deleteObject( T *p )
	{
		ScopedLock lock(cs);
		objVec.push_back(p);
	}

private:
	CRITICAL_SECTION cs;
	objVecDef objVec;
};

#endif
