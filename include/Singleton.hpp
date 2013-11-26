//-*- C++ header -*-
/** 
 * Created time : 2013年11月19日, 上午11:07
 * File         : Singleton.hpp
 * Author       : GNUnix <Kingbug2010@gmail.com>
 * Description  :
 * 
 * <Change_list>
 */

#ifndef SINGLETON_HPP
#define	SINGLETON_HPP

#include "ServerCore.hpp"

template <typename T>
class ServerCore_API Singleton
{
public:

    Singleton(void)
    {
        m_Singleton = static_cast<T*>(this);
    }

    ~Singleton(void)
    {
        delete m_Singleton;
        m_Singleton = nullptr;
    }

    static T *getSingletonPtr()
    {
        if ( nullptr == m_Singleton )
        {
            T *single = m_Singleton;
            if ( nullptr == single )
            {
                m_Singleton = new T;
            }
        }

        return m_Singleton;
    }

    static T &getSingleton()
    {
        return *m_Singleton;
    }

protected:
    static T *m_Singleton;

private:

    Singleton& operator=(const Singleton&)
    {
        return this;
    }

    Singleton(const Singleton&) { }
};

#endif	/* SINGLETON_HPP */

