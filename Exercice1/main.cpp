#include <iostream>
#include "Ligne.h"
#include "Ligne.cpp"
#include "Facture.h"
#include "Facture.cpp"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Ligne L1("aa",12.5,2),L2("bb",5,3),L3("cc",2,2);
    L1.afficheLigne();
    L2.afficheLigne();
    cout<<"Total ligne L1 "<<L1.totalLigne()<<endl;
    cout<<"Total ligne L2 "<<L2.totalLigne()<<endl;
    Facture F1("Sabrine");
    F1.ajouter(L1);
    F1.ajouter(L2);
    F1.ajouter(L3);
    F1.afficherFacture();
    cout<<"Total facture  "<<F1.totalFacture()<<endl;
    string lib;
    cout<<"Donner la libelle à rechercher ";

    cin>>lib;
    if (F1.rechercher(lib)==-1)
        cout<<"Aucune ligne avec ce libelle"<<endl;
    else
        cout<<"La position de la ligne = "<<F1.rechercher(lib)<<endl;
    F1.supprimer(0);
    F1.afficherFacture();
    Ligne L4("dd",5,14);
    F1.Tri();
    cout<<"Apres Tri "<<endl;
    F1.afficherFacture();
    return 0;
}
