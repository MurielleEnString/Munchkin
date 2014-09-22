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
  private :
    //Attributs
    protected prix

  public :
    //Constructeur
    Tresor(String n, String p); //Constructeur par défaut
    Tresor(String n, String d, String p);

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
