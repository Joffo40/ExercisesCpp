#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> tableau(0); //Un tableau de 0 entiers
    int n(0);    //increment
    int somme(0);
    int moyenne(0);
    int variable(0);

    while(1)
    {

        cout << "Donnez la valeur d'entrée "<< n+1 <<"(tapez -1 pour sortir):" << endl;
        cin >> variable;

        if(variable==-1)
        {
            break;   // sortie si -1 est entré.
        }
        else
        {
            tableau.push_back(variable); //on ajoute une colonne avec la valeur variable

        }


     n++;
    }
    int const taille(tableau.size());

    for(int i=0;i<taille;i++)
    {
    somme+=tableau[i];

    }
     moyenne = somme / taille;




    cout << "La moyenne est egale à: " << moyenne << endl;   //affichage de la moyenne

    return 0;
}
