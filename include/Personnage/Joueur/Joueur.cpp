/**
 * \file Joueur.cpp
 * \brief impl�mentation classe Joueur
 * \author Bois C�dric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#include "Joueur.hpp"

/****************************************************************************************************/


/****************************************************************************************************/
/**********          Constructeur                                                          **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//Méthode : Joueur():Personnage()
//Paramètre : Aucun
//Précondition : Aucune
//Postcondition : Aucune
//Description : Constructeur par défaut
////////////////////////////////////////////////////////////////////////////////////////////////////
Joueur::Joueur(Munchkin * j, int i, Race * r):Personnage(), id(i),nbCartesMain(5),valDeguerpir(2),race(r),jeu(j){
	debut= new DebutTour(this);
	ouvrirLaPorte=new OuvrirPorte(this);
	piller=new PillerPiece(this);
	bagarre=new Bagarre(this);
	fin=new FinTour(this);
	attente=new Attente(this);
	etat_=attente;
	tete=NULL;
	torse=NULL;
	maing=NULL;
	maind=NULL;
	pieds=NULL;
}


/****************************************************************************************************/
/**********          Destructeur                                                           **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//Méthode : ~Joueur()
//Paramètre : Aucun
//Précondition : Aucune
//Postcondition : Aucune
//Description : Destructeur
////////////////////////////////////////////////////////////////////////////////////////////////////
Joueur::~Joueur(){
	delete debut;
	delete ouvrirLaPorte;
	delete piller;
	delete bagarre;
	delete fin;
	delete attente;
	while(!main.empty()){
		delete main.back();
		main.pop_back();
	}
	while(!equipe.empty()){
		delete equipe.back();
		equipe.pop_back();
	}
	while(!bagage.empty()){
		delete bagage.back();
		bagage.pop_back();
	}
	
	if(tete!=NULL){
		delete tete;
	}
	if(maing!=NULL){
		delete maing;
	}
	if(maind!=NULL){
		delete maind;
	}
	if(pieds!=NULL){
		delete pieds;
	}
	if(torse!=NULL){
		delete torse;
	}
	
	delete race;
}

void Joueur::defausser(Carte *c){
	jeu->defausser(c);
}

void Joueur::finTour(){
	jeu->changementJoueur(this);
}


void Joueur::equiperEquipement(Equipement * e){
	equipe.push_back(e);
}

void Joueur::equiperCouvreChef(CouvreChef * c){
		if(tete!=NULL){
			bagage.push_back(tete);
			if(tete->getEffet()!=NULL){
				tete->getEffet()->setVal(-tete->getEffet()->getVal());
				tete->getEffet()->prendEffet();
				tete->getEffet()->setVal(-tete->getEffet()->getVal());
			}
		}
		tete=c;	
}

void Joueur::equiper1Main(Main * m){
			if(maind!=NULL){
				if(maing!=NULL){
					if(maing==maind){
						maing=NULL;
					}
					bagage.push_back(maind);
					if(maind->getEffet()!=NULL){
						maind->getEffet()->setVal(-maind->getEffet()->getVal());
						maind->getEffet()->prendEffet();
						maind->getEffet()->setVal(-maind->getEffet()->getVal());
					}
					maind=m;
				}
				else{
					maing=m;
				}
			}
			else{
				maind=m;
			}
}

void Joueur::equiper2Main(Main * m){

	if(maind!=maing){
		if(maind!=NULL){
			bagage.push_back(maind);
			if(maind->getEffet()!=NULL){
				maind->getEffet()->setVal(-maind->getEffet()->getVal());
				maind->getEffet()->prendEffet();
				maind->getEffet()->setVal(-maind->getEffet()->getVal());
			}
			
		}
		if(maing!=NULL){
			bagage.push_back(maing);
			if(maing->getEffet()!=NULL){
				maing->getEffet()->setVal(-maing->getEffet()->getVal());
				maing->getEffet()->prendEffet();
				maing->getEffet()->setVal(-maing->getEffet()->getVal());
			}
		}
	}
	else{
		if(maind!=NULL){
			bagage.push_back(maind);
			if(maind->getEffet()!=NULL){
					maind->getEffet()->setVal(-maind->getEffet()->getVal());
					maind->getEffet()->prendEffet();
					maind->getEffet()->setVal(-maind->getEffet()->getVal());
			}
		}
	}
	maind=m;
	maing=m;
		
	
}

void Joueur::equiperArmure(Armure * a){
		if(torse!=NULL){
			bagage.push_back(torse);
			if(torse->getEffet()!=NULL){
				torse->getEffet()->setVal(-torse->getEffet()->getVal());
				torse->getEffet()->prendEffet();
				torse->getEffet()->setVal(-torse->getEffet()->getVal());
			}
		}
		torse=a;
}

void Joueur::equiperChaussure(Chaussure * c){
		if(pieds!=NULL){
			bagage.push_back(pieds);
			if(pieds->getEffet()!=NULL){
				pieds->getEffet()->setVal(-pieds->getEffet()->getVal());
				pieds->getEffet()->prendEffet();
				pieds->getEffet()->setVal(-pieds->getEffet()->getVal());
			}
		}
		pieds=c;
	
}
/****************************************************************************************************/
/**********          Mutateurs                                                             **********/
/****************************************************************************************************/



void Joueur::setValDeguerpir(int val){
	valDeguerpir=val;
}

int Joueur::getValDeguerpir(){
	return valDeguerpir;
}







/****************************************************************************************************/

void Joueur::setNbCartesMain(int n){
	nbCartesMain=n;
}
int Joueur::getNbCartesMain(){
	return nbCartesMain;
}

int Joueur::getId(){
	return id;
}

void Joueur::setEtat(EtatJoueur * e){
	etat_=e;
}

EtatJoueur * Joueur::getEtat(){
	return etat_;
}

DebutTour * Joueur::getDebut(){
	return debut;
}
OuvrirPorte * Joueur::getOuvrirLaPorte(){
	return ouvrirLaPorte;
}
PillerPiece * Joueur::getPiller(){
	return piller;
}
Bagarre * Joueur::getBagarre(){
	return bagarre;
}
FinTour * Joueur::getFin(){
	return fin;
}

Attente * Joueur::getAttente(){
	return attente;
}

vector<Equipement*>&  Joueur::getBagage(){
	return bagage;
	
}
vector<Equipement*>&  Joueur::getEquipe(){
		return equipe;
}

vector<Carte*>&  Joueur::getMain(){
	return main;
}

Munchkin * Joueur::getJeu(){
	return jeu;
}

Race * Joueur::getRace(){
	return race;
}

void Joueur::setRace(Race *r){
	race=r;
}

Main * Joueur::getMaing(){
	return maing;
}

void Joueur::setMaing(Main * m){
	maing=m;
}

Main * Joueur::getMaind(){
	return maind;
}
void Joueur::setMaind(Main * m){
	maind=m;
}

Armure * Joueur::getTorse(){
	return torse;
}

void Joueur::setTorse(Armure * a){
	torse=a;
}

Chaussure * Joueur::getPieds(){
	return pieds;
}

void Joueur::setPieds(Chaussure * c){
	pieds=c;
}

CouvreChef * Joueur::getTete(){
	return tete;
}

void Joueur::setTete(CouvreChef * c){
	tete=c;
}
