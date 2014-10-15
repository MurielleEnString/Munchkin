/*
  Fichier Equipement.hpp
  Définition de la classe Equipement
  Auteur : LE CORVEC Quentin Cdrik Boua
*/

/****************************************************************************************************/

#ifndef POTION_HPP
#define POTION_HPP

/****************************************************************************************************/


#include "../Tresor.hpp"
#include <string>
#include <iostream>

class Effet;

/****************************************************************************************************/

class Potion:public Tresor {
  public :
    //Constructeur
    Potion(std::string n, int p,int b, Effet * e); //Constructeur par défaut
    Potion(std::string n, std::string d, int p,int b, Effet * e);

    //Destructeur
    ~Potion();

    //Accesseurs
    void afficher() const;
    int getBonus();
    

  protected:

  private:
	int bonus;

};

/****************************************************************************************************/

#endif

/****************************************************************************************************/

