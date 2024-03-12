#include <iostream>
#include "figure.h"

using namespace std;

void Figure::affiche() const
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

void Triangle::affiche()  const
{

cout << "Cette figure est un triangle" << endl;

}

double Triangle::aire()  const
{
    double aire = 0;
    aire = m_Base * m_Hauteur;
    return aire;
}
void Triangle::perimetre() const
{
cout << "Perimètre non calculable" << endl;


}
Carree::~Carree()
{
    //dtor
}

Carree::Carree(double cote)
{
    this->m_Cote=cote;

}

void Carree::affiche()  const
{

    cout << "Cette figure est un carrée" << endl;

}

double Carree::aire()  const
{
    double aire = 0;
    aire = m_Cote * m_Cote;
    return aire;
}
void Carree::perimetre() const
{

    double perimetre = 0;
    perimetre= 4 * m_Cote;
    cout << "Perimètre = " << perimetre << endl;


}
Disque::~Disque()
{
    //dtor
}

Disque::Disque(double rayon)
{
    this->m_Rayon=rayon;

}

void Disque::affiche()  const
{

    cout << "Cette figure est un disque" << endl;

}

double Disque::aire()  const
{
    double aire = 0;
    double pi = 3.14;
    aire = pi * m_Rayon * m_Rayon;
    return aire;
}
void Disque::perimetre() const
{

    double perimetre = 0;
    double pi = 3.14;
    perimetre= 2 * pi * m_Rayon;
    cout << "Perimètre = " << perimetre << endl;


}
