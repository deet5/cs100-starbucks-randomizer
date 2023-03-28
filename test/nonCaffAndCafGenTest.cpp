#include "gtest/gtest.h"
#include "../lib/Espresso.h"
#include "../lib/Coffee.h"
#include "../lib/Drink.h"
#include "../lib/NonCaffGenerator.h"
#include "../lib/NonCafAndCaf.h"
#include "../lib/CaffGenerator.h"
#include <string>

TEST(nonCaffAndCafGenTest, testVectorEqual)
{
    vector <string> empty1 = {};
    NonCafAndCaf *nc1 = new NonCafAndCaf();
    bool listAdd1 = true;
    nc1->generateList(&empty1, &listAdd1);
    EXPECT_GT(empty1.size(), 0);
}

TEST(nonCaffAndCafGenTest, testVectorEqual2){
    vector <string> empty2 = {};
    NonCafAndCaf *nc2 = new NonCafAndCaf();
    bool listAdd2 = true;
    nc2->generateList(&empty2, &listAdd2);
    EXPECT_GE(empty2.size(), 0);
}
TEST(cnonCaffAndCafGenTest, testVectorEqual3){
    vector <string> empty3 = {};
    NonCafAndCaf *nc3 = new NonCafAndCaf();
    bool listAdd3 = true;
    EXPECT_NO_THROW(nc3->generateList(&empty3, &listAdd3));
}
