#ifndef HOTCHOCOLATE_H
#define HOTCHOCOLATE_H
#include "Drink.h"
#include <string>

class HotChocolate : public Drink
{
public:
    std::string getName() override;
};

#endif