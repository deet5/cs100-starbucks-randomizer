#ifndef CHAITEA_H
#define CHAITEA_H

#include "../lib/Drink.h"
#include <string>

class ChaiTea : public Drink
{
public:
    ChaiTea(bool setHot);
    std::string getName() override;
};

#endif
