#ifndef NONCAFFANDCAF_H
#define NONCAFFANDCAF_H

#include "ListGenerator.h"
#include <vector>
#include <string>

using namespace std;

class NonCafAndCaf : public ListGenerator
{
public:
    void generateList(vector<string> *drinkList, bool *isHot) override;
};

#endif