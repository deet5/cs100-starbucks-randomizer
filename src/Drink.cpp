#include "../lib/Drink.h"
#include <string>

std::string Drink::getTemp()
{
    if (isHot)
    {
        return "Hot";
    }
    else
        return "Iced";
}
