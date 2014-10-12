#ifndef MALUSBONUSDEGUERPIR_HPP
	#define MALUSBONUSDEGUERPIR_HPP
	
#include "../ComportementEffet.hpp"
#include "../../../Personnage/Joueur/Joueur.hpp"

class MalusBonusDeguerpir:public ComportementEffet{
	public:
		void comp(Personnage * p, int n);	
};


#endif

