#include "../lib/Weather.h"
#include <string>
#include <iostream>
using namespace std;

Weather::Weather() // is default, so we always assume the default weather is any
{
    currentWeather = 2;
}
Weather::Weather(int userPos) // constructor for the user input, instead of it always being 2
{
    currentWeather = userPos;
}
void Weather::getWeatherTypes() // prints out options for weather
{
    int i = 0;
    for (; i < weatherTypes.size() - 1; i++)
    {
        cout << i << ": " << weatherTypes.at(i) << ", ";
    }

    cout << i << ": " << weatherTypes.at(i) << endl;
}

void Weather::setCurrentWeather(int currentPosition)
{
    currentWeather = currentPosition;
}

string Weather::getCurrentWeather()
{
    return weatherTypes.at(currentWeather);
}

int Weather::getCurrentPos()
{
    return currentWeather;
}