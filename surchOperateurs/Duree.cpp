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

Duree Duree::somme(Duree const& b) const
{
    Duree resultat;

    int test = b.m_heures*3600 + b.m_minutes*60 +b.m_secondes+ m_heures*3600 + m_minutes*60 + m_secondes;
    resultat.m_heures=test / 3600;
    resultat.m_minutes=(test % 3600)/60;
    resultat.m_secondes=((test % 3600)%60)/60;

    return resultat;
}
Duree Duree::soustraction(Duree const& b) const
{
    Duree resultat;

    int test = -b.m_heures*3600 - b.m_minutes*60 -b.m_secondes + m_heures*3600 - m_minutes*60 - m_secondes;
    resultat.m_heures=test / 3600;
    resultat.m_minutes=(test % 3600)/60;
    resultat.m_secondes=((test % 3600)%60)/60;

    return resultat;




}
void Duree::affichage() const
{

    cout<<"La somme est égale à "<<m_heures<<" heures "<<m_minutes<<" minutes "<< m_secondes<<" secondes."<<endl;

}
void Duree::affichageSoustr() const
{

    cout<<"La soustraction est égale à "<<m_heures<<" heures "<<m_minutes<<" minutes "<< m_secondes<<" secondes."<<endl;

}
void Duree::operator+=(const Duree& a)
{
    int test = a.m_heures*3600 + a.m_minutes*60 +a.m_secondes+ m_heures*3600 + m_minutes*60 + m_secondes;
    m_heures=test / 3600;
    m_minutes=(test % 3600)/60;
    m_secondes=((test % 3600)%60)/60;

}
void Duree::afficherDuree(ostream &flux) const
{
    flux << m_heures << "h" << m_minutes << "m" << m_secondes << "s";
}
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

Duree operator+(Duree const& a, Duree const& b)
{
    Duree resultat;
    // Calcul
    resultat=a.somme(b);


    return resultat;
}
Duree operator-(Duree const& a, Duree const& b)
{
    Duree resultat;
    // Calcul
    resultat=a.soustraction(b);


    return resultat;
}
ostream &operator<<( ostream &flux, Duree const& duree)
{
    duree.afficherDuree(flux) ;
    return flux;
}
