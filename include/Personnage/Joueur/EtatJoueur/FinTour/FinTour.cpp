/**
 * \file FinTour.cpp
 * \brief implémentation classe FinTour
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#include "FinTour.hpp"

FinTour::FinTour(Joueur * j):EtatJoueur(j){
	}

FinTour::~FinTour(){}

void FinTour::finirTour(){
	if(joueur->getMain().size()<6){
		joueur->setEtat(joueur->getFin());
		joueur->finTour();
	}
	else{
		cout<<"Vous devez défausser de cartes pour n'en avoir plus que 5 en main"<<endl;
	}
}

void FinTour::defausserCarte(Carte * c){
	joueur->defausser(c);
}

void FinTour::changerRace(Race * r){
	
	
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

void FinTour::poseEquipement(Equipement * e){
	joueur->getBagage().push_back(e);
	if(e->getEffet()!=NULL){
		e->getEffet()->setCible(joueur);
	}	
}

void FinTour::equiper(Equipement * e){
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



void FinTour::poserMalediction(Joueur * cible, Malediction * m){
	m->getEffet()->setCible(cible);
	m->getEffet()->prendEffet();
	joueur->defausser(m);
}


