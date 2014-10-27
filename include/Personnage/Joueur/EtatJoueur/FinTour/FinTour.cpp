#include "FinTour.hpp"

FinTour::FinTour(Joueur * j):EtatJoueur(j){
	}

FinTour::~FinTour(){}

void FinTour::finirTour(){
	if(joueur->getMain().size()<6){
		joueur->setEtat(joueur->getFin());
		joueur->getJeu()->changementJoueur(joueur);
	}
	else{
		cout<<"Vous devez défausser de cartes pour n'en avoir plus que 5 en main"<<endl;
	}
}

void FinTour::defausserCarte(Carte * c){
	joueur->getJeu()->defausser(c);
}

void FinTour::changerRace(Race * r){
	
	
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
	//Appliquer malediction
	joueur->getJeu()->getDefausse().push_back(m);
}

void FinTour::vendreObjets(vector<Tresor*> * sacAvendre){
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
