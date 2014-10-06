/*
  Fichier Personnage.hpp
  Définition de la classe Personnage
  Auteur : LE CORVEC Quentin Cédric Bois
*/

/****************************************************************************************************/

#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP

#include "../Carte/Porte/Race/Race.hpp"

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

  protected:
    //Attributs
    int niveau;
    int force;
    Race * race;

  private:

}; //Class Personnage

/****************************************************************************************************/

#endif //PERSONNAGE_HPP

/****************************************************************************************************/
