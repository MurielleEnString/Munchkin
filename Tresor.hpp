/*
  Fichier Tresor.hpp
  Définition de la classe Tresor
  Auteur : LE CORVEC Quentin Cdrik Boua
*/

/****************************************************************************************************/

#ifndef TRESOR_HPP
#define TRESOR_HPP

/****************************************************************************************************/

class Tresor:public Carte {
  protected :
    //Attributs
    int prix

  public :
    //Constructeur
    Tresor(String n, int p); //Constructeur par défaut
    Tresor(String n, String d, int p);

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
