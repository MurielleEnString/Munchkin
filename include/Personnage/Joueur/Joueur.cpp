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
	debut= new DebutTour(this);
	ouvrirLaPorte=new OuvrirPorte(this);
	piller=new PillerPiece(this);
	bagarre=new Bagarre(this);
	charite=new EtatJoueur(this);
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
}


/****************************************************************************************************/
/**********          Mutateurs                                                             **********/
/****************************************************************************************************/



////////////////////////////////////////////////////////////////////////////////////////////////////
//Méthode : desequiper()
//Paramètre : Aucun
//Précondition : Aucune
//Postcondition : Aucune
//Description : 
////////////////////////////////////////////////////////////////////////////////////////////////////





/****************************************************************************************************/


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
EtatJoueur * Joueur::getCharite(){
	return charite;
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
