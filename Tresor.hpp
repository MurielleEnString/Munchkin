/*
  Fichier Tresor.hpp
  Définition de la classe Tresor
  Auteur : LE CORVEC Quentin Cdrik Boua
*/

/****************************************************************************************************/

#ifndef TRESOR_HPP
#define TRESOR_HPP
#include <string>

/****************************************************************************************************/

class Tresor:public Carte {
  protected :
    //Attributs
    int prix;
    Effet effet;

  public :
    //Constructeur
    Tresor(string n, Effet e, string p); //Constructeur par défaut
    Tresor(string n, string d, Effet e, string p);

    //Destructeur
    ~Tresor();

    //Accesseurs
    void afficher() const;

    //Mutateurs

}; //Class Carte

/****************************************************************************************************/

#include "Tresor.cpp" //Implémentation de Carte
#endif // TRESOR_HPP

/****************************************************************************************************/
