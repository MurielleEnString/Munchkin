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
#include "../../../Personnage/Joueur/Joueur.hpp"
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
    virtual void equiper(Joueur * j);
    

  protected:

  private:
	int bonus;

}; //Class Equipement

/****************************************************************************************************/

#endif //EQUIPEMENT_HPP

/****************************************************************************************************/
