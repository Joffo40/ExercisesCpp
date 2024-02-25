#include "Duree.hpp"
#include <iostream>
using namespace std;

Duree::Duree()
{

m_heures=10;
m_minutes=10;
m_secondes=10;

};
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
bool Duree::estDifferent(Duree const& b) const
{
    //Teste si a.m_heure == b.m_heure etc.
    if (m_heures*3600 + m_minutes*60 +m_secondes== b.m_heures*3600 + b.m_minutes*60 + b.m_secondes)
        return false;
    else
        return true;
};
bool Duree::estSuperieur(Duree const& b) const
{
    //Teste si a.m_heure > b.m_heure etc.
    if (m_heures*3600 + m_minutes*60 +m_secondes> b.m_heures*3600 + b.m_minutes*60 + b.m_secondes)
        return true;
    else
        return false;
};
bool Duree::estInferieur(Duree const& b) const
{
    //Teste si a.m_heure > b.m_heure etc.
    if (m_heures*3600 + m_minutes*60 +m_secondes< b.m_heures*3600 + b.m_minutes*60 + b.m_secondes)
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
bool operator!=(Duree const& a, Duree const& b)
{
//Teste si m_heures*3600 + m_minutes*60 +m_secondes == b.m_heures*3600 + b.m_minutes*60 + b.m_secondes.
    if (a.estDifferent(b))
        return true;
    else
        return false;
};
bool operator>(Duree const& a, Duree const& b)
{
//Teste si m_heures*3600 + m_minutes*60 +m_secondes > b.m_heures*3600 + b.m_minutes*60 + b.m_secondes.
    if (a.estSuperieur(b))
        return true;
    else
        return false;
};
bool operator>=(Duree const& a, Duree const& b)
{
//Teste si m_heures*3600 + m_minutes*60 +m_secondes >= b.m_heures*3600 + b.m_minutes*60 + b.m_secondes.
    if ((a.estSuperieur(b)) || (a.estEgal(b)))
        return true;
    else
        return false;
};
bool operator<(Duree const& a, Duree const& b)
{
//Teste si m_heures*3600 + m_minutes*60 +m_secondes < b.m_heures*3600 + b.m_minutes*60 + b.m_secondes.
    if (a.estInferieur(b))
        return true;
    else
        return false;
};
bool operator<=(Duree const& a, Duree const& b)
{
//Teste si m_heures*3600 + m_minutes*60 +m_secondes >= b.m_heures*3600 + b.m_minutes*60 + b.m_secondes.
    if ((a.estInferieur(b)) || (a.estEgal(b)))
        return true;
    else
        return false;
};

