/**
 * \file PillerPiece.cpp
 * \brief implémentation classe PillerPiece
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

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

void PillerPiece::desequiper(Equipement * e){
	joueur->getBagage().push_back(e);
	if(e->getEffet()!=NULL){
		e->getEffet()->setVal(-e->getEffet()->getVal());
		e->getEffet()->prendEffet();
		e->getEffet()->setVal(-e->getEffet()->getVal());
	}
}

void PillerPiece::poserMalediction(Joueur * cible, Malediction * m){
	m->getEffet()->setCible(cible);
	m->getEffet()->prendEffet();
	joueur->getJeu()->defausser(m);
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
