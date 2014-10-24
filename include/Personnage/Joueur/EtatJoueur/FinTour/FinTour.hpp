#ifndef FINTOUR_HPP
	#define FINTOUR_HPP
	
	#include "../EtatJoueur.hpp"
	#include "../../Joueur.hpp"
	
	
class FinTour:public EtatJoueur{
	public:
		FinTour(Joueur * j);
		void finirTour();
		void defausserCarte(Carte * c);
		void changerRace(Race * r);
		void poseEquipement(Equipement * e);
		void equiper(Equipement * e);
		void desequiper(Equipement * e);
		void poserMalediction(Joueur * cible, Malediction * m);
		void vendreObjets(vector<Tresor*> * sacAvendre);
		
};


	
#endif

