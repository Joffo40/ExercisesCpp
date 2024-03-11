#include <iostream>
#include <string>
#include "Personnage.hpp"

using namespace std;

int main()
{

    string attaquant;
    string attaqué;
    // Création des personnages
    Personnage david, goliath("Epée aiguisée", 20);

    // Au combat !
    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.afficherEtat();
    goliath.attaquer(david);
    david.afficherEtat();
    goliath.boirePotionDeVie(800);
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);


    //cout<<"choisir l'attaquant:?"<<endl;
    //cin>>attaquant;
    cout<<"choisir l'attaqué:?"<<endl;
    cin>>attaqué;


    goliath.attaquer(david);


    // Temps mort ! Voyons voir la vie de chacun...
    cout << "David" << endl;
    david.afficherEtat();
    cout << endl << "Goliath" << endl;
    goliath.afficherEtat();

    return 0;
}
