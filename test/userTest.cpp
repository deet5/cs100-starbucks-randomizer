#include "gtest/gtest.h"
#include "../lib/User.h"

TEST(UserTest, testDefaultConstructor)
{
    User *user = new User();
    EXPECT_EQ(user->getAge(), 25);
    EXPECT_EQ(user->getName(), "AwesomeSauce");
}

TEST(UsetTest,testParameterConstructorWorking) //tests to see if the User.cpp code creates a paramterized object of a User given name and age
{
    User *user2 = new User("Sneha", 20);
    EXPECT_EQ(user2->getName(), "Sneha");
    EXPECT_EQ(user2->getAge(), 20);
}

TEST(UsetTest,testgetName) //test that the getName function returns the username
{
    User *user3 = new User("Denny", 23);
    EXPECT_EQ(user3 ->getName(), "Denny");

}
TEST(UsetTest,testgetAge) //test that the getAge function returns age
{
    User *user4 = new User("Elsa", 23);
    EXPECT_EQ(user4->getAge(), 23);
}