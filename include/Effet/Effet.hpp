/*
  Fichier Effet.hpp
  Définition de la classe Effet
  Auteur : LE CORVEC Quentin Cédric Bois
*/

/****************************************************************************************************/

#ifndef EFFET_HPP
#define EFFET_HPP

/****************************************************************************************************/

#include <iostream>


class Personnage;

/****************************************************************************************************/

class Effet{
  public:
    //Constructeur
    Effet(int valeur);

    //Destructeur
    ~Effet();

    //Attributs

  protected:
    //Attributs
    int val;
    Personnage * cible;

  private:

}; //Class Effet

/****************************************************************************************************/

#endif //EFFET_HPP

/****************************************************************************************************/
