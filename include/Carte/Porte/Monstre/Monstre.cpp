/*
  Fichier Monstre.cpp
  Définition des méthodes de Monstre
  Auteur : LE CORVEC Quentin Cédric Bois
*/

/****************************************************************************************************/

#include "Monstre.hpp"

/****************************************************************************************************/


/****************************************************************************************************/
/**********          Constructeur                                                          **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//Méthode : Monstre(std::string nom, Effet * e, int niv, int nbT):Porte(nom), Personnage(niv)
//Paramètre : Aucun
//Précondition : Aucune
//Postcondition : Aucune
//Description : Constructeur par défaut
////////////////////////////////////////////////////////////////////////////////////////////////////
Monstre::Monstre(std::string nom, Effet * e, int niv, int nbT):Porte(nom, e), Personnage(niv){
	tresors=nbT;
	nbNiv=1;

}

////////////////////////////////////////////////////////////////////////////////////////////////////
//Méthode : Monstre(std::string nom, Effet * e, int niv, int nbT, int nbN):Porte(nom), Personnage(niv)
//Paramètre : Aucun
//Précondition : Aucune
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
//Méthode : ~Monstre()
//Paramètre : Aucun
//Précondition : Aucune
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
