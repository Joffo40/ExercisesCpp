#include "Duree.hpp"
#include <iostream>
using namespace std;

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
    if(minutes>60 ||    secondes>60)
    {

        cout<<"La saisie est incorrecte"<<endl;

    }
    else
    {

    m_heures=heures;
    m_minutes=minutes;
    m_secondes=secondes;


    }
};
bool Duree::estEgal(Duree const& b) const
{
    //Teste si a.m_heure == b.m_heure etc.
    if (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes)
        return true;
    else
        return false;
};
bool operator==(Duree const& a, Duree const& b)
{
    //Teste si a.m_heure == b.m_heure etc.
    if (a.estEgal(b))
        return true;
    else
        return false;
};



