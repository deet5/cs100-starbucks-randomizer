#include "../lib/Refresher.h"
#include <string>

std::string Refresher::getName()
{
    return "Refresher";
}

Refresher::Refresher()
{
    isHot = false;
}