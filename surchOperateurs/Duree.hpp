#ifndef DUREE_HPP_INCLUDED
#define DUREE_HPP_INCLUDED
using namespace std;

class Duree
{
    public:
    Duree();
    Duree(int heures, int minutes, int secondes);

    bool estEgal(Duree const& b) const;
    bool estDifferent(Duree const& b) const;
    bool estSuperieur(Duree const& b) const;
    bool estInferieur(Duree const& b) const;
    Duree somme(Duree const& b) const;
    void affichage() const;

    private:

    int m_heures;
    int m_minutes;
    int m_secondes;
};

bool operator==(Duree const& a, Duree const& b);
bool operator!=(Duree const& a, Duree const& b);
bool operator<(Duree const& a, Duree const& b);
bool operator>(Duree const& a, Duree const& b);
bool operator<=(Duree const& a, Duree const& b);
bool operator>=(Duree const& a, Duree const& b);

Duree operator+(Duree const& a, Duree const& b);

#endif // DUREE_HPP_INCLUDED
