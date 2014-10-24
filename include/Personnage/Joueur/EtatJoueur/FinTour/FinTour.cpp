#include "FinTour.hpp"

FinTour::FinTour(Joueur * j):EtatJoueur(j){
	}

FinTour::~FinTour(){}

void FinTour::finirTour(){
	if(joueur->getMain().size()<6){
		joueur->setEtat(joueur->getFin());
	}
	else{
		cout<<"Vous devez défausser de cartes pour n'en avoir plus que 5 en main"<<endl;
	}
}

void FinTour::defausserCarte(Carte * c){
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
}

void FinTour::equiper(Equipement * e){
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

void FinTour::desequiper(Equipement * e){
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
	if(joueur->getNiv()+somme>9) joueur->setNiv(9);
	else joueur->setNiv(joueur->getNiv()+somme);
}
