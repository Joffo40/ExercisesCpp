#include <iostream>
#include "figure.h"

using namespace std;

void Figure::affiche()
{
    cout << "Ceci est une figure" << endl;
}

Triangle::~Triangle()
{
    //dtor
}

Triangle::Triangle(double base, double hauteur)
{
    this->m_Base=base;
    this->m_Hauteur=hauteur;

}

void Triangle::affiche()
{

cout << "Cette figure est un triangle" << endl;

}

double Triangle::aire()
{
    double aire = 0;
    aire = m_Base * m_Hauteur;
    return aire;
}
