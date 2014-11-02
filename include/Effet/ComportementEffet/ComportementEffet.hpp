/**
 * \file ComportementEffet.hpp
 * \brief declaration classe ComportementEffet
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#ifndef COMPORTEMENTEFFET_HPP
	#define COMPORTEMENTEFFET_HPP
	
#include "../../Personnage/Personnage.hpp"
	
class ComportementEffet{
	public:
		virtual void comp(Personnage * p, int n) = 0;
		virtual ~ComportementEffet();
};


#endif
