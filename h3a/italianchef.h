#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <string>
using namespace std;

class italianChef : public chef
{
public:
    italianChef(string name);
    string getname();
    void makePasta();
    ~italianChef();
};

#endif // ITALIANCHEF_H
