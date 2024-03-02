#include <iostream>
#include "Duree.cpp"
using namespace std;


int main()
{
    //Duree duree1, duree2;
    Duree resultat,duree1(50,10,10), duree2(10,10,10);

    if(duree1==duree2)
    {

        cout<<"Les deux durées sont egales"<<endl;

    }
    else
    {

        cout<<"Les deux durées sont inégales"<<endl;

    };


    if(duree1!=duree2)
    {

        cout<<"Les deux durées sont inegales"<<endl;

    }
    else
    {

        cout<<"Les deux durées sont égales"<<endl;

    };

    if(duree1>duree2)
    {

        cout<<"Duree1 est superieure à Duree2"<<endl;

    }
    else if (duree1==duree2)
    {
        cout<<"Non Appliquable"<<endl;
    }
    else
    {

        cout<<"Duree1 est inférieure à Duree2"<<endl;

    };
    if(duree1>=duree2)
    {

        cout<<"Duree1 est superieure ou égale à Duree2"<<endl;

    }
    else
    {

        cout<<"Duree1 est inférieure ou egale à Duree2"<<endl;

    };
    if(duree1<duree2)
    {

        cout<<"Duree1 est inférieure à Duree2"<<endl;

    }
    else if (duree1==duree2)
    {

        cout<<"Non Appliquable"<<endl;

    }
    else
    {

        cout<<"Duree1 est superieure à Duree2"<<endl;

    };
    if(duree1<=duree2)
    {

        cout<<"Duree1 est inferieure ou égale à Duree2"<<endl;

    }
    else
    {

        cout<<"Duree1 est supérieure ou egale à Duree2"<<endl;

    };

    resultat = duree1 + duree2;

    resultat.affichage();

    resultat = duree1 - duree2;


    resultat.affichageSoustr();

    duree1 += duree2;

    duree1.affichage();

    Duree duree3(2, 25, 28), duree4(0, 16, 33);

    cout << duree3 << " et " << duree4 << endl;


    return 0;


}
