#ifndef OUVRIRPORTE_HPP
	#define OUVRIRPORTE_HPP
	
	#include"../EtatJoueur.hpp"
	
class OuvrirPorte:public EtatJoueur{
	private:
		bool combat;
	public:
		OuvrirPorte(Joueur * j);
		void piocherFaceVisible();
	
};
	
	
	
	
#endif
