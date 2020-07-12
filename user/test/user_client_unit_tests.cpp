#include "user/include/user_client.h"
#include <gtest/gtest.h>

TEST(AnyPendingOrder, GivenNoPendingOrder_ExpectNoPendingOrder)
{
    // Given
    UserClient unit{};

    // When
    auto const result = unit.AnyPendingOrder();

    // Then
    EXPECT_FALSE(result);
}

TEST(AnyPendingOrder, GivenAPendingOrder_ExpectNoPendingOrder)
{
    // Given
    UserClient unit{0, rentalmanager::Car{}, true, nullptr};

    // When
    auto const result = unit.AnyPendingOrder();

    // Then
    EXPECT_TRUE(result);
}