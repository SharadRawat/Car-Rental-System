#include "user/include/user_client.h"

bool UserClient::AnyPendingOrder() { return pending_order_; }

rentalmanager::Car UserClient::GetPendingOrder()
{
    if (pending_order_)
    {
        return chosen_car_;
    }
}

std::array<rentalmanager::Car, rentalmanager::kMaxNumOfCars> UserClient::RequestCarOptions(){};
void UserClient::Book(){};