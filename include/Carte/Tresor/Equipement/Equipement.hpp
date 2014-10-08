/*
  Fichier Equipement.hpp
  D�finition de la classe Equipement
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
    Equipement(std::string n, int p, Effet * e); //Constructeur par d�faut
    Equipement(std::string n, std::string d, int p, Effet * e);

    //Destructeur
    ~Equipement();

    //Accesseurs
    void afficher() const;
    
    

  protected:

  private:

}; //Class Equipement

/****************************************************************************************************/

#endif //EQUIPEMENT_HPP

/****************************************************************************************************/
