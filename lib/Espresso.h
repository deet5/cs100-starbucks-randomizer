#ifndef ESPRESSO_H
#define ESPRESSO_H

#include <string>
#include "Coffee.h"

class Espresso : public Coffee

{
public:
    Espresso(int numEspressoShots);
    std::string getName();
};

#endif