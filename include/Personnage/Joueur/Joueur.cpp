/*
  Fichier Joueur.cpp
  Définition des méthodes de Joueur
  Auteur : LE CORVEC Quentin C�dric Bois
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
Joueur::Joueur(Munchkin * j):Personnage() {
	race = new Race(new Effet(0,new MalusBonus()),NULL,"Humain","");
	valDeguerpir=2;
	nbCartesMain=5;
	debut= new DebutTour(this);
	ouvrirLaPorte=new OuvrirPorte(this);
	piller=new PillerPiece(this);
	bagarre=new Bagarre(this);
	fin=new FinTour(this);
	attente=new Attente(this);
	race=NULL;
	jeu=j;
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
}


/****************************************************************************************************/
/**********          Mutateurs                                                             **********/
/****************************************************************************************************/

void Joueur::setNiv(int n){
	niveau=n;
}

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

vector<Equipement*>  Joueur::getBagage(){
	return bagage;
	
}
vector<Equipement*>  Joueur::getEquipe(){
		return equipe;
}

vector<Carte*>  Joueur::getMain(){
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

