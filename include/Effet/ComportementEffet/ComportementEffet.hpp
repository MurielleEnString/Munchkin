#ifndef COMPORTEMENTEFFET_HPP
	#define COMPORTEMENTEFFET_HPP
	
#include "../../Personnage/Personnage.hpp"
	
class ComportementEffet{
	public:
		virtual void comp(Personnage * p, int n) = 0;
};


#endif
