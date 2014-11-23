/**
 * \file OuvrirPorte.cpp
 * \brief implémentation classe OuvrirPorte
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#include "OuvrirPorte.hpp"

OuvrirPorte::OuvrirPorte(Joueur *j):EtatJoueur(j){}

OuvrirPorte::~OuvrirPorte(){}

void OuvrirPorte::piocherPorteFaceCache(){
	joueur->setEtat(joueur->getPiller());
	joueur->getEtat()->piocherPorteFaceCache();
}

void OuvrirPorte::changerRace(Race * r){
	
	
	if(joueur->getRace()->Getnom()!="Humain"){
		Effet * e=joueur->getRace()->getEffet();
		e->setVal(-e->getVal());
		e->prendEffet();
		joueur->defausser(joueur->getRace());
		
	}
	else{
		delete joueur->getRace();
	}
	joueur->setRace(r);
	joueur->getRace()->poser(joueur);
}

void OuvrirPorte::poseEquipement(Equipement * e){
	joueur->getBagage().push_back(e);
	if(e->getEffet()!=NULL){
		e->getEffet()->setCible(joueur);
	}	
}

void OuvrirPorte::equiper(Equipement * e){
	if(e->getEffet()!=NULL){
		e->getEffet()->prendEffet();
	}
	if(typeid(*e)==typeid(Equipement))joueur->equiperEquipement(e);
	if(typeid(*e)==typeid(Main)){
			if(((Main*)e)->getNbMain()==1){
				joueur->equiper1Main((Main*)e);
			}
			else{
				joueur->equiper2Main((Main*)e);
			}
	}
	if(typeid(*e)==typeid(Armure))joueur->equiperArmure((Armure*)e);
	if(typeid(*e)==typeid(CouvreChef))joueur->equiperCouvreChef((CouvreChef*)e);
	if(typeid(*e)==typeid(Chaussure))joueur->equiperChaussure((Chaussure*)e);
}

void OuvrirPorte::desequiper(Equipement * e){
	joueur->getBagage().push_back(e);
	if(e->getEffet()!=NULL){
		e->getEffet()->setVal(-e->getEffet()->getVal());
		e->getEffet()->prendEffet();
		e->getEffet()->setVal(-e->getEffet()->getVal());
	}
}

void OuvrirPorte::poserMalediction(Joueur * cible, Malediction * m){
	m->getEffet()->setCible(cible);
	m->getEffet()->prendEffet();
	joueur->defausser(m);
}



void OuvrirPorte::combattre(Monstre * m){
	joueur->setEtat(joueur->getBagarre());
	joueur->getEtat()->combattre(m);
}
