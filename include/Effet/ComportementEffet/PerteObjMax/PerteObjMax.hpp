#ifndef PERTEOBJMAX_HPP
	#define PERTEOBJMAX_HPP
	
#include "../ComportementEffet.hpp"
#include "../../../Personnage/Joueur/Joueur.hpp"


	
class PerteObjMax:public ComportementEffet{
	public:
		//PerteObjMax(){};
		void comp(Personnage * p, int n);
		//virtual ~PerteObjMax();
};


#endif

