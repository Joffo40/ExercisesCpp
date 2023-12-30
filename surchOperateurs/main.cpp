#include <iostream>
#include "Duree.hpp"
using namespace std;


int main()
{
    Duree duree1(0, 10, 20), duree2(0, 15, 2);
    if(duree1==duree2)
    {

        cout<<"Les deux durées sont egales"<<endl;

    }
    else
    {

        cout<<"Les deux durées sont inégales"<<endl;

    }
    return 0;
}
