//-*- C++ header -*-
/**
 * Created time : 2013年11月18日, 上午11:09
 * File         : Server.hpp
 * Author       : GNUnix <Kingbug2010@gmail.com>
 * Description  :
 *
 * <Change_list>
 */

#ifndef SERVER_HPP
#define	SERVER_HPP

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
    class ServerImp;

    class Server
    {
    public:
        Server(void);
        ~Server(void);

    private:
        ServerImp *m_pSrvImp;
    };
}

#endif	/* SERVER_HPP */

