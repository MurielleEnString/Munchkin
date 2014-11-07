/**
 * \file Equipement.hpp
 * \brief declaration classe Equipement
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#ifndef EQUIPEMENT_HPP
#define EQUIPEMENT_HPP

/****************************************************************************************************/


#include "../Tresor.hpp"
#include <string>
#include <iostream>
#include <vector>

class Effet;
class Joueur;

/****************************************************************************************************/

class Equipement:public Tresor {
  public :
    //Constructeur
    Equipement(std::string n, int p,int b, Effet * e);
    Equipement(std::string n, std::string d, int p,int b, Effet * e);

    //Destructeur
    ~Equipement();

    //Accesseurs
    void afficher() const;
    int getBonus();
    
    

  protected:
	int bonus;

}; //Class Equipement

/****************************************************************************************************/

#endif //EQUIPEMENT_HPP

/****************************************************************************************************/
