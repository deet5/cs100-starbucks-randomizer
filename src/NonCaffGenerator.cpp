#include "../lib/NonCaffGenerator.h"
#include "../lib/CremeFrappuccino.h"
#include "../lib/CremeFrappuccinoFlavor.h"
#include "../lib/Refresher.h"
#include "../lib/RefresherFlavor.h"
#include "../lib/HotChocolate.h"

#include <vector>
#include <string>
#include <iostream>

using namespace std;

void NonCaffGenerator::generateList(vector<string> *drinkList, bool *isHot)
{
    CremeFrappuccino *cremeFrap = new CremeFrappuccino();
    CremeFrappuccinoFlavor *frapFlavor = new CremeFrappuccinoFlavor(cremeFrap);
    drinkList->push_back(frapFlavor->getName());
    delete cremeFrap;
    delete frapFlavor;
    
    Refresher *refresh = new Refresher();
    RefresherFlavor *refresherFlavor = new RefresherFlavor(refresh);
    drinkList->push_back(refresherFlavor->getName());
    delete refresh;
    delete refresherFlavor;
    
    HotChocolate *hotChocolate = new HotChocolate();
    drinkList->push_back(hotChocolate->getName());
    delete hotChocolate;
}
