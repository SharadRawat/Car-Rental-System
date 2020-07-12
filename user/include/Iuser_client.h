#include <iostream>
#include <array>
#include "rental_manager/include/car.h"

#ifndef USER_IUSER_CLIENT_H

class IUserClient
{

public:
    virtual bool AnyPendingOrder() = 0;
    virtual rentalmanager::Car GetPendingOrder() const = 0;
    virtual std::vector<rentalmanager::Car> RequestCarOptions() const = 0;
    virtual rentalmanager::Car ChooseACar(const std::string &chosen_car) = 0;
    virtual void BookACar(rentalmanager::Car &chosen_car) = 0;
    virtual void ReturnCar() = 0;
};

#endif // USER_IUSER_CLIENT_H