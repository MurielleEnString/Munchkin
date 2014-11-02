
/**
 * \file Race.cpp
 * \brief implémentation classe Race
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#include "Race.hpp"                    

Race::Race(Effet * e,Effet * e0, string nom, string description): Porte(nom, description, e), e1(e0){}

Race::~Race(){}


void Race::poser(Joueur * j){
	e->setCible((Personnage *)j);
	e->prendEffet();
}
