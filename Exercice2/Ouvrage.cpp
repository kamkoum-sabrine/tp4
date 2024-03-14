#include "Ouvrage.h"

Ouvrage::Ouvrage(int code, string titre, int nbExemplaires, float prix_u)
{
    this->code = code;
    this->titre = titre;
    this->nbExemplaire = nbExemplaires;
    this->prix_u = prix_u;
}

void Ouvrage::affiche()
{
    cout<<"Titre : "<<titre<<endl;
    cout<<"Code: "<<code<<endl;
    cout<<"Nombre d'exemplaires: "<<nbExemplaire<<endl;
    cout<<"Prix unitaire: "<<prix_u<<endl;
}

float Ouvrage::totalOuvrage()
{
    return nbExemplaire*prix_u;
}
