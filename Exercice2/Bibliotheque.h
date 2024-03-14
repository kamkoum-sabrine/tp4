#ifndef BIBLIOTHEQUE_H_INCLUDED
#define BIBLIOTHEQUE_H_INCLUDED
#include <vector>
#include "Ouvrage.h"
class Bibliotheque
{
    private:
        vector<Ouvrage> ouvrages;
    public:
        Bibliotheque(){};
        void affiche();
        float prixTotal();
        int rechercher(int);
        void ajouter(Ouvrage);
        void diminuerNbExemplaires(int,int);
        void augmenterNbExp(int,int);
};

#endif // BIBLIOTHEQUE_H_INCLUDED
