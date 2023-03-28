#include "../lib/CoffeeSyrup.h"
#include "../lib/Drink.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include "gtest/gtest.h"

TEST(CSyrupNameTest, CSyrupTest){
	CoffeeSyrup coffeeSyrup;
	EXPECT_EQ(coffeeSyrup.getName(), "Coffee syrup");
}

TEST(CSyrupNameTest, CSyrupTest1){

}