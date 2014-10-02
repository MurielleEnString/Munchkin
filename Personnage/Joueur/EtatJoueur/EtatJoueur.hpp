#ifndef ETATJOUEUR_HPP
	#define ETATJOUEUR_HPP
	
	#include "../Joueur.hpp"
	
class Joueur;

class EtatJoueur{
	protected:
		Joueur * joueur;
	
	public:
		EtatJoueur(Joueur * t);
		
		virtual void piocherFaceVisible();
		virtual void piocherFaceCache();
		virtual void poserUnMonstre();
		virtual void donnerCarte();
};

#endif
