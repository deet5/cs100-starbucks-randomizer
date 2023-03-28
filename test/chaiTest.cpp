#include "gtest/gtest.h"
#include "../lib/ChaiTea.h"
#include "../lib/Drink.h"
#include <string>

TEST(ChaiConstructorTest, CTtest2)
{
    ChaiTea chai2(true);
    EXPECT_EQ(chai2.getTemp(), "Hot");
}

TEST(ChaiConstructorTest, CTtest3)
{
    ChaiTea chai3(false);
    EXPECT_EQ(chai3.getTemp(), "Iced");
}

TEST(ChaiGetNameTest, CTtest4)
{
    ChaiTea chai4(true);
    EXPECT_EQ(chai4.getName(), "Hot Chai Tea");
}

TEST(ChaiGetNameTest, CTtest5)
{
    ChaiTea chai5(false);
    EXPECT_EQ(chai5.getName(), "Iced Chai Tea");
}
