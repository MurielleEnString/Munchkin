#ifndef OUVRIRPORTE_HPP
	#define OUVRIRPORTE_HPP
	
	#include "../EtatJoueur.hpp"
	#include "../../../../Carte/Porte/Monstre/Monstre.hpp"
	#include "../../../../Carte/Porte/Malediction/Malediction.hpp"
	#include "../../Joueur.hpp"
	#include "../../../../Munchkin/Munchkin.hpp"
	#include <typeinfo>
	



class OuvrirPorte:public EtatJoueur{
	private:
		bool combat;
	public:
		OuvrirPorte(Joueur * j);
		void piocherFaceVisible();
	
};
	
	
	
	
#endif
