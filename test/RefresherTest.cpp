#include "gtest/gtest.h"
#include "../lib/Refresher.h"
#include "../lib/Drink.h"
#include <string>

TEST(RefresherGetNameTest, Rtest1)
{
    Refresher refresher1;
    EXPECT_EQ(refresher1.getName(), "Refresher");
}

TEST(RefresherGetNameTest, Rtest2)
{
    Refresher refresher2;
    std::string getName = refresher2.getName();
    char *name = new char[getName.length() + 1];
    strcpy(name, getName.c_str());
    char ref[] = "Refreshers";
    EXPECT_STRNE(ref, name);
}

TEST(RefresherGetNameTest, Rtest3)
{
    Refresher refresher3;
    std::string getName = refresher3.getName();
    char *name = new char[getName.length() + 1];
    strcpy(name, getName.c_str());
    char ref[] = "refresher";
    EXPECT_STRCASEEQ(ref, name);
}
