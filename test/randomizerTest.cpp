#include "gtest/gtest.h"
#include "../lib/Randomizer.h"
#include "../lib/Weather.h"
#include <string>

TEST(RandomTest, constructorWorks)
{
    Weather *weather1 = new Weather();
    Randomizer *random1 = new Randomizer(weather1, 10, 2);
    EXPECT_EQ(random1->getAge(), 10);
    EXPECT_EQ(random1->getuserChoiceDrink(), 2);
    EXPECT_EQ(random1->getCurrWeather(), 2);
}
TEST(RandomTest, getDrink)
{
    Weather *weather2 = new Weather();
    Randomizer *generator1 = new Randomizer(weather2,10,2);
    std::string one = generator1->getRandomDrink();
    EXPECT_GT(one.size(), 0);

}

