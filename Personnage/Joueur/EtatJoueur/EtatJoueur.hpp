#ifndef ETATJOUEUR_HPP
	#define ETATJOUEUR_HPP
	
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
		
		virtual void piocherPorteFaceVisible();
		virtual void piocherPorteFaceCache();
		virtual void poserUnMonstre();
		virtual void donnerCarte();
		void poseEquipement(Equipement e);
		void equiper(Equipement e);
		void desequiper(Equipement e);
		void poserUnMonstre(Monstre * m);
		void piocherTresor();
		void poserMalediction(Joueur * cible);
		void poserPotion(Personnage *);
		void vendreObjets(vector<Tresor> * sacAvendre);
		void deguerpir();
		void defausserCarte();
		void finirTour();
};

#endif
