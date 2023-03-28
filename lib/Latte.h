#ifndef LATTE_H
#define LATTE_H

#include <string>
#include "Coffee.h"

class Latte : public Coffee
{

public:
    Latte(bool isHot, int numEspressoShots);
    std::string getName();
};


#endif