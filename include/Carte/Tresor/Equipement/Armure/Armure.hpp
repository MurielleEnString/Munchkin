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

class Joueur;
class Equipement;

/****************************************************************************************************/

class Armure:public Equipement{
	public:
		Armure(std::string n, int p,int b, Effet * e);
		Armure(std::string n, std::string d, int p,int b, Effet * e);
		
};


#endif
