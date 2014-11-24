/**
 * \file PillerPiece.cpp
 * \brief implémentation classe PillerPiece
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#include "PillerPiece.hpp"

PillerPiece::PillerPiece(Joueur * j):EtatJoueur(j){
	}

PillerPiece::~PillerPiece(){}

void PillerPiece::finirTour(){
	if(joueur->getMain().size()<=joueur->getNbCartesMain()){
		joueur->setEtat(joueur->getAttente());
		joueur->finTour();
	}
	else{
		cout<<"Vous devez défausser de cartes pour n'en avoir plus que 5 en main"<<endl;
	}
}

void PillerPiece::defausserCarte(Carte * c){
	joueur->defausser(c);
}

void PillerPiece::changerRace(Race * r){
	
	
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

void PillerPiece::poseEquipement(Equipement * e){
	joueur->getBagage().push_back(e);
	if(e->getEffet()!=NULL){
		e->getEffet()->setCible(joueur);
	}	
}

void PillerPiece::equiper(Equipement * e){
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



void PillerPiece::poserMalediction(Joueur * cible, Malediction * m){
	m->getEffet()->setCible(cible);
	m->getEffet()->prendEffet();
	joueur->defausser(m);
}


