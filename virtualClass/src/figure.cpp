#include "figure.h"
#include <iostream>

using namespace std;

Figure::Figure()
{
    //ctor
    //m_base = base;
    //m_hauteur = hauteur;

}

Figure::~Figure()
{
    //dtor
}
void Figure::afficher()
{
cout<<"Je suis une figure"<<endl;
}
Triangle::Triangle(double base, double hauteur)
{
    //ctor
    this->m_base = base;
    this->m_hauteur = hauteur;

}
void Triangle::afficher()
{
cout<<"Je suis un triangle"<<endl;
}
double Triangle::aire() const
{
    double aire;
    aire = m_base * m_hauteur /2;

    return aire;

}
void Carree::afficher()
{
cout<<"Je suis un Carree"<<endl;
}
double Carree::aire() const
{
    double aire;
    aire = m_cote * m_cote;

    return aire;
}
void Rectangle::afficher()
{
cout<<"Je suis un Rectangle"<<endl;
}
double Rectangle::aire() const
{
    double aire;
    aire = m_cote1 * m_cote2;

    return aire;
}
void Cercle::afficher()
{
cout<<"Je suis un Cercle"<<endl;
}
double Cercle::aire() const
{
    const double Pi = 3.141592;
    double aire;
    aire = Pi * m_rayon * m_rayon;

    return aire;

}
