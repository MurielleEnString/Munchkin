/*
  Fichier Equipement.hpp
  Définition de la classe Equipement
  Auteur : LE CORVEC Quentin Cdrik Boua
*/

/****************************************************************************************************/

#ifndef EQUIPEMENT_HPP
#define EQUIPEMENT_HPP
#include "Effet.hpp"

/****************************************************************************************************/

class Equipement:public Equipement {
  protected :
    //Attributs
    Effet effet;

  public :
    //Constructeur
    Equipement(String n, String p); //Constructeur par défaut
    Equipement(String n, String d, String p);

    //Destructeur
    ~Equipement();

    //Accesseurs
    void afficher() const;

    //Mutateurs

}; //Class Carte
/****************************************************************************************************/
#include "Equipement.cpp" //Implémentation de Carte
#endif // EQUIPEMENT_HPP
/****************************************************************************************************/
