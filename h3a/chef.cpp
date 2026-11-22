#include "chef.h"
#include <string>
using namespace std;
#include <iostream>
chef::chef(string name)
{
    this->name = name;
    cout<<" chef "<<name<<" konstruktori "<<endl;
}

chef::~chef(){
    cout<<" chef " <<name<<" destruktori "<< endl;
}


void chef::makeSalad(){
    cout<< " chef "<<name << " makes salad "<<endl;
}

void chef::makeSoup(){
    cout<<" chef "<<name<<" makes soup "<<endl;
}


