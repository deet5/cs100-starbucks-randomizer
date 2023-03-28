#ifndef CREMEFRAPPUCCINOFLAVOR_H
#define CREMEFRAPPUCCINOFLAVOR_H
#include <string>
#include <vector>
#include "Drink.h"
using namespace std;

class CremeFrappuccinoFlavor : public Drink
{
private:
    Drink *drink;
    vector<string> CremeFrappuccinoFlavors = {
        "Pistachio", "Peppermint Mocha", "Peppermint White Chocolate",
        "Caramel Brulée", "Chestnut Praline", "Sugar Cookie Almondmilk",
        "Toasted White Chocolate", "Chocolate Cookie Crumble",
        "Caramel Ribbon Crunch", "Strawberry", "Chai",
        "Double Chocolaty Chip", "Matcha", "Vanilla Bean",
        "White Chocolate"};

public:
    CremeFrappuccinoFlavor(Drink *currentDrink);
    string getName() override;
};

#endif