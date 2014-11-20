

/**
 * \file FabriqueTresor.hpp
 * \brief declaration classe FabriqueTresor
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


/****************************************************************************************************/

#ifndef FABRIQUETRESOR_HPP
#define FABRIQUETRESOR_HPP


#include "FabriqueEffet.hpp"
#include "FabriqueCarte.hpp"
#include "../Carte/Tresor/Potion/Potion.hpp"
#include "../Carte/Tresor/Equipement/Equipement.hpp"
#include <string>


using namespace std;

class FabriqueCarte;

/****************************************************************************************************/

class FabriqueTresor:public FabriqueCarte{
	
	public:
		FabriqueTresor();
		virtual Carte * fabriquerCarte(vector<string> champs);
};

#endif
