#include "../lib/Coffee.h"
#include <string>

Coffee::Coffee()
{
    numEspressoShots = 1;
}

std::string Coffee::getNumberEspresso()
{
    if (numEspressoShots == 1)
    {
        return "single";
    }

    else
        return "double";
}
