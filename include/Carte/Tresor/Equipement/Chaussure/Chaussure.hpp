/**
 * \file Chaussure.hpp
 * \brief declaration classe Chaussure
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/
#ifndef CHAUSSURE_HPP
#define CHAUSSURE_HPP
/****************************************************************************************************/

#include "../Equipement.hpp"
using namespace std;

/****************************************************************************************************/

class Chaussure:public Equipement{
	void equiper(Joueur * j);
};


#endif
