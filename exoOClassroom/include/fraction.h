#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>

using namespace std;


class Fraction

{

public:
    Fraction(int num, int den);
    Fraction(int num);
    Fraction();
    ~Fraction();
    void affiche(std::ostream& flux) const;
    bool estEgal(Fraction const& autre) const;
    Fraction& operator*=(Fraction const& autre);
private:

    int m_numerateur;

    int m_denominateur;

};
ostream& operator<<( ostream &flux, Fraction const& fraction );
Fraction operator*(Fraction const& a, Fraction const& b);
bool operator==(Fraction const& a, Fraction const& b);
#endif // FRACTION_H
