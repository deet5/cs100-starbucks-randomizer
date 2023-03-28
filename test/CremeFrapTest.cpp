#include "gtest/gtest.h"
#include "../lib/CremeFrappuccino.h"
#include "../lib/Drink.h"
#include <string>

TEST(FrapGetNameTest, CFtest1)
{
    CremeFrappuccino frap1;
    EXPECT_EQ(frap1.getName(), "Crème Frappuccino");
}

TEST(FrapGetNameTest, CFtest2)
{
    CremeFrappuccino frap2;
    std::string getName = frap2.getName();
    char *name = new char[getName.length() + 1];
    strcpy(name, getName.c_str());
    char ref[] = "Creme Frappuccino";
    EXPECT_STRNE(ref, name);
}

TEST(FrapGetNameTest, CFtest3)
{
    CremeFrappuccino frap3;
    std::string getName = frap3.getName();
    char *name = new char[getName.length() + 1];
    strcpy(name, getName.c_str());
    char ref[] = "crème frappuccino";
    EXPECT_STRCASEEQ(ref, name);
}
