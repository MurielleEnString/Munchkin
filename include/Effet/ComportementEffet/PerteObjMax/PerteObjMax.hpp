/**
 * \file PerteObjMax.hpp
 * \brief declaration classe PerteObjMax
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

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

