#include "../lib/Drink.h"
#include "../lib/Latte.h"
#include <string>
#include <gtest/gtest.h>

TEST(TestDrink, Drink1){
    Latte latte1(true,3);
    EXPECT_EQ(latte1.getTemp(),"Hot");

}

TEST(TestDrink, Drink2){
    Latte latte2(false,2);
    EXPECT_EQ(latte2.getTemp(),"Iced");

}