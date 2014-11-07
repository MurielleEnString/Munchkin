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
	
	delete race;
}

void Joueur::defausser(Carte *c){
	jeu->defausser(c);
}

void Joueur::finTour(){
	jeu->changementJoueur(this);
}


void Joueur::equiperEquipement(Equipement * e){
	vector<Equipement*>::iterator it=bagage.begin();
	if(bagage.size()!=0){
		while((*it)->compare(e) || it!=bagage.end()){
			++it;
		}
	}
	if((*it)->compare(e)){
		bagage.erase(it);
		equipe.push_back(e);
	}
}

void Joueur::equiperCouvreChef(CouvreChef * c){
	
	vector<Equipement*>::iterator it=bagage.begin();
	if(bagage.size()!=0){
		while(c->compare((CouvreChef*)(*it)) || it!=bagage.end()){
			++it;
		}
	}
	
	if(c->compare((CouvreChef*)(*it))){
		cout<<(*it)->Getnom()<<endl;
		//bagage.erase(it);
		
		if(tete!=NULL){
			
			bagage.push_back(tete);
		}
		tete=c;
	}
}

void Joueur::equiper1Main(Main * m){
	vector<Equipement*>::iterator it=bagage.begin();
	if(bagage.size()!=0){
		while(((Main *)(*it))->compare(m) || it!=bagage.end()){
			++it;
		}
	}
	if(((Main *)(*it))->compare(m)){
			bagage.erase(it);
			if(maind!=NULL){
				if(maing!=NULL){
					bagage.push_back(maind);
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
}

void Joueur::equiper2Main(Main * m){
	vector<Equipement*>::iterator it=bagage.begin();
	if(bagage.size()!=0){
		while(((Main *)(*it))->compare(m) || it!=bagage.end()){
			++it;
		}
	}
	if(((Main *)(*it))->compare(m)){
		if(maind!=NULL){
			bagage.push_back(maind);
		}
		if(maing!=NULL){
			bagage.push_back(maing);
		}
		maind=m;
		maing=m;
		
	}
}

void Joueur::equiperArmure(Armure * a){
	vector<Equipement*>::iterator it=bagage.begin();
	if(bagage.size()!=0){
		while(a->compare((Armure*)(*it)) || it!=bagage.end()){
			++it;
		}
	}
	if(a->compare((Armure*)(*it))){
		bagage.erase(it);
		if(torse!=NULL){
			bagage.push_back(torse);
		}
		torse=a;
	}
}

void Joueur::equiperChaussure(Chaussure * c){
	vector<Equipement*>::iterator it=bagage.begin();
	if(bagage.size()!=0){
		while((*it)->compare(c) || it!=bagage.end()){
			++it;
		}
	}
	if((*it)->compare(c)){
		bagage.erase(it);
		if(pieds!=NULL){
			bagage.push_back(pieds);
		}
		pieds=c;
	}
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
