#ifndef MALUSBONUS_HPP
	#define MALUSBONUS_HPP
	
#include "../ComportementEffet.hpp"


	
class MalusBonus:public ComportementEffet{
	public:
		void comp(Personnage * p, int n);	
};


#endif
