/**
 * \file PerteGainNiv.hpp
 * \brief declaration classe PerteGainNiv
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#ifndef PERTEGAINNIV_HPP
	#define PERTEGAINNIV_HPP
	
#include "../ComportementEffet.hpp"
#include "../../../Personnage/Joueur/Joueur.hpp"

class PerteGainNiv:public ComportementEffet{
	public:
		void comp(Personnage * p, int n);	
};


#endif


