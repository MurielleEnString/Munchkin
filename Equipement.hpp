/*
  Fichier Equipement.hpp
  Définition de la classe Equipement
  Auteur : LE CORVEC Quentin Cdrik Boua
*/

/****************************************************************************************************/

#ifndef EQUIPEMENT_HPP
#define EQUIPEMENT_HPP
#include "Effet.h"
#include "Tresor.hpp"
#include <string>

/****************************************************************************************************/

class Equipement:public Tresor {
  protected :
    //Attributs
    

  public :
    //Constructeur
    Equipement(string n, int p, Effet * e); //Constructeur par défaut
    Equipement(string n, string d, int p, Effet * e);

    //Destructeur
    ~Equipement();

    //Accesseurs
    void afficher() const;

    //Mutateurs

}; //Class Carte
/****************************************************************************************************/
#include "Equipement.cpp" //Implémentation de Equipement
#endif // EQUIPEMENT_HPP
/****************************************************************************************************/
