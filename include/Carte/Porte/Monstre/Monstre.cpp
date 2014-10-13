/*
  Fichier Monstre.cpp
  D�finition des m�thodes de Monstre
  Auteur : LE CORVEC Quentin C�dric Bois
*/

/****************************************************************************************************/

#include "Monstre.hpp"

/****************************************************************************************************/


/****************************************************************************************************/
/**********          Constructeur                                                          **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//M�thode : Monstre(std::string nom, Effet * e, int niv, int nbT):Porte(nom), Personnage(niv)
//Param�tre : Aucun
//Pr�condition : Aucune
//Postcondition : Aucune
//Description : Constructeur par d�faut
////////////////////////////////////////////////////////////////////////////////////////////////////
Monstre::Monstre(std::string nom, Effet * e, int niv, int nbT):Porte(nom, e), Personnage(niv){
	tresors=nbT;
	nbNiv=1;

}

////////////////////////////////////////////////////////////////////////////////////////////////////
//M�thode : Monstre(std::string nom, Effet * e, int niv, int nbT, int nbN):Porte(nom), Personnage(niv)
//Param�tre : Aucun
//Pr�condition : Aucune
//Postcondition : Aucune
//Description : Constructeur
////////////////////////////////////////////////////////////////////////////////////////////////////
Monstre::Monstre(std::string nom, Effet * e, int niv, int nbT, int nbN):Porte(nom,e), Personnage(niv) {
	tresors=nbT;
	nbNiv=nbN;
}

/****************************************************************************************************/
/**********          Destructeur                                                           **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//M�thode : ~Monstre()
//Param�tre : Aucun
//Pr�condition : Aucune
//Postcondition : Aucune
//Description : Destructeur
////////////////////////////////////////////////////////////////////////////////////////////////////
Monstre::~Monstre() {
}

/****************************************************************************************************/

int Monstre::getTresors(){
	return tresors;
}

int Monstre::getNbNiv(){
	return nbNiv;
}
