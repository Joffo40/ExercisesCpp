#include "fraction.h"
#include <iostream>

using namespace std;

Fraction::Fraction(int num, int den) : m_numerateur(num), m_denominateur(den) {}

Fraction::Fraction(int entier) : m_numerateur(entier), m_denominateur(1) {}

Fraction::Fraction() : m_numerateur(0), m_denominateur(1) {}


Fraction::~Fraction()
{
    //dtor
}
void Fraction::affiche(std::ostream& flux) const

{

    if(m_denominateur == 1)

    {

        flux << m_numerateur;

    }

    else

    {

        flux << m_numerateur << '/' << m_denominateur;

    }

}
ostream& operator<<( ostream &flux, Fraction const& fraction )
{
    fraction.affiche(flux) ;
    return flux;
}
Fraction operator*(Fraction const& a, Fraction const& b)

{

    Fraction copie(a);

    copie *= b;

    return copie;

}
bool operator==(Fraction const& a, Fraction const& b)
{
    return a.estEgal(b);
}
bool Fraction::estEgal(Fraction const& autre) const

{

    if(m_numerateur == autre.m_numerateur && m_denominateur == autre.m_denominateur)

         return true;

    else

        return false;

}
Fraction& Fraction::operator*=(Fraction const& autre)

{

    m_numerateur *= autre.m_numerateur;

    m_denominateur *= autre.m_denominateur;

    return *this;

}
