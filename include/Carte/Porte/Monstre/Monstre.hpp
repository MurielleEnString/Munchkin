/*
  Fichier Monstre.hpp
  Définition de la classe Monstre
  Auteur : LE CORVEC Quentin Cédric Bois
*/

/****************************************************************************************************/

#ifndef MONSTRE_HPP
#define MONSTRE_HPP

/****************************************************************************************************/

#include <string>
#include "../../../Personnage/Personnage.hpp"
#include "../Porte.hpp"

using namespace std;

class Effet;

/****************************************************************************************************/

class Monstre:public Porte, public Personnage {
  public:
    //Constructeur
    Monstre(std::string nom, Effet * e, int niv, int nbT);
    Monstre(std::string nom, Effet * e, int niv, int nbT, int nbN);

    //Destructeur
    ~Monstre();
    int getTresors();
    int getNbNiv();
    
    string type();

  private:
    //Attributs
    
    int tresors;
    int nbNiv;

}; //Class Monstre

/****************************************************************************************************/

#endif //MONSTRE_HPP

/****************************************************************************************************/
