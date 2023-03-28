#include "../lib/Americano.h"
#include <string>

Americano::Americano(bool isItHot, int numOfEspressoShots)
{
    isHot = isItHot;
    Coffee::numEspressoShots = numOfEspressoShots;
}

std::string Americano::getName()
{
    return getTemp() + " Americano with a " + getNumberEspresso() + " espresso shot.";
}