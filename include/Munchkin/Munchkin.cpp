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
Munchkin::Munchkin(std::string filename, int nbJoueurs):finPartie(false) {
	int i=0;
	
	//CREATION DES JOUEURS
	for(;i<nbJoueurs;++i){
		joueurs.push_back(new Joueur(this,i));
	}
	courant=*joueurs.begin();
	courant->setEtat(courant->getDebut());
	
	//CREATION DES CARTES
	
	//Cartes Porte
	piochePorte.push_back(new Monstre("Rat Muscle",new Effet(-1, new PerteGainNiv()),0,2));
	piochePorte.push_back(new Monstre("Manticor-nithorynque",new Effet(-2, new PerteGainNiv()),6,1));
	piochePorte.push_back(new Malediction("Canard de l'appocalypse","Les avanturiers malins ne ramassent pas de canard dans les donjon, perdez 2 niveaux",new Effet(-2, new PerteGainNiv())));
	//piochePorte.push_back(new Malediction("Vraiment trop injuste !","Perdez l'objet qui vous donne le plus haut bonus",new Effet(0, new PerteObjMax())));
	
	//Cartes Trésor
	piocheTresor.push_back(new Equipement("Enorme Rocher",0,3,NULL));
	piocheTresor.push_back(new Equipement("Targe d'inconscience suicidaire",400,2,NULL));
	piocheTresor.push_back(new Equipement("Epée (de) Batard(e)",400,2,NULL));
	piocheTresor.push_back(new Equipement("Tronçonneuse de la mort",600,3,NULL));
	piocheTresor.push_back(new Equipement("Casque de virilité ostentatoire",600,3,NULL));
	piocheTresor.push_back(new Equipement("Bottes de convocation d'hémoroides",400,2,NULL));
	piocheTresor.push_back(new Equipement("Bottes de deplacement frénétique","Ces bottes vous confèrent un bonus de +2 pour deguerpir",400 ,0 ,new Effet(2, new MalusBonusDeguerpir())));
	
	
	
	
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

Tresor * Munchkin::piocherTresor(){
	Tresor * res=piocheTresor.front();
	piocheTresor.erase(piocheTresor.begin());
	return res;
}

void Munchkin::changementJoueur(Joueur * j){
	unsigned int id=j->getId();
	if(id==joueurs.size()){
		courant=*joueurs.begin();
	}
	else{
		vector<Joueur*>::iterator it=joueurs.begin();
		for(unsigned int i=0;i!=id;++i){
			it++;
		}
		courant=*it;
	}
}

bool Munchkin::getFinPartie(){
	return finPartie;
}

void Munchkin::setFinPartie(bool b){
	finPartie=b;
}

std::vector<Porte*>& Munchkin::getPiochePorte(){
	return piochePorte;
}



std::vector<Tresor*>& Munchkin::getPiocheTresor(){
	return piocheTresor;
}

std::vector<Carte*>& Munchkin::getDefausse(){
	return defausse;
}

Joueur * Munchkin::getCourant(){
	return courant;
}
