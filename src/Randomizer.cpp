#include "../lib/Randomizer.h"
#include "../lib/Weather.h"
#include "../lib/CaffGenerator.h"
#include "../lib/NonCaffGenerator.h"
#include "../lib/NonCafAndCaf.h"
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

// need to create a way to differentiate NonCaff from Caff. We can do this by creating an if statement that takes in the user's age as an object
// and if it is under say like the age of 10, the program would use the Non-Caffeinated generator, and if over that age, it uses the CaffGenerator.

using namespace std;

Randomizer::Randomizer(Weather *currentWeather, int theUserAge, int UserChoiceDrink)
{
    weather = currentWeather;
    age = theUserAge;
    choiceDrink = UserChoiceDrink;
}
int Randomizer::getAge()
{
    return age;
}
int Randomizer::getuserChoiceDrink()
{
    return choiceDrink;
}
int Randomizer::getCurrWeather()
{
    return weather->getCurrentPos();
}
string Randomizer::getRandomDrink()
{
    vector<string> drinkList = {};                               // creating an empty drink list. this is the final list which will be picked from to get the drink for the user!
    CaffGenerator *caffGenerator = new CaffGenerator();          // creating a caff generator object! this is for the caffeinated drinks
    NonCaffGenerator *nonCaffGenerator = new NonCaffGenerator(); // creating a nonCaf generator object! this is for the noncaffeinated drinks
    NonCafAndCaf *nonCafAndCafGen = new NonCafAndCaf();          // creating a caf AND noncaf generator object! this is for all drinks

    bool isHot = false; // default bool isHot is false

    switch (weather->getCurrentPos())
    {
    case 0:
        isHot = false; // if the weather is hot, the drink is cold
        break;
    case 1:
        isHot = true; // if the weather is cold, the drink is hot
        break;
    default:
        isHot = false; // any drink is cool! (pun 100% intended)
    }

    if (age <= 10) // fix this!
    {
        nonCaffGenerator->generateList(&drinkList, &isHot); // generate list of creme frappuccino, refresher, and hot chocolate
                                                            // deleting the noncaf generator
    }
    else
    {
        if (choiceDrink == 0)
        {
            caffGenerator->generateList(&drinkList, &isHot); // generate list of americano, latte, chaiTea, and espresso
                                                             // delete the caff generator object (cuz you gotta deallocate memory)
        }
        else if (choiceDrink == 1)
        {
            nonCaffGenerator->generateList(&drinkList, &isHot); // generate list of creme frappuccino, refresher, and hot chocolate
                                                                // deleting the noncaf generator
        }
        else if (choiceDrink == 2)
        {
            nonCafAndCafGen->generateList(&drinkList, &isHot); // generate list of all drinks!
                                                               // deleting the all drinks generator
        }
    }

    delete caffGenerator;
    delete nonCafAndCafGen;
    delete nonCaffGenerator;

    srand(time(0));                            // seed for random
    int randIndex = rand() % drinkList.size(); // generate a random index from the drinkList vector
    return drinkList.at(randIndex);

    /* vector<string> drinkList = {};
    NonCaffGenerator *noncaffGenerator = new NonCaffGenerator();
    bool isHot = false;
    switch (weather->getCurrentPos())
    {
    case 0:
        isHot = false;
        break;
    case 1:
        isHot = true;
        break;
    default:
        isHot = false;
    }
    noncaffGenerator->generateList(&drinkList, &isHot);
    srand(time(0));
    int randIndex = rand() % drinkList.size();

    delete noncaffGenerator;
    return drinkList.at(randIndex); */
}
