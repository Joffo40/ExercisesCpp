#include <iostream>
#include "figure.h"

using namespace std;

// #include "triangle2.h"

/*Triangle::Triangle(double base, double hauteur)
{
    this->m_base=base;
    this->m_hauteur=hauteur;
}*/
void Figure::afficher()
{
cout << "Cette entité est une figure" << endl;

}

double Triangle::aire() const
{
    double aire;
    aire = m_base * m_hauteur /2;

    return aire;

}
void Triangle::afficher()
{
cout << "Cette entité est un triangle" << endl;

}
Triangle::~Triangle()
{
    //dtor
}
