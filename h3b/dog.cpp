#include "dog.h"
#include <iostream>
#include <string>
using namespace std;

dog::dog(){
    cout<<"koira rakennetaan"<<endl;
}

void dog::callOut(){
    cout<<"koira haukkuu"<<endl;
}

dog::~dog() {
    cout<<"koira tuhoutuu"<<endl;
}
