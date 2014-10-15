/*
  Fichier Equipement.hpp
  Définition de la classe Equipement
  Auteur : LE CORVEC Quentin Cdrik Boua
*/

/****************************************************************************************************/

#ifndef EQUIPEMENT_HPP
#define EQUIPEMENT_HPP

/****************************************************************************************************/


#include "../Tresor.hpp"
#include <string>
#include <iostream>

class Effet;

/****************************************************************************************************/

class Equipement:public Tresor {
  public :
    //Constructeur
    Equipement(std::string n, int p,int b, Effet * e); //Constructeur par défaut
    Equipement(std::string n, std::string d, int p,int b, Effet * e);

    //Destructeur
    ~Equipement();

    //Accesseurs
    void afficher() const;
    int getBonus();
    

  protected:

  private:
	int bonus;

}; //Class Equipement

/****************************************************************************************************/

#endif //EQUIPEMENT_HPP

/****************************************************************************************************/
