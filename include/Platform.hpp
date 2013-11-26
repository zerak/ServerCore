//-*- C++ header -*-
/** 
 * Created time : 2013年11月18日, 上午10:29
 * File         : Platform.hpp
 * Author       : GNUnix <Kingbug2010@gmail.com>
 * Description  :
 * 
 * <Change_list>
 */

#ifndef PLATFORM_HPP
#define	PLATFORM_HPP

#if defined (linux) || defined(__linux) || defined(__linux__) || defined(__TOS_LINUX__)
#define Platform_Linux
#elif defined(_WIN32) || defined(_WIN64)
#define Platform_Windows
#endif

#endif	/* PLATFORM_HPP */

