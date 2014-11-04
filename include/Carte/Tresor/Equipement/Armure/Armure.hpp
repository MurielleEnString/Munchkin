/**
 * \file Armure.hpp
 * \brief declaration classe Armure
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/
#ifndef ARMURE_HPP
#define ARMURE_HPP
/****************************************************************************************************/

#include "../Equipement.hpp"
using namespace std;

/****************************************************************************************************/

class Armure:public Equipement{
	void equiper(Joueur * j);
};


#endif
