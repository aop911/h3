#include <iostream>
#include <string>
using namespace std;
#include "animal.h"

animal::animal(){
    cout<<"elain rakentuu"<<endl;
}

void animal::callOut() {
    cout<<"elain aatelee"<<endl;
}
animal::~animal(){
    cout<<"elain tuhoutuu"<<endl;
}
