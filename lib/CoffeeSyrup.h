#ifndef COFFEESYRUP_H
#define COFFEESYRUP_H
#include <string>
#include <vector>
#include "Drink.h"
using namespace std;

class CoffeeSyrup : public Drink
{
private:
    Drink *drink;
    vector<string> syrups = {
        "Pistachio",
        "Peppermint Mocha",
        "Peppermint White Chocolate",
        "Caramel Brulée",
        "Chestnut Praline",
        "Sugar Cookie Almondmilk",
        "Toasted White Chocolate",
        "Chocolate Cookie Crumble",
        "Caramel Ribbon Crunch",
        "Strawberry",
        "Chai",
        "Double Chocolaty Chip",
        "Matcha",
        "Vanilla Bean",
        "White Chocolate"};

public:
    CoffeeSyrup(Drink *currentDrink);
    string getName() override;
};

#endif