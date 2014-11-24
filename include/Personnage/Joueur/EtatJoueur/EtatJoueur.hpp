/**
 * \file EtatJoueur.hpp
 * \brief declaration classe EtatJoueur
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


#ifndef ETATJOUEUR_HPP
	#define ETATJOUEUR_HPP
	
	//#include "../Joueur.hpp"
	//#include "../../../Carte/Tresor/Equipement/Equipement.hpp"
	#include <iostream>
	#include <vector>
	
	using namespace std;
	
	
	
class Joueur;
class Race;
//class Munchkin;
class Personnage;
class Monstre;
class Equipement;
class Tresor;
class Carte;
class Malediction;
class Potion;


class EtatJoueur{
	protected:
		Joueur * joueur;
	
	public:
		EtatJoueur(Joueur * t);
		virtual ~EtatJoueur();
		
		virtual void piocherPorteFaceVisible();
		virtual void piocherPorteFaceCache();
		virtual void changerRace(Race * r);
		virtual void poseEquipement(Equipement * e);
		virtual void equiper(Equipement * e);
		virtual void combattre(Monstre * m);
		virtual void poserMalediction(Joueur * cible, Malediction * m);
		virtual void poserPotion(Personnage * p, Potion * po);
		virtual void deguerpir();
		virtual void defausserCarte(Carte * c);
		virtual void finirTour();
		
		
};

#endif
