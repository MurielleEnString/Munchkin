#include "DebutTour.hpp"

DebutTour::DebutTour(Joueur * j):EtatJoueur(j){}

DebutTour::~DebutTour(){}

void DebutTour::piocherPorteFaceVisible(){
	
	Porte * c=joueur->getJeu()->piocherPorte();
	cout<<"J'ai pioché "<<c->Getnom()<<endl;	
	if(typeid(*c )==typeid(Monstre)){
		cout<<"c'est un monstre"<<endl;
		joueur->setEtat((EtatJoueur*)joueur->getBagarre());
		joueur->getEtat()->combattre((Monstre*)c);
		
	}
	else{ 
		if(typeid(*c )==typeid(Malediction)){
		
			
			((Malediction*)c)->getEffet()->setCible(joueur);
			((Malediction*)c)->getEffet()->prendEffet();
			joueur->getJeu()->defausser((Carte *)c);
			joueur->setEtat(joueur->getOuvrirLaPorte());
				
		}
		else{
			joueur->getMain().push_back(c);
			joueur->setEtat(joueur->getOuvrirLaPorte());
		}
	}
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
	if(e->getEffet()!=NULL){
		e->getEffet()->setCible(joueur);
	}	
}

void DebutTour::equiper(Equipement * e){
	joueur->getEquipe().push_back(e);
	if(e->getEffet()!=NULL){
		e->getEffet()->prendEffet();
	}
}

void DebutTour::desequiper(Equipement * e){
	joueur->getBagage().push_back(e);
	if(e->getEffet()!=NULL){
		e->getEffet()->setVal(-e->getEffet()->getVal());
		e->getEffet()->prendEffet();
		e->getEffet()->setVal(-e->getEffet()->getVal());
	}
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







