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
	joueur->getEquipe().push_back(e);
	if(e->getEffet()!=NULL){
		e->getEffet()->prendEffet();
	}
}

void FinTour::desequiper(Equipement * e){
	joueur->getBagage().push_back(e);
	if(e->getEffet()!=NULL){
		e->getEffet()->setVal(-e->getEffet()->getVal());
		e->getEffet()->prendEffet();
		e->getEffet()->setVal(-e->getEffet()->getVal());
	}
}

void FinTour::poserMalediction(Joueur * cible, Malediction * m){
	m->getEffet()->setCible(cible);
	m->getEffet()->prendEffet();
	joueur->defausser(m);
}

void FinTour::vendreObjets(vector<Tresor*> * sacAvendre){
	int somme=0;
	
	vector<Tresor *>::iterator i;
	for(i=sacAvendre->begin();i!=sacAvendre->end();++i){
		somme+=(*i)->getPrix();
		joueur->defausser(*i);
	}
	delete sacAvendre;
	somme=somme/1000;
	if(joueur->getNiveau()+somme>9) joueur->setNiveau(9);
	else joueur->setNiveau(joueur->getNiveau()+somme);
}
