/**
 * \file Bagarre.hpp
 * \brief declaration classe Bagarre
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


#ifndef BAGARRE_HPP
#define BAGARRE_HPP

#include "../../../../Carte/Carte.hpp"
#include <time.h>
#include <stdlib.h>
#include "../EtatJoueur.hpp"
#include "../../Joueur.hpp"
//#include "../../../../Munchkin/Munchkin.hpp"
#include "../../../../Carte/Tresor/Equipement/Equipement.hpp"
#include "../../../../Carte/Tresor/Potion/Potion.hpp"


using namespace std;
class Equipement;
class Race;

class Bagarre:public EtatJoueur{
	private : 
		int calculForceJoueur();
		int calculForceMonstre(Monstre * m);
		
		Monstre * mons;
		
		
	
	
	public:
		Bagarre(Joueur *j);
		virtual ~Bagarre();
		
		void combattre(Monstre * m);
		void deguerpir();
		void poserPotion(Personnage * p, Potion * po);
	
	
};


#endif
