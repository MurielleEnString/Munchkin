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
	
	cout<<"Vous ne pouvez pas changer de Race maintenant"<<endl;
	/*if(joueur->getRace()->Getnom()=="Humain"){
		delete joueur->getRace();
	}
	else{
		Effet * e=joueur->getRace()->getEffet();
		e->setVal(-e->getVal());
		e->prendEffet();
		joueur->getJeu()->getDefausse().push_back(joueur->getRace());
		
	}
	joueur->setRace(r);
	joueur->getRace()->poser(joueur);*/
}

void EtatJoueur::poseEquipement(Equipement * e){
	cout<<"Vous ne pouvez pas changer votre équipement maintenant"<<endl;
	/*joueur->getBagage().push_back(e);*/
	
}

void EtatJoueur::equiper(Equipement * e){
	cout<<"Vous ne pouvez pas changer votre équipement maintenant"<<endl;
	/*vector<Equipement*>::iterator i=joueur->getBagage().begin();
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
	joueur->getEquipe().push_back(e);*/
		

}

void EtatJoueur::desequiper(Equipement * e){
	cout<<"Vous ne pouvez pas changer votre équipement maintenant"<<endl;
	/*
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
	joueur->getBagage().push_back(e);*/
}

bool EtatJoueur::combattre(Monstre * m){
	cout<<"Vous ne pouvez pas poser de monstre maintenant"<<endl;
	return false;
}

void EtatJoueur::poserMalediction(Joueur * cible, Malediction * m){
	cout<<"Vous ne pouvez pas poser de malediction maintenant"<<endl;
	
	//Appliquer malediction
	//joueur->getJeu()->getDefausse().push_back(m);
}

void EtatJoueur::poserPotion(Personnage * p, Potion * po){
	cout<<"impossible de poser une potion maintenant"<<endl;
}

void EtatJoueur::vendreObjets(vector<Tresor*> * sacAvendre){
	
	cout<<"Vous ne pouvez pas vendre d'objet maintenant"<<endl;
	/*int somme=0;
	
	vector<Tresor *>::iterator i;
	for(i=sacAvendre->begin();i!=sacAvendre->end();++i){
		somme+=(*i)->getPrix();
		joueur->getJeu()->getDefausse().push_back(*i);
	}
	delete sacAvendre;
	somme=somme/1000;
	if(joueur->getNiv()+somme>9) joueur->setNiv(9);
	else joueur->setNiv(joueur->getNiv()+somme);*/
}
void EtatJoueur::deguerpir(Monstre * m){
	cout<<"Vous ne pouvez pas deguerpir si vous n'êtes pas poursuivi"<<endl;
}

void EtatJoueur::defausserCarte(Carte * c){
	cout<<"Vous ne pouvez pas défausser de carte maintenant"<<endl;	
}
void EtatJoueur::finirTour(){
	cout<<"Ce n'est pas le moment de terminer le tour !"<<endl;
}
