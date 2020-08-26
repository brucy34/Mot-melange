#include <iostream>
#include <string>
using namespace std;
class Personnage
{

    int m_vie;
    int m_mana;
    int m_degatsArme;
    string m_monArme;
    public:
    void recevoirDegat(int nbDegats)
    {

    }
    void boirePotionMagique(int quantitePotion)
    {

    }
    void attaquer(Personnage &cible)
    {

    }
    void changerArme(string nouvelleArme,int newDegatsArme)
    {

    }
    bool estVivant()
    {

    }
    void attaqueMagique(int nbmagie, string nomMagie, Personnage &cible)
    {

    }
};
int main()
{
    Personnage  david,goliath;
    goliath.attaqueMagique(34,"feu",david);
    david.recevoirDegat(34);
    david.boirePotionMagique(30);
    david.attaquer(goliath);
    david.changerArme("fronde",90);
    goliath.recevoirDegat(90);
    goliath.estVivant();

    return 0;

}
