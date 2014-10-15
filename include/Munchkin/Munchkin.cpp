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
Munchkin::Munchkin(std::string filename, int nbJoueurs) {
	int i=0;
	
	//CREATION DES JOUEURS
	for(;i<nbJoueurs;++i){
		joueurs.push_back(new Joueur(this));
	}
	
	//CREATION DES CARTES
	
	//Cartes Porte
	piochePorte.push_back(new Monstre("Rat Muscle",new Effet(-1, new PerteGainNiv()),1,1));
	piochePorte.push_back(new Monstre("Manticor-nithorynque",new Effet(-2, new PerteGainNiv()),6,1));
	piochePorte.push_back(new Malediction("Canard de l'appocalypse","Les avanturiers malins ne ramassent pas de canard dans les donjon, perdez 2 niveaux",new Effet(-2, new PerteGainNiv())));
	
	
	//Cartes Trésor
	piocheTresor.push_back(new Equipement("Enorme Rocher",0,new Effet(3, new MalusBonus())));
	piocheTresor.push_back(new Equipement("Targe d'inconscience suicidaire",400,new Effet(2, new MalusBonus())));
	piocheTresor.push_back(new Equipement("Epée (de) Batard(e)",400,new Effet(2, new MalusBonus())));
	piocheTresor.push_back(new Equipement("Tronçonneuse de la mort",600,new Effet(3, new MalusBonus())));
	piocheTresor.push_back(new Equipement("Casque de virilité ostentatoire",600,new Effet(3, new MalusBonus())));
	
	
	
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



std::vector<Tresor*> Munchkin::getPiocheTresor(){
	return piocheTresor;
}

std::vector<Carte*> Munchkin::getDefausse(){
	return defausse;
}

