#include <iostream>
#include <array>
#include "rental_manager/include/car.h"

#ifndef USER_IUSER_CLIENT_H

class IUserClient
{

public:
    virtual ~IUserClient();
    virtual bool AnyPendingOrder();
    virtual rentalmanager::Car GetPendingOrder();
    virtual std::array<rentalmanager::Car, rentalmanager::kMaxNumOfCars> RequestCarOptions();
    virtual void Book();
};

#endif // USER_IUSER_CLIENT_H