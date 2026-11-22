#ifndef CHEF_H
#define CHEF_H
#include <string>
using namespace std;

class chef
{
public:
    chef(string name);
    void makeSalad();
    void makeSoup();
    ~chef();

protected:
    string name;
};
#endif // CHEF_H
