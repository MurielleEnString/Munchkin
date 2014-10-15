#include"Race.hpp"

Race::Race(Effet * e,Effet * e0, string nom, string description): Porte(nom, description, e), e1(e0){}

void Race::poser(Joueur * j){
	e->setCible((Personnage *)j);
	e->prendEffet();
}
