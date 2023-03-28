#ifndef WEATHER_H
#define WEATHER_H
#include <string>
#include <vector>

using namespace std;

class Weather
{
private:
    vector<string> weatherTypes = {"Hot", "Cold", "Any"};
    int currentWeather;

public:
    Weather(int userPos);
    Weather();
    void getWeatherTypes();
    void setCurrentWeather(int VectorPosition);
    string getCurrentWeather();
    int getCurrentPos();
};
#endif