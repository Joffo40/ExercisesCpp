#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>



using namespace std;

void melangerLettres(string *mot);

int main()
{
    string motMystere, motUtilisateur;
    string *motMelange(nullptr);

    //1 : On demande de saisir un mot*
    cout << "Saisissez un mot à l’abri des regards : ";
    cin >> motMystere;

    motMelange = new string(motMystere);


    //2 : On mélange les lettres du mot

    melangerLettres(motMelange);

    //3 : On demande à l'utilisateur quel est le mot mystère
    cout << "Quel est ce mot ? " << *motMelange << endl;

    while (motUtilisateur != motMystere)
    {
       cin >> motUtilisateur;
       if (motUtilisateur == motMystere)

       {

            cout << "Bravo !" << endl;

       }

       else

       {

           cout << "Ce n'est pas le mot !" << endl;

       }

    }

    delete motMelange;


    return 0;

}

void melangerLettres(string *mot)

{

    string melange;

    int position(0);

    std::cout << *mot << endl;



   //Tant qu'on n'a pas extrait toutes les lettres du mot

    while (mot->size() != 0)

    {

        //On choisit un numéro de lettre au hasard dans le mot

        position = rand() % mot->size();

        //On ajoute la lettre dans le mot mélangé

        melange += mot->at(position);

        //On retire cette lettre du mot mystère

        //Pour ne pas la prendre une deuxième fois

        mot->erase(position, 1);

    }

    //On assigne le mot mélangé au pointeur

    *mot = melange;

}
