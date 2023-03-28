#ifndef LISTGENERATOR_H
#define LISTGENERATOR_H

#include <string>
#include <vector>

class ListGenerator
{
public:
    virtual void generateList(std::vector<std::string> *drinkList, bool *isHot) = 0;
};
#endif