

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
#include "../Carte/Porte/Monstre/Monstre.hpp"
#include "../Carte/Porte/Race/Race.hpp"
#include "../Carte/Porte/Malediction/Malediction.hpp"



using namespace std;



/****************************************************************************************************/

class FabriquePorte:public FabriqueCarte{
	protected:
		
	
	public:
		FabriquePorte();
		virtual Carte * fabriquerCarte(vector<string> champs);
};

#endif
