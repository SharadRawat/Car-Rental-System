#include <memory>
#include "Iuser_client.h"

#ifndef USER_USER_CLIENT_H

class UserClient : public IUserClient
{

public:
    UserClient();
    ~UserClient();

    bool AnyPendingOrder() override;
    rentalmanager::Car GetPendingOrder() override;
    std::array<rentalmanager::Car, rentalmanager::kMaxNumOfCars> RequestCarOptions() override;
    rentalmanager::Car ChooseACar(const std::string &chosen_car) override;
    void Book() override;

private:
    std::uint32_t client_number_{};
    rentalmanager::Car chosen_car_{};
    bool pending_order_{false};
    std::unique_ptr<rentalmanager::Car> car_;
};

#endif // USER_USER_CLIENT_H