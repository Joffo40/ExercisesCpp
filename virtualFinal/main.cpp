#include <iostream>
#include "figure.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Triangle objTrianglr(20.0,89.1);
    Triangle *ptriangle = new Triangle(10.0,67.0);
    Carree *pcarree = new Carree(10);
    Disque *pdisque = new Disque(10);

    objTrianglr.affiche();
    cout << "L'aire est de " << objTrianglr.aire() << endl;
    objTrianglr.perimetre();
    cout << endl;
    ptriangle->affiche();
    cout << "L'aire est de " << ptriangle->aire() << endl;
    ptriangle->perimetre();
    cout << endl;
    pcarree->affiche();
    cout << "L'aire est de " << pcarree->aire() << endl;
    pcarree->perimetre();
    cout << endl;
    pdisque->affiche();
    cout << "L'aire est de " << pcarree->aire() << endl;
    pdisque->perimetre();

    //Figure *ptriangle();
    //ptriangle = new Triangle(39,78);





    delete ptriangle;
    delete pcarree;
    delete pdisque;
    return 0;
}
