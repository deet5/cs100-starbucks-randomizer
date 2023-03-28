#include "gtest/gtest.h"
#include "../lib/Weather.h"

TEST(WeatherTests, weatherConstructorDefault) // tests whether default constructor works
{
    Weather *weather1 = new Weather();
    EXPECT_EQ(weather1->getCurrentWeather(), "Any");
}

TEST(WeatherTests, weatherConstructorParameterized1) // tests parameterized constructor
{
    Weather *weather2 = new Weather(1);
    EXPECT_EQ(weather2->getCurrentWeather(), "Cold");
}

TEST(WeatherTests, weatherConstructorParameterized2) // tests parameterized constructor
{
    Weather *weather3 = new Weather(0);
    EXPECT_EQ(weather3->getCurrentWeather(), "Hot");
}

TEST(WeatherTests, weatherConstructorParameterize3) // tests parameterized constructor
{
    Weather *weather4 = new Weather(2);
    EXPECT_EQ(weather4->getCurrentWeather(), "Any");
}
