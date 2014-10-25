#include "DebutTour.hpp"

DebutTour::DebutTour(Joueur * j):EtatJoueur(j){}

DebutTour::~DebutTour(){}

void DebutTour::piocherPorteFaceVisible(){
	
	joueur->setEtat((EtatJoueur*)joueur->getOuvrirLaPorte());
	joueur->getEtat()->piocherPorteFaceVisible();
}

void DebutTour::changerRace(Race * r){
	
	
	if(joueur->getRace()->Getnom()=="Humain"){
		delete joueur->getRace();
	}
	else{
		Effet * e=joueur->getRace()->getEffet();
		e->setVal(-e->getVal());
		e->prendEffet();
		joueur->getJeu()->getDefausse().push_back(joueur->getRace());
		
	}
	joueur->setRace(r);
	joueur->getRace()->poser(joueur);
}

void DebutTour::poseEquipement(Equipement * e){
	joueur->getBagage().push_back(e);	
}

void DebutTour::equiper(Equipement * e){
	vector<Equipement*>::iterator i=joueur->getBagage().begin();
	while(i!=joueur->getBagage().end()){
		if((*i)->compare(e)){
			break;
		}
		i++;
	}
	if((*i)->getEffet()!=NULL){
		(*i)->getEffet()->setCible((Personnage*)joueur);
		(*i)->getEffet()->prendEffet();
	}
	joueur->getBagage().erase(i);
	joueur->getEquipe().push_back(e);
}

void DebutTour::desequiper(Equipement * e){
	vector<Equipement*>::iterator i=joueur->getEquipe().begin();
	while(i!=joueur->getEquipe().end()){
		if((*i)->compare(e)){
			break;
		}
		i++;
	}
	if((*i)->getEffet()!=NULL){
		Effet * e=(*i)->getEffet();
		e->setVal(-e->getVal());
		e->prendEffet();
	}
	joueur->getEquipe().erase(i);
	joueur->getBagage().push_back(e);
}

void DebutTour::poserMalediction(Joueur * cible, Malediction * m){
	//Appliquer malediction
	joueur->getJeu()->getDefausse().push_back(m);
}

void DebutTour::vendreObjets(vector<Tresor*> * sacAvendre){
	int somme=0;
	
	vector<Tresor *>::iterator i;
	for(i=sacAvendre->begin();i!=sacAvendre->end();++i){
		somme+=(*i)->getPrix();
		joueur->getJeu()->getDefausse().push_back(*i);
	}
	delete sacAvendre;
	somme=somme/1000;
	if(joueur->getNiveau()+somme>9) joueur->setNiveau(9);
	else joueur->setNiveau(joueur->getNiveau()+somme);
}

void DebutTour::defausserCarte(Carte * c){
	//A Faire
}





