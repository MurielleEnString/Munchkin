/*
  Fichier Equipement.cpp
  D�finition des m�thodes de Equipement
  Auteur : LE CORVEC Quentin, C�dric boite
*/

/****************************************************************************************************/

#include "Equipement.hpp"

/****************************************************************************************************/

/****************************************************************************************************/
/********** Constructeur                                                                   **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//M�thode : Equipement(std::string n, int p, Effet * e) : Tresor(n,e,p)
//Param�tre : Aucun
//Pr�condition : Aucune
//Postcondition : Aucune
//Description : Constructeur par d�faut
////////////////////////////////////////////////////////////////////////////////////////////////////
Equipement::Equipement(std::string n, int p, Effet * e) : Tresor(n,e,p) {
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//M�thode : Equipement(std::string n, std::string d, int p, Effet * e) : Tresor(n, d, e, p)
//Param�tre : Aucun
//Pr�condition : Aucune
//Postcondition : Aucune
//Description : Constructeur
////////////////////////////////////////////////////////////////////////////////////////////////////
Equipement::Equipement(std::string n, std::string d, int p, Effet * e) : Tresor(n, d, e, p) {
}

/****************************************************************************************************/
/********** Destructeur **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//M�thode : ~Equipement()
//Param�tre : Aucun
//Pr�condition : Aucune
//Postcondition : Aucune
//Description : Destructeur
////////////////////////////////////////////////////////////////////////////////////////////////////
Equipement::~Equipement() {
}

/****************************************************************************************************/
/********** Accesseurs **********/
/****************************************************************************************************/


////////////////////////////////////////////////////////////////////////////////////////////////////
//M�thode : estVide() const
//Param�tre : Aucun
//Pr�condition : Aucune
//Postcondition : Aucune
//Description :
////////////////////////////////////////////////////////////////////////////////////////////////////

//void Equipement::Equipement() const {
//}

/****************************************************************************************************/
/********** Mutateurs **********/
/****************************************************************************************************/



/****************************************************************************************************/



