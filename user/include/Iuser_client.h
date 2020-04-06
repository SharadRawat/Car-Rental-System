#include <iostream>
#include <array>
#include "rental_manager/include/car.h"

#ifndef USER_IUSER_CLIENT_H

class IUserClient
{

public:
    virtual ~IUserClient();
    virtual bool AnyPendingOrder();
    virtual rentalmanager::Car GetPendingOrder() const;
    virtual std::vector<rentalmanager::Car> RequestCarOptions() const;
    virtual rentalmanager::Car ChooseACar(const std::string &chosen_car);
    virtual void BookACar(rentalmanager::Car &chosen_car);
    virtual void ReturnCar();
};

#endif // USER_IUSER_CLIENT_H