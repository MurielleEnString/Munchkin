/**
 * \file OuvrirPorte.hpp
 * \brief declaration classe OuvrirPorte
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#ifndef OUVRIRPORTE_HPP
	#define OUVRIRPORTE_HPP
	
	#include "../EtatJoueur.hpp"
	#include "../../Joueur.hpp"
	#include "../../../../Carte/Carte.hpp"
	#include "../../../../Carte/Porte/Monstre/Monstre.hpp"
	#include "../../../../Carte/Porte/Malediction/Malediction.hpp"
	#include <typeinfo>
	
	class Equipement;
	


class OuvrirPorte:public EtatJoueur{
	private:
		
	public:
		OuvrirPorte(Joueur * j);
		virtual ~OuvrirPorte();
		
		void piocherPorteFaceCache();
		void changerRace(Race * r);
		void poseEquipement(Equipement * e);
		void equiper(Equipement * e);
		void poserMalediction(Joueur * cible, Malediction * m);
		void combattre(Monstre * m);
	
};
	
	
	
	
#endif
