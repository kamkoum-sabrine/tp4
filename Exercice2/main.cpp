#include <iostream>
#include "Ouvrage.h"
#include "Ouvrage.cpp"
#include "Bibliotheque.h"
#include "Bibliotheque.cpp"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Ouvrage O1(1,"Ouvrage 1",2,1.5),O2(2,"Ouvrage 2",4,5);
    Bibliotheque bib;
    bib.ajouter(O1);
    bib.ajouter(O2);
    bib.affiche();
    bib.diminuerNbExemplaires(1,4);
    bib.augmenterNbExp(2,2);
    cout<<"Apres augmentation et diminution de nombre des exemplaires: "<<endl;
    bib.affiche();
    return 0;
}
