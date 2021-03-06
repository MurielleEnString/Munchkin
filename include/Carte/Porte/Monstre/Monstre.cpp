/**
 * \file Monstre.cpp
 * \brief implementation classe Monstre
 * \author Bois C�dric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#include "Monstre.hpp"

/****************************************************************************************************/


/****************************************************************************************************/
/**********          Constructeur                                                          **********/
/****************************************************************************************************/
Monstre::Monstre(std::string nom, Effet * e, int niv, int nbT):Porte(nom, e), Personnage(niv), tresors(nbT), nbNiv(1){}
Monstre::Monstre(std::string nom, Effet * e, int niv, int nbT, int nbN):Porte(nom,e), Personnage(niv), tresors(nbT), nbNiv(nbN) {}



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
