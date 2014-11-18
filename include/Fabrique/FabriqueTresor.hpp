

/**
 * \file FabriqueTresor.hpp
 * \brief declaration classe FabriqueTresor
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


/****************************************************************************************************/

#ifndef FABRIQUETRESOR_HPP
#define FABRIQUETRESOR_HPP



#include "FabriqueCarte.hpp"
#include <string>


using namespace std;

class FabriqueCarte;

/****************************************************************************************************/

class FabriqueTresor:public FabriqueCarte{
	protected:
		
	
	public:
		FabriqueTresor();
		virtual Carte * fabriquerCarte(string nom);
};

#endif
