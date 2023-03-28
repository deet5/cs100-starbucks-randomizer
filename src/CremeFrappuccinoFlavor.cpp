#include "../lib/CremeFrappuccinoFlavor.h"
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

CremeFrappuccinoFlavor::CremeFrappuccinoFlavor(Drink *currentDrink)
{
    drink = currentDrink;
}

string CremeFrappuccinoFlavor::getName()
{
    srand(time(0));
    int randIndex = rand() % CremeFrappuccinoFlavors.size();
    return CremeFrappuccinoFlavors.at(randIndex) + " " + drink->getName();
}