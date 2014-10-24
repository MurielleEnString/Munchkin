#include "OuvrirPorte.hpp"

OuvrirPorte::OuvrirPorte(Joueur *j):EtatJoueur(j){}

OuvrirPorte::~OuvrirPorte(){}

void OuvrirPorte::piocherPorteFaceVisible(){
	
	
	
	Porte * c=joueur->getJeu()->getPiochePorte().front();
	
	cout<<"J'ai pioché "<<c->Getnom()<<endl;
	cout<<typeid(*c ).name()<<" "<<endl;
	
	if(typeid(*c )==typeid(Monstre)){
		cout<<"c'est un monstre"<<endl;
		joueur->setEtat((EtatJoueur*)joueur->getBagarre());
		joueur->getEtat()->combattre((Monstre*)c);
		
	}
	else{ 
		if(typeid(*c )==typeid(Malediction)){
			((Malediction*)c)->getEffet()->setCible(joueur);
			((Malediction*)c)->getEffet()->prendEffet();
			joueur->getJeu()->getDefausse().push_back((Carte *)c);			
		}
		else{
			joueur->getMain().push_back(c);
		}
	}
	
}

void OuvrirPorte::changerRace(Race * r){
	
	
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

void OuvrirPorte::poseEquipement(Equipement * e){
	joueur->getBagage().push_back(e);	
}

void OuvrirPorte::equiper(Equipement * e){
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

void OuvrirPorte::desequiper(Equipement * e){
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

void OuvrirPorte::poserMalediction(Joueur * cible, Malediction * m){
	//Appliquer malediction
	joueur->getJeu()->getDefausse().push_back(m);
}

void OuvrirPorte::vendreObjets(vector<Tresor*> * sacAvendre){
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

void OuvrirPorte::defausserCarte(Carte * c){
	//A Faire
}
