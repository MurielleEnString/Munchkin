#ifndef JOUEUR_H
	#define JOUEUR_H

#include "Carte.hpp"
#include "Personnage.h"
#include <vector>

class Joueur:public Personnage{
	private:
		std::vector <Carte> main;
		std::vector <Equipement> bagage;
		std::vector <Equipement> equipe;
	public:
		Joueur();
		~Joueur();
		void pioche();
		void poseEquipement(Equipement e);
		void equiper(Equipement e);
		void desequiper(Equipement e);
		
	
};


#endif
