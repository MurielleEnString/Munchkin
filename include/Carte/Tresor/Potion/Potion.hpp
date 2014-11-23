/**
 * \file Potion.hpp
 * \brief declaration classe Potion
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
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

};

/****************************************************************************************************/

#endif

/****************************************************************************************************/

