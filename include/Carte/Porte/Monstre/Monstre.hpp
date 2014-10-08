/*
  Fichier Monstre.hpp
  Définition de la classe Monstre
  Auteur : LE CORVEC Quentin Cédric Bois
*/

/****************************************************************************************************/

#ifndef MONSTRE_HPP
#define MONSTRE_HPP

/****************************************************************************************************/

#include "../../../Personnage/Personnage.hpp"
#include "../Porte.hpp"

class Effet;

/****************************************************************************************************/

class Monstre:public Porte, public Personnage {
  public:
    //Constructeur
    Monstre(std::string nom, Effet * e, int niv, int nbT);
    Monstre(std::string nom, Effet * e, int niv, int nbT, int nbN);

    //Destructeur
    ~Monstre();

  private:
    //Attributs
    Effet * incident;
    int tresors;
    int nbNiv;

}; //Class Monstre

/****************************************************************************************************/

#endif //MONSTRE_HPP

/****************************************************************************************************/
