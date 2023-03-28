#include "gtest/gtest.h"
#include "../lib/Espresso.h"
#include "../lib/Coffee.h"
#include "../lib/Drink.h"
#include "../lib/Latte.h"
#include <string>


TEST(LatteTest, ConstructorTest1){ 
        Latte latte(true,2);
        EXPECT_EQ(latte.getNumberEspresso(), "double");
}

TEST(LatteTest, ConstructorTest2){
       	Latte latte2(false, 1);
	EXPECT_EQ(latte2.getNumberEspresso(), "single");
}

TEST(LatteTest, ConstructorTest3){
        Latte latte3(true, 3);
        EXPECT_EQ(latte3.getNumberEspresso(), "double");
}

TEST(LatteTest, NameTest1){
        Latte hotLatte1(false, 2);
        Latte coldLatte1(true, 1);
        
        EXPECT_EQ(hotLatte1.getName(), "Iced Latte with a double espresso shot.");
        EXPECT_EQ(coldLatte1.getName(), "Hot Latte with a single espresso shot.");
}

TEST(LatteTest, NameTest2){
        Latte coldLatte2(true, 3);
        Latte hotLatte2(false, 1);

        ASSERT_EQ(hotLatte2.getName(), "Iced Latte with a single espresso shot.");
        ASSERT_EQ(coldLatte2.getName(), "Hot Latte with a double espresso shot.");
}

