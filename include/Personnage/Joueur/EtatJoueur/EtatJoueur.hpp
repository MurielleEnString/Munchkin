#ifndef ETATJOUEUR_HPP
	#define ETATJOUEUR_HPP
	
	
	#include "../../../Carte/Tresor/Equipement/Equipement.hpp"
	#include "../../../Carte/Porte/Race/Race.hpp"
	#include "../../../Munchkin/Munchkin.hpp"
	#include <iostream>
	#include <vector>
	
	using namespace std;
	
	
	
class Joueur;
class Personnage;
class Monstre;
//class Equipement;
class Tresor;
class Carte;
class Malediction;
class Potion;


class EtatJoueur{
	protected:
		Joueur * joueur;
	
	public:
		EtatJoueur(Joueur * t);
		
		virtual void piocherPorteFaceVisible();
		virtual void piocherPorteFaceCache();
		virtual void changerRace(Race * r);
		virtual void poseEquipement(Equipement * e);
		virtual void equiper(Equipement * e);
		virtual void desequiper(Equipement * e);
		virtual bool combattre(Monstre * m);
		virtual void poserMalediction(Joueur * cible, Malediction * m);
		virtual void poserPotion(Personnage * p, Potion * po);
		virtual void vendreObjets(vector<Tresor*> * sacAvendre);
		virtual void deguerpir(Monstre * m);
		virtual void defausserCarte(Carte * c);
		virtual void finirTour();
};

#endif
