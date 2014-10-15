/*
  Fichier Effet.cpp
  D�finition des m�thodes de Effet
  Auteur : LE CORVEC Quentin C�dric Bois
*/

/****************************************************************************************************/

#include "Effet.hpp"

/****************************************************************************************************/

/****************************************************************************************************/
/**********          Constructeur                                                          **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//M�thode : Effet(int valeur)
//Param�tre : Aucun
//Pr�condition : Aucune
//Postcondition : Aucune
//Description : Constructeur par d�faut
////////////////////////////////////////////////////////////////////////////////////////////////////
Effet::Effet(int valeur, ComportementEffet * c){
	comp=c;
  val=valeur;
  cible=NULL;
}

/****************************************************************************************************/
/**********          Destructeur                                                           **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//M�thode : ~Tresor()
//Param�tre : Aucun
//Pr�condition : Aucune
//Postcondition : Aucune
//Description : Destructeur
////////////////////////////////////////////////////////////////////////////////////////////////////
Effet::~Effet(){
}

/****************************************************************************************************/

void Effet::prendEffet(){
	comp->comp(cible,val);
}


void Effet::setCible(Personnage * p){
	cible=p;
}

int Effet::getVal(){
	return val;
}

void Effet::setVal(int n){
	val=n;
}
