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
	ouvrirLaPorte=new EtatJoueur(this);
	piller=new EtatJoueur(this);
	bagarre=new EtatJoueur(this);
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
void desequiper(Equipement e){
}




/****************************************************************************************************/


void Joueur::setEtat(EtatJoueur * e){
	etat_=e;
}
EtatJoueur * Joueur::getOuvrirLaPorte(){
	return ouvrirLaPorte;
}
EtatJoueur * Joueur::getPiller(){
	return piller;
}
EtatJoueur * Joueur::getBagarre(){
	return bagarre;
}
EtatJoueur * Joueur::getCharite(){
	return charite;
}

vector<Equipement*> * Joueur::getBagage(){
	return bagage;
	
}
vector<Equipement*> * Joueur::getEquipe(){
		return equipe;
}

vector<Carte*> * Joueur::getMain(){
	return main;
}

Munchkin * Joueur::getJeu(){
	return jeu;
}
