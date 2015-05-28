#ifndef IPPARSER_H
#define IPPARSER_H

#include "util.h"

class IpParser
{
public:
    IpParser();
    virtual ~IpParser();

    bool IsTelcome(const char* pIp);
};

#endif // IPPARSER_H

