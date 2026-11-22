#include <iostream>
#include <string>
#include "italianchef.h"
#include "chef.h"
using namespace std;
#include <string>

int main()
{
    chef chef(" Gordon Ramsy ");
    chef.makeSalad();
    chef.makeSoup();

    italianChef italianChef(" antohony burdain ");

    italianChef.makePasta();
    italianChef.makeSoup();
    italianChef.makeSalad();

    cout<<" name of the italianchef is "<<italianChef.getname()<<endl;
}
