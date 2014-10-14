#ifndef BAGARRE_HPP
#define BAGARRE_HPP

#include "../../../../Carte/Carte.hpp"
#include <time.h>
#include <stdlib.h>
#include "../EtatJoueur.hpp"
#include "../../Joueur.hpp"
#include "../../../../Munchkin/Munchkin.hpp"

using namespace std;


class Bagarre:public EtatJoueur{
	private : 
		int calculForceJoueur();
		int calculForceMonstre(Monstre * m);
		
	
	
	public:
		Bagarre(Joueur *j);
		bool combattre(Monstre * m);
		void deguerpir(Monstre * m);
		void poserPotion(Personnage * p, int index);
	
	
};


#endif
