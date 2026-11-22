#include "italianchef.h"
using namespace std;
#include <string>
#include <iostream>
italianChef::italianChef(string name):chef(name) {
    cout<<" italianchef "<<name<<" konstruktori "<<endl;
}

italianChef::~italianChef(){
    cout<<" italianchef "<<name<<" destruktori "<<endl;
}
string italianChef::getname(){
    return name;
}
void italianChef::makePasta(){
    cout<<" italianchef "<<name<<" makes pasta "<<endl;
}
