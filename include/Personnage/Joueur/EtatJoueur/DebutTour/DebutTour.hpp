#ifndef DEBUTTOUR_HPP
	#define DEBUTTOUR_HPP
	
	#include "../EtatJoueur.hpp"
	#include "../../Joueur.hpp"
	

class DebutTour:public EtatJoueur{
	public:
		DebutTour(Joueur * j);
		void piocherPorteFaceVisible();
		
		void changerRace(Race * r);
		void poseEquipement(Equipement * e);
		void equiper(Equipement * e);
		void desequiper(Equipement * e);
		void poserMalediction(Joueur * cible, Malediction * m);
		void vendreObjets(vector<Tresor*> * sacAvendre);
		void defausserCarte(Carte * c);
		
	private:
	
	
	
	
	
};


	
#endif
