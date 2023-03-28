#ifndef COFFEE_H
#define COFFEE_H

#include <string>
#include "Drink.h"

class Coffee : public Drink
{
protected:
    int numEspressoShots;

public:
    Coffee();
    std::string getNumberEspresso();
};
#endif
