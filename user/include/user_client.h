#include "iostream"

#ifndef USER_USER_CLIENT_H

class USERCLIENT
{

public:
    bool AnyPendingOrder();

private:
    uint32_t client_number;
};

#endif // USER_USER_CLIENT_H