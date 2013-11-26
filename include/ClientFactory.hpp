//-*- C++ header -*-
/**
 * Created time : 2013年11月19日, 上午9:23
 * File         : ClientFactory.hpp
 * Author       : GNUnix <Kingbug2010@gmail.com>
 * Description  :
 *
 * <Change_list>
 */

#ifndef CLIENTFACTORY_HPP
#define	CLIENTFACTORY_HPP

#include "Server.hpp"

class ServerCore_API ClientFactory
{
public:
    ClientFactory(void);
    virtual ~ClientFactory(void);

    int getClientCount();

private:
    int m_nClientCount;
};

#endif	/* CLIENTFACTORY_HPP */

