#include "Bibliotheque.h"
using namespace std;
void Bibliotheque::affiche()
{
    for (int i=0;i<ouvrages.size();i++)
    {
        cout<<"Ouvrage "<<i<<endl;
        ouvrages[i].affiche();
        cout<<endl<<"Total Stock "<<ouvrages[i].totalOuvrage()<<endl;
    }
}

float Bibliotheque::prixTotal()
{
    float total = 0;
    for (int i=0;i<ouvrages.size();i++)
    {
        total+=ouvrages[i].totalOuvrage();
    }
    return total;
}

int Bibliotheque::rechercher(int code)
{
    for (int i=0;i<ouvrages.size();i++)
    {
        if (ouvrages[i].getCode() == code){
            return i;
        }
    }
    return -1;
}

void Bibliotheque::ajouter(Ouvrage O)
{
    ouvrages.push_back(O);
}

void Bibliotheque::diminuerNbExemplaires(int code,int nbExp)
{
    int indiceOuvrage = rechercher(code);
    if (indiceOuvrage!=-1){
        if (ouvrages[indiceOuvrage].getNbExemplaire()>nbExp){
            int nouveauNb = ouvrages[indiceOuvrage].getNbExemplaire()-nbExp;
            ouvrages[indiceOuvrage].setNbExemplaire(nouveauNb);
        }
        else {
            cout<<"Le nombre d'exemplaires n'est pas suffisant!! "<<endl;
        }
    }
    else {
        cout<<"Pas d'ouvrage avec le code "<<code<<endl;
    }
}

void Bibliotheque::augmenterNbExp(int code,int nbExp)
{
    int indiceOuvrage = rechercher(code);
    if (indiceOuvrage!=-1){
        float nouveauNb = ouvrages[indiceOuvrage].getNbExemplaire()+nbExp;
            ouvrages[indiceOuvrage].setNbExemplaire(nouveauNb);
    }
    else {
        cout<<"Pas d'ouvrage avec le code "<<code<<endl;
    }
}
