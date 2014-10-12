/*
  Fichier Effet.hpp
  Définition de la classe Effet
  Auteur : LE CORVEC Quentin Cédric Bois
*/

/****************************************************************************************************/

#ifndef EFFET_HPP
#define EFFET_HPP

/****************************************************************************************************/

#include "ComportementEffet/ComportementEffet.hpp"
#include <iostream>


class Personnage;

/****************************************************************************************************/

class Effet{
  public:
    //Constructeur
    Effet(int valeur);

    //Destructeur
    ~Effet();
    void prendEffet();

    void setCible(Personnage * p);

  protected:
    //Attributs
    int val;
    Personnage * cible;
    ComportementEffet * comp;

  private:

}; //Class Effet

/****************************************************************************************************/

#endif //EFFET_HPP

/****************************************************************************************************/
