/**
 * \file PillerPiece.hpp
 * \brief declaration classe PillerPiece
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#ifndef PillerPiece_HPP
	#define PillerPiece_HPP
	
	#include "../EtatJoueur.hpp"
	#include "../../Joueur.hpp"
	//#include "../../../../Munchkin/Munchkin.hpp"
	class Equipement;
	
	
class PillerPiece:public EtatJoueur{
	public:
		PillerPiece(Joueur * j);
		virtual ~PillerPiece();
		
		void finirTour();
		void defausserCarte(Carte * c);
		void changerRace(Race * r);
		void poseEquipement(Equipement * e);
		void equiper(Equipement * e);
		void poserMalediction(Joueur * cible, Malediction * m);
		
		
};


	
#endif

