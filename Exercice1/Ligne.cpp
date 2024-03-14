#include "Ligne.h"
using namespace std;
Ligne::Ligne(string lib,float prix_u, int qte)
{
    this->lib = lib;
    this->prix_u = prix_u;
    this->qte = qte;
}

float Ligne::totalLigne()
{
    return prix_u*qte;
}

void Ligne::afficheLigne()
{
    cout<<"Lib: "<<lib<<endl<<"Prix unitaire: "<<prix_u<<endl<<"Quantite: "<<qte<<endl;
}
