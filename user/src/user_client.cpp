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

rentalmanager::Car UserClient::ChooseACar(const std::string &chosen_car)
{
    // TODO
    std::vector<rentalmanager::Car> car_list = car_->GetListOfCars();
};

void UserClient::Book()
{
    // TODO
    pending_order_ = true;
};