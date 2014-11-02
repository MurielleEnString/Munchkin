/**
 * \file Effet.hpp
 * \brief declaration classe Effet
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#ifndef EFFET_HPP
#define EFFET_HPP

/****************************************************************************************************/

#include "ComportementEffet/ComportementEffet.hpp"
#include <iostream>


class Personnage;

/****************************************************************************************************/

class Effet{
  public:
    //Constructeur
    Effet(int valeur, ComportementEffet * c);

    //Destructeur
    ~Effet();
    void prendEffet();
    void setCible(Personnage * p);
    int getVal();
    void setVal(int n);

  protected:
    //Attributs
    
    int val;
    
    Personnage * cible;
    
    
    ComportementEffet * comp; //Comportement de l'effet

  private:

}; //Class Effet

/****************************************************************************************************/

#endif //EFFET_HPP

/****************************************************************************************************/
