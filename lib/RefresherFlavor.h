#ifndef REFRESHERFLAVOR_H
#define REFRESHERFLAVOR_H
#include <string>
#include <vector>
#include "Drink.h"
using namespace std;

class RefresherFlavor : public Drink
{
private:
    Drink *drink;
    vector<string> refresherFlavors = {
        "Dragon Drink", 
        "Mango Dragonfruit", 
        "Mango Dragonfruit Lemonade",
        "Paradise Drink", 
        "Strawbery Açaí Lemonade", 
        "Pineapple Passionfruit",
        "Pineapple Passionfruit Lemonade", 
        "Pink Drink", 
        "Strawberry Açaí"
        };

public:
    RefresherFlavor(Drink *currentDrink);
    string getName() override;
};

#endif