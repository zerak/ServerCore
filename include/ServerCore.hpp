//-*- C++ header -*-
/** 
 * Created time : 2013年11月18日, 上午11:09
 * File         : ServerCore.hpp
 * Author       : GNUnix <Kingbug2010@gmail.com>
 * Description  :
 * 
 * <Change_list>
 */

#ifndef SERVERCORE_HPP
#define	SERVERCORE_HPP

#include "Platform.hpp"

// export/import
#ifdef Platform_Windows
#ifdef ServerCore_Export
#define ServerCore_API __declspec(dllexport)
#else
#define ServerCore_API __declspec(dllimport)
#endif

#else

#ifdef Platform_Linux
#define ServerCore_API
#endif

#endif

// basic local define
#define nullptr 0

namespace ServerCore
{

}

#endif	/* SERVERCORE_HPP */

