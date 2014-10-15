#ifndef BAGARRE_HPP
#define BAGARRE_HPP

#include "../../../../Carte/Carte.hpp"
#include <time.h>
#include <stdlib.h>
#include "../EtatJoueur.hpp"
#include "../../Joueur.hpp"
#include "../../../../Munchkin/Munchkin.hpp"
#include "../../../../Carte/Tresor/Equipement/Equipement.hpp"
#include "../../../../Carte/Tresor/Potion/Potion.hpp"

using namespace std;

class Race;

class Bagarre:public EtatJoueur{
	private : 
		int calculForceJoueur();
		int calculForceMonstre(Monstre * m);
		void poserPotion(Personnage * p, Potion * po);
		
	
	
	public:
		Bagarre(Joueur *j);
		bool combattre(Monstre * m);
		void deguerpir(Monstre * m);
		void poserPotion(Personnage * p, int index);
		void changerRace(Race * r);
	
	
};


#endif
