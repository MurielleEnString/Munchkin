/*
  Fichier Tresor.cpp
  D�finition des m�thodes de Tresor
  Auteur : LE CORVEC Quentin C�dric Bois
*/

/****************************************************************************************************/

#include "Tresor.hpp"

/****************************************************************************************************/

/****************************************************************************************************/
/**********          Constructeur                                                          **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//M�thode : Tresor(std::string n, Effet * e, int p):Carte(n)
//Param�tre : Aucun
//Pr�condition : Aucune
//Postcondition : Aucune
//Description : Constructeur par d�faut
////////////////////////////////////////////////////////////////////////////////////////////////////
Tresor::Tresor(std::string n, Effet * e, int p):Carte(n, e) {
   prix = p;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//M�thode : Tresor(std::string n, std::string d, Effet * e, int p) : Carte(n, d)
//Param�tre : Aucun
//Pr�condition : Aucune
//Postcondition : Aucune
//Description : Constructeur
////////////////////////////////////////////////////////////////////////////////////////////////////
Tresor::Tresor(std::string n, std::string d, Effet * e, int p) : Carte(n, d, e) {
   prix = p;
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
Tresor::~Tresor() {
}

/****************************************************************************************************/
/**********          Accesseurs                                                            **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//M�thode : estVide() const
//Param�tre : Aucun
//Pr�condition : Aucune
//Postcondition : Aucune
//Description : Affiche la carte
////////////////////////////////////////////////////////////////////////////////////////////////////


//void Tresor::Tresor() const {
//}


/****************************************************************************************************/
/**********          Mutateurs                                                             **********/
/****************************************************************************************************/



/****************************************************************************************************/
