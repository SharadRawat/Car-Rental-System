#include "user/include/user_client.h"
#include <algorithm>

bool UserClient::AnyPendingOrder() { return pending_order_; }

rentalmanager::Car UserClient::GetPendingOrder() const
{
    if (pending_order_)
    {
        return chosen_car_;
    }
}

std::array<rentalmanager::Car, rentalmanager::kMaxNumOfCars> UserClient::RequestCarOptions() const {};

rentalmanager::Car UserClient::ChooseACar(const std::string &chosen_car)
{
    // TODO
    std::vector<rentalmanager::Car> car_list = car_->GetListOfCars();
    auto car_iterator = std::find_if(std::begin(car_list), std::end(car_list), [&chosen_car](const rentalmanager::Car &car) { return car.GetCarModel() == chosen_car; });

    return *car_iterator;
};

void UserClient::BookACar()
{
    // TODO
    pending_order_ = true;
};