/**
 * \file DebutTour.hpp
 * \brief declaration classe DebutTour
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


#ifndef DEBUTTOUR_HPP
	#define DEBUTTOUR_HPP
	
	#include "../EtatJoueur.hpp"
	#include "../../Joueur.hpp"
	#include "../../../../Carte/Tresor/Equipement/Equipement.hpp"
	
	
	

class DebutTour:public EtatJoueur{
	public:
		DebutTour(Joueur * j);
		virtual ~ DebutTour();
		
		void piocherPorteFaceVisible();
		
		void changerRace(Race * r);
		void poseEquipement(Equipement * e);
		void equiper(Equipement * e);
		void desequiper(Equipement * e);
		void poserMalediction(Joueur * cible, Malediction * m);
		
		
		
	private:
	
	
	
	
	
};


	
#endif
