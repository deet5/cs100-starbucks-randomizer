#include "../lib/CoffeeSyrup.h"
#include "../lib/Drink.h"
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

CoffeeSyrup::CoffeeSyrup(Drink *currentDrink)
{
    drink = currentDrink;
}

string CoffeeSyrup::getName()
{
    srand(time(0));
    int randIndex = rand() % syrups.size();
    return drink->getName() + "\n" + "Syrup: " + syrups.at(randIndex);
}