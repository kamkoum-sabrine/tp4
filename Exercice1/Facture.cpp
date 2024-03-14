#include "Facture.h"
using namespace std;
Facture::Facture(string nomC)
{
    this->nomC = nomC;
}

Facture::~Facture()
{

}

void Facture::ajouter(Ligne L)
{
    lignes.push_back(L);

}

float Facture::totalFacture()
{
    float total;
    for (int i=0;i<lignes.size();i++){
        total+=lignes[i].totalLigne();
    }
    return total;
}

void Facture::afficherFacture()
{
    for (int i=0;i<lignes.size();i++){
        lignes[i].afficheLigne();
    }
}

int Facture::rechercher(string lib)
{

    for (int i=0;i<lignes.size();i++){
        if (lignes[i].getLib() == lib){
            return i;
        }
    }
    return -1;
}

void Facture::supprimer(int i)
{
    lignes.erase(lignes.begin()+i);
}

void Facture::Tri() {

    for (int i = 1; i < lignes.size(); ++i) {
        Ligne ligneCourant = lignes[i];
        int j = i-1;

         while ((j>=0) &&(lignes[j].totalLigne() > ligneCourant.totalLigne())) {
            lignes[j+1] = lignes[j];
            j = j-1;
        }

        lignes[j+1] = ligneCourant;
    }
}
