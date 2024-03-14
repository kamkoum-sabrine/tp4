#ifndef FACTURE_H_INCLUDED
#define FACTURE_H_INCLUDED
#include <vector>
#include "Ligne.h"
using namespace std;
class Facture
{
    private:
      string nomC;
      int nbLignes;
      vector<Ligne> lignes;
    public:
        Facture(string="");
        ~Facture();
        void ajouter(Ligne);
        float totalFacture();
        void afficherFacture();
        int rechercher(string);
        void supprimer(int);
        void Tri();
};


#endif // FACTURE_H_INCLUDED
