#include "PillerPiece.hpp"

PillerPiece::PillerPiece(Joueur *j):EtatJoueur(j){
}

PillerPiece::~PillerPiece(){}

void PillerPiece::piocherPorteFaceCache(){
	Carte * c=joueur->getJeu()->piocherPorte();
	joueur->getMain().push_back(c);
	joueur->setEtat((EtatJoueur*)joueur->getFin());
}

void PillerPiece::defausserCarte(Carte * c){
	vector<Carte*>::iterator i=joueur->getMain().begin();
	while(i!=joueur->getMain().end()){
		if((*i)->compare(c)){
			break;
		}
		i++;
	}
	joueur->getMain().erase(i);
	//AJOUT DE LA CARTE A LA DEFAUSSE
}

void PillerPiece::changerRace(Race * r){
	
	
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

void PillerPiece::poseEquipement(Equipement * e){
	joueur->getBagage().push_back(e);	
}

void PillerPiece::equiper(Equipement * e){
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

void PillerPiece::desequiper(Equipement * e){
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

void PillerPiece::poserMalediction(Joueur * cible, Malediction * m){
	//Appliquer malediction
	joueur->getJeu()->getDefausse().push_back(m);
}

void PillerPiece::vendreObjets(vector<Tresor*> * sacAvendre){
	int somme=0;
	
	vector<Tresor *>::iterator i;
	for(i=sacAvendre->begin();i!=sacAvendre->end();++i){
		somme+=(*i)->getPrix();
		joueur->getJeu()->getDefausse().push_back(*i);
	}
	delete sacAvendre;
	somme=somme/1000;
	if(joueur->getNiv()+somme>9) joueur->setNiv(9);
	else joueur->setNiv(joueur->getNiv()+somme);
}
