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

using namespace std;

/****************************************************************************************************/

class Potion:public Tresor {
  public :
    //Constructeur
    Potion(string n, Effet * e, int p,int b);
    Potion(string n, string d, Effet * e, int p,int b);

    //Destructeur
    virtual ~Potion();

    //Accesseurs
    int getBonus();
    

  protected:

  private:
	int bonus;

};

/****************************************************************************************************/

#endif

/****************************************************************************************************/

