/**
 * \file Equipement.cpp
 * \brief implémentation classe Equipement
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */
/****************************************************************************************************/

#include "Equipement.hpp"

/****************************************************************************************************/

/****************************************************************************************************/
/********** Constructeur                                                                   **********/
/****************************************************************************************************/


Equipement::Equipement(std::string n, int p,int b, Effet * e) : Tresor(n,e,p),bonus(b) {}
Equipement::Equipement(std::string n, std::string d, int p,int b, Effet * e) : Tresor(n, d, e, p),bonus(b) {}

/****************************************************************************************************/
/********** Destructeur **********/
/****************************************************************************************************/


Equipement::~Equipement() {
}

/****************************************************************************************************/
/********** Accesseurs **********/
/****************************************************************************************************/

int Equipement::getBonus(){
	return bonus;
}


void Equipement::equiper(Joueur * j){
	vector<Equipement*>::iterator it=j->getBagage().begin();
	while((*it)->compare(this) || it!=j->getBagage().end()){
		++it;
	}
	if((*it)->compare(this)){
		j->getBagage().erase(it);
		j->getEquipe().push_back(this);
	}
}





