#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
using namespace std;

class animal
{
public:
    animal();
    virtual void callOut();
    virtual ~animal();
};

#endif // ANIMAL_H
