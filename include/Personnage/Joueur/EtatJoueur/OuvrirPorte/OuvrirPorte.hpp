#ifndef OUVRIRPORTE_HPP
	#define OUVRIRPORTE_HPP
	
	#include "../EtatJoueur.hpp"
	#include "../../Joueur.hpp"
	#include "../../../../Carte/Carte.hpp"
	#include "../../../../Carte/Porte/Monstre/Monstre.hpp"
	#include "../../../../Carte/Porte/Malediction/Malediction.hpp"
	#include "../../../../Munchkin/Munchkin.hpp"
	#include <typeinfo>
	
	


class OuvrirPorte:public EtatJoueur{
	private:
		
	public:
		OuvrirPorte(Joueur * j);
		void piocherPorteFaceVisible();
	
};
	
	
	
	
#endif
