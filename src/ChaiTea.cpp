#include "../lib/ChaiTea.h"
#include <string>

ChaiTea::ChaiTea(bool setHot)
{
    isHot = setHot;
}

std::string ChaiTea::getName()
{
    return this->getTemp() + " " + "Chai Tea";
}
