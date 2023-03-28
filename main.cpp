#include <iostream>
#include <string>
#include <vector>
#include "lib/User.h"
#include "lib/Weather.h"
#include "lib/Randomizer.h"

using namespace std;

int main()
{
    string getName = "";
    User *user;
    Weather *weather;
    while (true)
    {
        cout << "Hi, welcome to Starbucks Sample!" << endl;
        cout << "Would you like to tell us your name and age? \n(y: yes, I'd love to; n: no, next time): ";
        cin >> getName;

        if (getName == "y")
        {
            string name;
            int age;
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;

            user = new User(name, age);

            cout << "Nice to meet you, " << user->getName() << "!" << endl;
        }

        else if (getName == "n")
        {
            user = new User();
        }

        weather = new Weather(2);
        int currentWeather = -1;
        cout << "\nWhat is the weather like now?" << endl;
        weather->getWeatherTypes();
        cout << "Enter the corresponding number: ";
        cin >> currentWeather;
        weather->setCurrentWeather(currentWeather);

        cout << endl;
        if (weather->getCurrentWeather() == "Hot")
        {
            cout << "Oof, it's hot! Let's get you something refreshing!" << endl;
        }

        if (weather->getCurrentWeather() == "Cold")
        {
            cout << "Oof, it's cold! Let's get you something to warm up!" << endl;
        }

        int userChoice = 1;

        if (user->getAge() > 10)
        {
            cout << "Would you like a caffeinated (0), noncaffeinated (1), or any (2) drink? Type in the corresponding number." << endl;
            cin >> userChoice;
        }
    
        cout << "How about: " << endl;
        Randomizer *randomizer = new Randomizer(weather, user->getAge(), userChoice);
        cout << randomizer->getRandomDrink() << endl;
        delete randomizer;
        break;
    }
    delete weather;
    delete user;
}