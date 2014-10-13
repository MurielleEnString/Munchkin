/*
  Fichier Carte.cpp
  D�finition des m�thodes de Carte
  Auteur : LE CORVEC Quentin C�dric Bois
*/

/****************************************************************************************************/

#include "Carte.hpp"

/****************************************************************************************************/


/****************************************************************************************************/
/**********          Constructeur                                                          **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//M�thode : Carte(std::string n)
//Param�tre : Aucun
//Pr�condition : Aucune
//Postcondition : Aucune
//Description : Constructeur par d�faut
////////////////////////////////////////////////////////////////////////////////////////////////////
Carte::Carte(std::string n, Effet * e) {
  nom = n;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//M�thode : Carte(std::string n, std::string d)
//Param�tre : Aucun
//Pr�condition : Aucune
//Postcondition : Aucune
//Description : Constructeur
////////////////////////////////////////////////////////////////////////////////////////////////////
Carte::Carte(std::string n, std::string d, Effet * e) {
  nom = n;
  description = d;
}


/****************************************************************************************************/
/**********          Destructeur                                                           **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//M�thode : ~Carte()
//Param�tre : Aucun
//Pr�condition : Aucune
//Postcondition : Aucune
//Description : Destructeur
////////////////////////////////////////////////////////////////////////////////////////////////////
Carte::~Carte() {
}


/****************************************************************************************************/
/**********          Accesseurs                                                            **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//M�thode : Getnom() const
//Param�tre : Aucun
//Pr�condition : Aucune
//Postcondition : Aucune
//Description : Affiche la carte
////////////////////////////////////////////////////////////////////////////////////////////////////
std::string Carte::Getnom() const {
  return nom;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//M�thode : Getdescription() const
//Param�tre : Aucun
//Pr�condition : Aucune
//Postcondition : Aucune
//Description : Affiche la carte
////////////////////////////////////////////////////////////////////////////////////////////////////
std::string Carte::Getdescription() const {
  return description;
}

Effet * Carte::getEffet(){
	return e;
}

void Carte::setEffet(Effet * e){
	this->e=e;
}

/****************************************************************************************************/
/**********          Mutateurs                                                             **********/
/****************************************************************************************************/



/****************************************************************************************************/

bool Carte::compare(Carte * e){
	if(this->nom==e->Getnom()){
		return true;
	}
	return false;
}
