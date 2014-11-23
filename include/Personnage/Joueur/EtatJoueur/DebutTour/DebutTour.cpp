/**
 * \file DebutTour.cpp
 * \brief implémentation classe DebutTour
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


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
	
	
	if(joueur->getRace()->Getnom()!="Humain"){
		Effet * e=joueur->getRace()->getEffet();
		e->setVal(-e->getVal());
		e->prendEffet();
		joueur->getJeu()->getDefausse().push_back(joueur->getRace());
		
	}
	else{
		delete joueur->getRace();
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

void DebutTour::desequiper(Equipement * e){
	joueur->getBagage().push_back(e);
	if(e->getEffet()!=NULL){
		e->getEffet()->setVal(-e->getEffet()->getVal());
		e->getEffet()->prendEffet();
		e->getEffet()->setVal(-e->getEffet()->getVal());
	}
}
void DebutTour::poserMalediction(Joueur * cible, Malediction * m){
	m->getEffet()->setCible(cible);
	m->getEffet()->prendEffet();
	joueur->getJeu()->defausser(m);
}








