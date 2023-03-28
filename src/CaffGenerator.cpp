#include "../lib/CaffGenerator.h"
#include "../lib/Americano.h"
#include "../lib/ChaiTea.h"
#include "../lib/CoffeeSyrup.h"
#include "../lib/Espresso.h"
#include "../lib/Latte.h"

#include <vector>
#include <string>
#include <iostream>

using namespace std;

void CaffGenerator::generateList(vector<string> *drinkList, bool *isHot)
{
    Americano *americano = new Americano(*isHot, 1);
    CoffeeSyrup *amSyrup = new CoffeeSyrup(americano);
    drinkList->push_back(amSyrup->getName());
    delete americano;
    delete amSyrup;

    Latte *latte = new Latte(*isHot, 1);
    CoffeeSyrup *latteSyrup = new CoffeeSyrup(latte);
    drinkList->push_back(latteSyrup->getName());
    delete latte;
    delete latteSyrup;

    ChaiTea *chaiTea = new ChaiTea(*isHot);
    drinkList->push_back(chaiTea->getName());
    delete chaiTea;

    Espresso *espresso = new Espresso(1); //espresso shots (1)
    drinkList->push_back(espresso->getName());
    delete espresso;
}
