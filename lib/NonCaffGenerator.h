#ifndef NONCAFFGENERATOR_H
#define NONCAFFGENERATOR_H

#include "ListGenerator.h"
#include <vector>
#include <string>

using namespace std;

class NonCaffGenerator : public ListGenerator
{
public:
    void generateList(vector<string> *drinkList, bool *isHot) override;
};

#endif
