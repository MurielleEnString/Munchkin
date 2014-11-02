/**
 * \file CarteSupMain.cpp
 * \brief implementation classe CarteSupMain
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#include "CarteSupMain.hpp"

void CarteSupMain::comp(Personnage * p, int n){
	((Joueur*)p)->setNbCartesMain(((Joueur*)p)->getNbCartesMain()+n);
}
