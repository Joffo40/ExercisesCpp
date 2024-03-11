#include <iostream>
#include "figure.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Triangle2 objTrianglr(20.0,89.1);
    Triangle2 *ptriangle = new Triangle2(10.0,67.0);

    //Figure *ptriangle();
    //ptriangle = new Triangle(39,78);





    delete ptriangle;


    return 0;
}
