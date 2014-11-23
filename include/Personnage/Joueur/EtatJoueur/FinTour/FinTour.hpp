/**
 * \file FinTour.hpp
 * \brief declaration classe FinTour
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#ifndef FINTOUR_HPP
	#define FINTOUR_HPP
	
	#include "../EtatJoueur.hpp"
	#include "../../Joueur.hpp"
	//#include "../../../../Munchkin/Munchkin.hpp"
	class Equipement;
	
	
class FinTour:public EtatJoueur{
	public:
		FinTour(Joueur * j);
		virtual ~FinTour();
		
		void finirTour();
		void defausserCarte(Carte * c);
		void changerRace(Race * r);
		void poseEquipement(Equipement * e);
		void equiper(Equipement * e);
		void desequiper(Equipement * e);
		void poserMalediction(Joueur * cible, Malediction * m);
		
		
};


	
#endif

