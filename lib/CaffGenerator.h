#ifndef CAFFGENERATOR_H
#define CAFFGENERATOR_H

#include "ListGenerator.h"
#include <vector>
#include <string>

using namespace std;

class CaffGenerator : public ListGenerator
{
public:
    void generateList(vector<string> *drinkList, bool *isHot) override;
};



#endif