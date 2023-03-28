#ifndef DRINK_H
#define DRINK_H

#include <string>

class Drink
{
protected:
    bool isHot = false;

public:
    std::string getTemp();
    virtual std::string getName() = 0;
};

#endif