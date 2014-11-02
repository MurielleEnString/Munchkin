/**
 * \file Monstre.hpp
 * \brief declaration classe Monstre
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#ifndef MONSTRE_HPP
#define MONSTRE_HPP

/****************************************************************************************************/

#include <string>
#include "../../../Personnage/Personnage.hpp"
#include "../Porte.hpp"

using namespace std;

class Effet;

/****************************************************************************************************/

class Monstre:public Porte, public Personnage {
  public:
    //Constructeur
    Monstre(std::string nom, Effet * e, int niv, int nbT);
    Monstre(std::string nom, Effet * e, int niv, int nbT, int nbN);

    //Destructeur
    ~Monstre();
    int getTresors();
    int getNbNiv();

  private:
    //Attributs
    
    int tresors;
    int nbNiv;

}; //Class Monstre

/****************************************************************************************************/

#endif //MONSTRE_HPP

/****************************************************************************************************/
