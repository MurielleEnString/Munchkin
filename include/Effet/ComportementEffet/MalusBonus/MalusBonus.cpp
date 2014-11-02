/**
 * \file MalusBonus.cpp
 * \brief implémentation classe MalusBonus
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#include "MalusBonus.hpp"

void MalusBonus::comp(Personnage * p, int n){
	p->setBonus(p->getBonus()+n);
}
