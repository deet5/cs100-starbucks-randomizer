#include "gtest/gtest.h"
#include "../lib/Americano.h"
#include "../lib/Coffee.h"
#include "../lib/Drink.h"
#include <string>

//testing the constructor, getTemp()

TEST(AmericanoConstructorTest, ATest1){
	Americano americano1(true, 3);
	EXPECT_EQ(americano1.getTemp(), "Hot");
}

TEST(AmericanoConstructorTest, ATest2){
	Americano americano2(false, 4);
	EXPECT_EQ(americano2.getTemp(), "Iced");
}

TEST(AmericanoConstructorTest, Atest3)
{
    Americano americano3(false, 2);
    ASSERT_EQ(americano3.getNumberEspresso(), "double");
    ASSERT_EQ(americano3.getTemp(), "Iced");
}

// testing the getName() function


TEST(AmericanoGetNameTest, Atest4)
{
    Americano americano4(true, 1);
    EXPECT_EQ(americano4.getName(), "Hot Americano with a single espresso shot.");
}

TEST(AmericanoGetNameTest, Atest5){
    Americano americano5(false, 3);
    EXPECT_EQ(americano5.getName(), "Iced Americano with a double espresso shot.");
}

TEST(AmericanoGetNameTest, Atest6){
    Americano americano5(true, 5);
    ASSERT_EQ(americano5.getName(), "Hot Americano with a double espresso shot.");
}

