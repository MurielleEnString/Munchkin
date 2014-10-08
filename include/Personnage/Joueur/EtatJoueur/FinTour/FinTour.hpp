#ifndef FINTOUR_HPP
	#define FINTOUR_HPP
	
	#include "../EtatJoueur.hpp"
	#include "../../Joueur.hpp"
	
class FinTour:public EtatJoueur{
	public:
		FinTour(Joueur * j);
		void finirTour();
		void defausserCarte(Carte * c);
		
};


	
#endif

