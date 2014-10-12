#include "CarteSupMain.hpp"

void CarteSupMain::comp(Personnage * p, int n){
	((Joueur*)p)->setNbCartesMain(((Joueur*)p)->getNbCartesMain()+n);
}
