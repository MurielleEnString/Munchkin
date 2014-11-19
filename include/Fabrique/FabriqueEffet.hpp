

/**
 * \file FabriqueEffet.hpp
 * \brief declaration classe FabriqueEffet
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


/****************************************************************************************************/

#ifndef FABRIQUEEffet_HPP
#define FABRIQUEEffet_HPP




#include "../Effet/Effet.hpp"
#include <string>
#include <vector>


using namespace std;

class FabriqueCarte;

/****************************************************************************************************/

class FabriqueEffet{
	public:
		Effet * fabriquerEffet(vector<string> champs);
};

#endif
