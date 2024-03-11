#include "chiffre.h"

chiffre::chiffre()
{
    //ctor
}

chiffre::~chiffre()
{
    //dtor
}
int chiffre::calculAddition(chiffre const& b)
{
    int somme =0;
    somme = this->Getm_Counter( ) + b.m_Counter;
    return somme;


}


chiffre operator+(chiffre const& a, chiffre const& b)
{
    chiffre resultat;
    resultat.Setm_Counter(a.calculAddition(b));   //Utilise une méthode de Duree pour effectuer l'addition
    return resultat;
}
