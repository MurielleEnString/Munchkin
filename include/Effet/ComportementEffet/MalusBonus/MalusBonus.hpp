/**
 * \file MalusBonus.hpp
 * \brief declaration classe MalusBonus
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#ifndef MALUSBONUS_HPP
	#define MALUSBONUS_HPP
	
#include "../ComportementEffet.hpp"


	
class MalusBonus:public ComportementEffet{
	public:
		void comp(Personnage * p, int n);	
};


#endif
