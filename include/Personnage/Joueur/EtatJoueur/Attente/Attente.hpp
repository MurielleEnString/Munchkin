#ifndef ATTENTE_HPP
	#define ATTENTE_HPP
	
	#include "../EtatJoueur.hpp"
	#include "../../Joueur.hpp"
	
class Race;

class Attente:public EtatJoueur{
	public:
		Attente(Joueur * j);
		void poserPotion(Personnage *);
		void changerRace(Race * r);
};


	
#endif


