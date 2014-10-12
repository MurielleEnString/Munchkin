#ifndef BAGARRE_HPP
#define BAGARRE_HPP

#include <time.h>
#include <stdlib.h>
#include "../EtatJoueur.hpp"
#include "../../Joueur.hpp"



class Bagarre:public EtatJoueur{
	private : 
		int calculForceJoueur();
		int calculForceMonstre(Monstre * m);
		
	
	
	public:
		Bagarre(Joueur *j);
		void combattre(Monstre * m);
		void deguerpir(Monstre * m);
		void poserPotion(Personnage * p);
	
	
};


#endif
