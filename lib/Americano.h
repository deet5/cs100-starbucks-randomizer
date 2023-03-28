#ifndef AMERICANO_H
#define AMERICANO_H

#include <string>
#include "Coffee.h"

class Americano : public Coffee
{
public:
    Americano(bool isHot, int numEspressoShots);
    std::string getName();
};
#endif