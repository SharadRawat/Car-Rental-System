#include <memory>
#include "Iuser_client.h"

#ifndef USER_USER_CLIENT_H

class UserClient : public IUserClient
{

public:
    UserClient();
    UserClient(std::uint32_t client_number, rentalmanager::Car chosen_car, bool pending_order, std::unique_ptr<rentalmanager::Car> car);
    ~UserClient() = default;

    bool AnyPendingOrder() override;
    rentalmanager::Car GetPendingOrder() const override;
    std::vector<rentalmanager::Car> RequestCarOptions() const override;
    rentalmanager::Car ChooseACar(const std::string &chosen_car) override;
    void BookACar(rentalmanager::Car &chosen_car) override;
    void ReturnCar() override;

private:
    std::uint32_t client_number_{};
    rentalmanager::Car chosen_car_{};
    bool pending_order_{false};
    std::unique_ptr<rentalmanager::Car> car_;
};

#endif // USER_USER_CLIENT_H