#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>
using namespace std;
#include "animal.h"

class dog : public animal{

public:
    dog();
    ~dog();

    void callOut() override;


};

#endif // DOG_H
