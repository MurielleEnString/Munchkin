

/**
 * \file FabriquePorte.hpp
 * \brief declaration classe FabriquePorte
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


/****************************************************************************************************/

#ifndef FABRIQUEPORTE_HPP
#define FABRIQUEPORTE_HPP



#include "FabriqueCarte.hpp"
#include <string>


using namespace std;



/****************************************************************************************************/

class FabriquePorte:public FabriqueCarte{
	protected:
		
	
	public:
		FabriquePorte();
		virtual Carte * fabriquerCarte(string nom);
};

#endif
