#include "user/include/user_client.h"
#include <algorithm>

UserClient::UserClient() {}

UserClient::UserClient(std::uint32_t client_number, rentalmanager::Car chosen_car, bool pending_order, std::unique_ptr<rentalmanager::Car> car) : client_number_(client_number), chosen_car_(chosen_car), pending_order_(pending_order), car_(std::move(car)) {}

bool UserClient::AnyPendingOrder() { return pending_order_; }

rentalmanager::Car UserClient::GetPendingOrder() const
{
    if (pending_order_)
    {
        return chosen_car_;
    }
    return chosen_car_;
}

std::vector<rentalmanager::Car> UserClient::RequestCarOptions() const
{
    for (auto &car : rentalmanager::car_list)
    {
        std::cout << "Model: " << car.GetCarModel() << "Duration: " << car.GetCarAvailabilityDuration() << "Per Day Cost:" << car.GetPerDayCost() << std::endl;
    }
    return rentalmanager::car_list;
}

rentalmanager::Car UserClient::ChooseACar(const std::string &chosen_car_model)
{
    std::vector<rentalmanager::Car> car_list = rentalmanager::car_list;
    auto car_iterator = std::find_if(std::begin(car_list), std::end(car_list), [&chosen_car_model](const rentalmanager::Car &car) { return car.GetCarModel() == chosen_car_model; });

    return *car_iterator;
};

void UserClient::BookACar(rentalmanager::Car &chosen_car)
{
    if (pending_order_)
    {
        std::cout << "An Order is pending, hence can't book a new car. Please return the previous car to book a new one." << std::endl;
    }
    pending_order_ = true;
    chosen_car.SetCarIsBooked(true);
    chosen_car_ = chosen_car;
};

void UserClient::ReturnCar()
{
    if (pending_order_)
    {
        pending_order_ = false;
    }
    chosen_car_.SetCarIsBooked(false);
}
