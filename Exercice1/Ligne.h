#ifndef LIGNE_H_INCLUDED
#define LIGNE_H_INCLUDED
using namespace std;
class Ligne
{
    private:
        string lib;
        float prix_u;
        int qte;
    public:
        Ligne(string,float,int);
        string getLib(){return lib;}
        float totalLigne();
        void afficheLigne();
};

#endif // LIGNE_H_INCLUDED
