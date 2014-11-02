/**
 * \file PillerPiece.hpp
 * \brief declaration classe PillerPiece
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#ifndef PILLERPIECE_HPP
#define PILLERPIECE_HPP

#include "../EtatJoueur.hpp"
#include "../../Joueur.hpp"



class PillerPiece:public EtatJoueur{
	public:
		PillerPiece(Joueur *j);
		virtual ~PillerPiece();
		
		void piocherPorteFaceCache();
		void changerRace(Race * r);
		void poseEquipement(Equipement * e);
		void equiper(Equipement * e);
		void desequiper(Equipement * e);
		void poserMalediction(Joueur * cible, Malediction * m);
		void vendreObjets(vector<Tresor*> * sacAvendre);
	
	
};




#endif
