#ifndef CREMEFRAPPUCCINO_H
#define CREMEFRAPPUCCINO_H

#include "../lib/Drink.h"
#include <string>

class CremeFrappuccino : public Drink
{
public:
    CremeFrappuccino();
    std::string getName() override;
};

#endif