#ifndef OUVRAGE_H_INCLUDED
#define OUVRAGE_H_INCLUDED
using namespace std;
class Ouvrage
{
    private:
        int code;
        string titre;
        int nbExemplaire;
        float prix_u;
    public:
        Ouvrage(){
            code = 0;
            titre = "";
            nbExemplaire = 0;
            prix_u = 0.0;
        }

        Ouvrage(int, string, int, float);
        int getCode(){return code;}
        string getTitre(){return titre;}
        int getNbExemplaire(){return nbExemplaire;}
        void setNbExemplaire(int nbExemplaires){this->nbExemplaire = nbExemplaires;}
        float getPrixU(){return prix_u;}
        void affiche();
        float totalOuvrage();
};


#endif // OUVRAGE_H_INCLUDED
