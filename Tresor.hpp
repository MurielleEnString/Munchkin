/*
  Fichier Tresor.hpp
  Définition de la classe Tresor
  Auteur : LE CORVEC Quentin Cdrik Boua
*/

/****************************************************************************************************/

#ifndef TRESOR_HPP
#define TRESOR_HPP
#include <string>
#include "Effet.h"
#include "Carte.hpp"

using namespace std;

/****************************************************************************************************/

class Tresor:public Carte {
  protected :
    //Attributs
    int prix;
    Effet * effet;

  public :
    //Constructeur
    Tresor(string n, Effet * e, int p); //Constructeur par défaut
    Tresor(string n, string d, Effet * e, int p);

    //Destructeur
    ~Tresor();

    //Accesseurs
    void afficher() const;

    //Mutateurs

}; //Class Carte

/****************************************************************************************************/


#endif // TRESOR_HPP

/****************************************************************************************************/
