#ifndef REFRESHER_H
#define REFRESHER_H

#include "Drink.h"
#include <string>

class Refresher : public Drink
{
public:
    Refresher();
    std::string getName();
};

#endif