/*
  Fichier Munchkin.cpp
  Définition des méthodes de Munchkin
  Auteur : LE CORVEC Quentin Cédric Bois
*/

/****************************************************************************************************/

#include "Munchkin.hpp"

/****************************************************************************************************/


/****************************************************************************************************/
/**********          Constructeur                                                          **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//Méthode : Munchkin(std::string filename)
//Paramètre : Aucun
//Précondition : Aucune
//Postcondition : Aucune
//Description : Constructeur par défaut
////////////////////////////////////////////////////////////////////////////////////////////////////
Munchkin::Munchkin(std::string filename) {
/*  string ligne;
  int id
  string nom;
  string description;
  Carte c;

  std::ifstream ifs(filename.c_str());
  // filename est le nom du ficher de cartes

  if(ifs) {
    while (getline(ifs, ligne)) {
      std::istringstream iss(ligne);
      iss >> id;
      iss >> nom;
      switch(id) {
        case 1:
          c = new Monstre(nom,);
        break;

        case 2:
          c = new (nom,)
        break;

        case 3:
          c = new (nom,)
        break;

        case 4:
          c = new (nom,)
        break;

        default:
          std::cout << "ID inconnue" << std::endl;
        break;
      }
    }
  }*/
}


/****************************************************************************************************/
/**********          Destructeur                                                           **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//Méthode : ~Munchkin()
//Paramètre : Aucun
//Précondition : Aucune
//Postcondition : Aucune
//Description : Destructeur
////////////////////////////////////////////////////////////////////////////////////////////////////
Munchkin::~Munchkin() {
}

/****************************************************************************************************/
Porte * Munchkin::piocherPorte(){
	Porte * res=piochePorte.front();
	piochePorte.erase(piochePorte.begin());
	return res;
}
std::vector<Porte*> Munchkin::getPiochePorte(){
	return piochePorte;
}

std::vector<Porte*> Munchkin::getdefaussePorte(){
		return defaussePorte;
}

std::vector<Tresor*> Munchkin::getPiocheTresor(){
	return piocheTresor;
}

std::vector<Tresor*> Munchkin::getDefausseTresor(){
	return defausseTresor;
}

