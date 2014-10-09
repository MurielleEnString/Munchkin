#ifndef ATTENTE_HPP
	#define ATTENTE_HPP
	
	#include "../EtatJoueur.hpp"
	#include "../../Joueur.hpp"
	
class Attente:public EtatJoueur{
	public:
		Attente(Joueur * j);
};


	
#endif


