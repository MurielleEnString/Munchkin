#ifndef BAGARRE_HPP
#define BAGARRE_HPP

#include "../EtatJoueur.hpp"
#include "../../Joueur.hpp"



class Bagarre:public EtatJoueur{
	public:
		Bagarre(Joueur *j);
		void combattre(Monstre * m);
	
	
};


#endif
