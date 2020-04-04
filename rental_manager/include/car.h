#include <string>
#include <vector>

#ifndef RENTAL_MANAGER_CAR_H

namespace rentalmanager
{

class Car
{
private:
    // For the model of the car
    std::string car_model_{};
    // availibility duration
    std::uint32_t availability_duration_{};
    // booked duration
    std::uint32_t booked_duration_{};
    // cost of the car per day
    std::uint32_t per_day_cost{};
    // current mileage
    double mileage_{};
    // Whether the car is booked or not
    bool car_is_booked_{false};
    // Vector to store all the available cars with their information
    static std::vector<rentalmanager::Car> car_list_;

public:
    Car(/* args */);
    ~Car();
    std::vector<rentalmanager::Car> GetListOfCars() { return car_list_; }
    void SetACarToCarList(const rentalmanager::Car &car) { car_list_.emplace_back(car); }
};

// Maximum number of cars available
const std::uint32_t kMaxNumOfCars{10};

} // namespace rentalmanager

#endif // RENTAL_MANAGER_CAR_H