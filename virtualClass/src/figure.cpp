#include "figure.h"
// #include "triangle2.h"

Triangle2::Triangle2(int base, int hauteur)
{
    this->m_base=base;
    this->m_hauteur=hauteur;
}
int Triangle2::aire() const
{
    int aire;
    aire = m_base * m_hauteur /2;

    return aire;

}
Triangle2::~Triangle2()
{
    //dtor
}
