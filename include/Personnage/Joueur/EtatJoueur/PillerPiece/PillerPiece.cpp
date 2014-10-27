#include "PillerPiece.hpp"

PillerPiece::PillerPiece(Joueur *j):EtatJoueur(j){
}

PillerPiece::~PillerPiece(){}

void PillerPiece::piocherPorteFaceCache(){
	Carte * c=joueur->getJeu()->piocherPorte();
	joueur->getMain().push_back(c);
	joueur->setEtat((EtatJoueur*)joueur->getFin());
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
	if(e->getEffet()!=NULL){
		e->getEffet()->setCible(joueur);
	}	
}

void PillerPiece::equiper(Equipement * e){
	joueur->getEquipe().push_back(e);
	if(e->getEffet()!=NULL){
		e->getEffet()->prendEffet();
	}
}

void PillerPiece::desequiper(Equipement * e){
	joueur->getBagage().push_back(e);
	if(e->getEffet()!=NULL){
		e->getEffet()->setVal(-e->getEffet()->getVal());
		e->getEffet()->prendEffet();
		e->getEffet()->setVal(-e->getEffet()->getVal());
	}
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
	if(joueur->getNiveau()+somme>9) joueur->setNiveau(9);
	else joueur->setNiveau(joueur->getNiveau()+somme);
}
