
#include "../include/ClientFactory.hpp"

ClientFactory::ClientFactory():
m_nClientCount(100)
{

}

ClientFactory::~ClientFactory()
{

}

int ClientFactory::getClientCount()
{
    return m_nClientCount;
}