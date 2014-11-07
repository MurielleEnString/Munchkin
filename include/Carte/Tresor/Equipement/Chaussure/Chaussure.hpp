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
	public:
		Chaussure(std::string n, int p,int b, Effet * e);
		Chaussure(std::string n, std::string d, int p,int b, Effet * e);
		
};


#endif
