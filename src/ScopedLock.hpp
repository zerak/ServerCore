
// -*- C++ -*-
//==========================================================
/**
*     Created_datetime : 10/15/2013 14:23
*     File		       : ScopedLock.hpp
*     Author           : GNUnix <Kingbug2010@gmail.com>
*     Description      : 
*
*     <Change_list>
*/
//==========================================================
#ifndef _ScopedLock_hpp_
#define _ScopedLock_hpp_

class ScopedLock
{
public:
	ScopedLock( CRITICAL_SECTION &lock )
		:csLock(lock)
	{
		::EnterCriticalSection(&csLock);
	}

	~ScopedLock(void)
	{
		::LeaveCriticalSection(&csLock);
	}

private:
	CRITICAL_SECTION &csLock;
};

#endif