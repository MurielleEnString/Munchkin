/**
 * \file CouvreChef.hpp
 * \brief declaration classe CouvreChef
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/
#ifndef COUVRECHEF_HPP
#define COUVRECHEF_HPP
/****************************************************************************************************/

#include "../Equipement.hpp"
using namespace std;

/****************************************************************************************************/

class CouvreChef:public Equipement{
	public:
		CouvreChef(std::string n, int p,int b, Effet * e);
		CouvreChef(std::string n, std::string d, int p,int b, Effet * e);
	void equiper(Joueur * j);
};

#endif
