#include <iostream>
#include "Figu

using namespace std;

Triangle::Triangle(double base, double hauteur)
{
    this->m_base=base;
    this->m_hauteur=hauteur;
}


int main()
{
    cout << "Hello world!" << endl;
    Triangle objTrianglr(20.0,89.1);
    Triangle *ptriangle = new Triangle(10.0,67.0);

    //Figure *ptriangle();
    //ptriangle = new Triangle(39,78);





    delete ptriangle;


    return 0;
}
