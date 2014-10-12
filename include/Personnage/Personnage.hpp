/*
  Fichier Personnage.hpp
  D�finition de la classe Personnage
  Auteur : LE CORVEC Quentin C�dric Bois
*/

/****************************************************************************************************/

#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP



class Race;

/****************************************************************************************************/

class Personnage {
  public:
    //Constructeur
    Personnage();
    Personnage(int niv);

    //Destructeur
    virtual ~Personnage();

    //Accesseurs
    int getNiveau();
    int getBonus();
    void setBonus(int b);

  protected:
    //Attributs
    int niveau;
    int bonus;
    Race * race;

  private:

}; //Class Personnage

/****************************************************************************************************/

#endif //PERSONNAGE_HPP

/****************************************************************************************************/
