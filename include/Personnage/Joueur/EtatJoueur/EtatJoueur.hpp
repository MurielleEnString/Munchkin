#ifndef ETATJOUEUR_HPP
	#define ETATJOUEUR_HPP
	
	#include "../../../Carte/Carte.hpp"
	#include "../Joueur.hpp"
	#include "../../../Carte/Porte/Monstre/Monstre.hpp"
	#include "../../../Carte/Tresor/Equipement/Equipement.hpp"
	#include <iostream>
	#include <vector>
	
	using namespace std;
	
	
	
class Joueur;

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
		void combattre(Monstre * m);
		void poserMalediction(Joueur * cible);
		void poserPotion(Personnage *);
		void vendreObjets(vector<Tresor> * sacAvendre);
		void deguerpir();
		void defausserCarte(Carte * c);
		void finirTour();
};

#endif
