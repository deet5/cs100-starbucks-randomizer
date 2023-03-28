#ifndef USER_H
#define USER_H
#include <string>

using namespace std;

class User
{
private:
    std::string userName;
    int userAge;

public:
    User(string, int);
    User();
    string getName();
    int getAge();
};

#endif