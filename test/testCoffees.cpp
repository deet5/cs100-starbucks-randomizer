#include "gtest/gtest.h"
#include "../lib/Coffee.h"
#include "../lib/Drink.h"

TEST(AmericanoConstructorTest, Atest3)
{
    Americano americano3(false, 2);
    ASSERT_EQ(americano3.getNumberEspresso(), "double");
}

TEST(LatteTest, ConstructorTest2){
       	Latte latte2(false, 1);
	EXPECT_EQ(latte2.getNumberEspresso(), "single");
}

TEST(EspressoConstructorTest, Etest3)
{
    Espresso espresso3(3);
    ASSERT_EQ(espresso3.getNumberEspresso(), "double");
}
