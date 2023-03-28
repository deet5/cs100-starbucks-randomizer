#include "../lib/RefresherFlavor.h"
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

RefresherFlavor::RefresherFlavor(Drink *currentDrink)
{
    drink = currentDrink;
}

string RefresherFlavor::getName()
{
    srand(time(0));
    int randIndex = rand() % refresherFlavors.size();
    return refresherFlavors.at(randIndex) + " " + drink->getName();
}