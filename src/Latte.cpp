#include "../lib/Latte.h"
#include <string>

Latte::Latte(bool isItHot, int numOfEspressoShots)
{
    isHot = isItHot;
    numEspressoShots = numOfEspressoShots;
}

std::string Latte::getName()
{
    return getTemp() + " Latte with a " + getNumberEspresso() + " espresso shot.";
}
