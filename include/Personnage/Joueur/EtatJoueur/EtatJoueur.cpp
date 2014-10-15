#include "EtatJoueur.hpp"


EtatJoueur::EtatJoueur(Joueur * j): joueur(j){
}

void EtatJoueur::piocherPorteFaceVisible(){
	cout<<"Vous ne pouvez pas piocher pour l'instant"<<endl;
}

void EtatJoueur::piocherPorteFaceCache(){
	cout<<"Vous ne pouvez pas piocher pour l'instant"<<endl;
}	

void EtatJoueur::changerRace(Race * r){
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

void EtatJoueur::poseEquipement(Equipement * e){
	joueur->getBagage().push_back(e);
	
}

void EtatJoueur::equiper(Equipement * e){
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

void EtatJoueur::desequiper(Equipement * e){
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

bool EtatJoueur::combattre(Monstre * m){
	cout<<"Vous ne pouvez pas poser de monstre maintenant"<<endl;
	return false;
}

void EtatJoueur::poserMalediction(Joueur * cible, Malediction * m){
	//Appliquer malediction
	joueur->getJeu()->getDefausse().push_back(m);
}

void EtatJoueur::poserPotion(Personnage * p, Potion * po){
	cout<<"impossible de poser une potion maintenant"<<endl;
}

void EtatJoueur::defausserCarte(Carte * c){
	cout<<"Vous ne pouvez pas défausser de carte maintenant"<<endl;	
}
void EtatJoueur::finirTour(){
	cout<<"Ce n'est pas le moment de terminer le tour !"<<endl;
}
