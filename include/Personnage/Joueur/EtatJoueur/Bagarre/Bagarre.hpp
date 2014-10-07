#ifndef BAGARRE_HPP
#define BAGARRE_HPP

#include "../EtatJoueur.hpp"

class Bagarre:public EtatJoueur{
	public:
		Bagarre(Joueur *j);
		void combattre(Monstre * m);
	
	
};


#endif
