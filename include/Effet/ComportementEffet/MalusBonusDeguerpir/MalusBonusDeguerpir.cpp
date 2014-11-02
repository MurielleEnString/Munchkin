/**
 * \file MalusBonusDeguerpir.cpp
 * \brief implémentation classe MalusBonusDeguerpir
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


#include "MalusBonusDeguerpir.hpp"

void MalusBonusDeguerpir::comp(Personnage * p, int n){
	if(typeid(*p )==typeid(Joueur)){
		((Joueur*)p)->setValDeguerpir(((Joueur*)p)->getValDeguerpir()+n);
	}
}
