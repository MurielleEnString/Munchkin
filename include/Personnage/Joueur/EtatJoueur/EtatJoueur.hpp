#ifndef ETATJOUEUR_HPP
	#define ETATJOUEUR_HPP
	
	
	#include "../../../Carte/Tresor/Equipement/Equipement.hpp"
	
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


class EtatJoueur{
	protected:
		Joueur * joueur;
	
	public:
		EtatJoueur(Joueur * t);
		
		void piocherPorteFaceVisible();
		void piocherPorteFaceCache();
		void poseEquipement(Equipement * e);
		void equiper(Equipement * e);
		void desequiper(Equipement * e);
		bool combattre(Monstre * m);
		void poserMalediction(Joueur * cible, Malediction * m);
		void poserPotion(Personnage * p);
		void vendreObjets(vector<Tresor> * sacAvendre);
		void deguerpir(Monstre * m);
		void defausserCarte(Carte * c);
		void finirTour();
};

#endif
