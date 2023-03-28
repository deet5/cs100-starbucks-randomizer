#include "../lib/Espresso.h"
#include <string>

Espresso::Espresso(int numOfEspressoShots)
{
    numEspressoShots = numOfEspressoShots;
}

std::string Espresso::getName()
{
    return "A " + getNumberEspresso() + " shot Espresso.";
}