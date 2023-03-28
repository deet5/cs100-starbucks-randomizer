#include "../lib/User.h"
#include <string>

using namespace std;

User::User(string passName, int passAge)
{
    userName = passName;
    userAge = passAge;
}

User::User()
{
    userName = "AwesomeSauce";
    userAge = 25;
}

string User::getName()
{
    return userName;
}

int User::getAge()
{
    return userAge;
}