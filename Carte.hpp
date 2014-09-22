/*
  Fichier Carte.hpp
  Définition de la classe Carte
  Auteur : LE CORVEC Quentin Cdrik Boua
*/

/****************************************************************************************************/

#ifndef CARTE_HPP
#define CARTE_HPP

/****************************************************************************************************/

class Carte {
  private :
    //Attributs
    protected string nom;
    protected string description;

  public :
    //Constructeur
    Carte(String n); //Constructeur par défaut
    Carte(String n, String d);

    //Destructeur
    ~Carte();

    //Accesseurs
    void afficher() const;

    //Mutateurs

}; //Class Carte

/****************************************************************************************************/

#include "Carte.cpp" //Implémentation de Carte
#endif // CARTE_HPP

/****************************************************************************************************/
