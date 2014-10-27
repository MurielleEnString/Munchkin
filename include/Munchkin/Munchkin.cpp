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
	courant->getMain().push_back(new Potion("Cotion de Ponfusion",NULL, 100,3));
	
	
	//CREATION DES CARTES
	
	//Cartes Porte
	
	piochePorte.push_back(new Monstre("Rat Muscle",new Effet(-1, new PerteGainNiv()),2,2));
	piochePorte.push_back(new Monstre("Manticor-nithorynque",new Effet(-2, new PerteGainNiv()),6,1));
	//piochePorte.push_back(new Malediction("Canard de l'appocalypse","Les avanturiers malins ne ramassent pas de canard dans les donjon, perdez 2 niveaux",new Effet(-2, new PerteGainNiv())));
	//piochePorte.push_back(new Malediction("Vraiment trop injuste !","Perdez l'objet qui vous donne le plus haut bonus",new Effet(0, new PerteObjMax())));
	
	//Cartes Trésor
	piocheTresor.push_back(new Equipement("Bottes de deplacement frénétique","Ces bottes vous confèrent un bonus de +2 pour deguerpir",400 ,0 ,new Effet(2, new MalusBonusDeguerpir())));
	piocheTresor.push_back(new Equipement("Enorme Rocher",0,3,NULL));
	piocheTresor.push_back(new Equipement("Targe d'inconscience suicidaire",400,2,NULL));
	piocheTresor.push_back(new Equipement("Epée (de) Batard(e)",400,2,NULL));
	piocheTresor.push_back(new Equipement("Tronçonneuse de la mort",600,3,NULL));
	piocheTresor.push_back(new Equipement("Casque de virilité ostentatoire",600,3,NULL));
	piocheTresor.push_back(new Equipement("Bottes de convocation d'hémoroides",400,2,NULL));
	
	
	
	
	
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
	if(piochePorte.size()==0){
		vector<Carte*>::iterator i;
		for(i=defausse.begin();i!=defausse.end();++i){
			if(typeid((**i))==typeid(Malediction) || typeid((**i))==typeid(Monstre) || typeid((**i))==typeid(Race)){
				piochePorte.push_back((Porte*)*i);
				defausse.erase(i);
				i--;
			}
		}
	}
	if(piochePorte.size()==0){
		cout<<"Impossible de continuer, il n'y a plus de carte dans la pioche"<<endl;
		finPartie=true;
		return NULL;
	}
	else{
		Porte * res=piochePorte.front();
		piochePorte.erase(piochePorte.begin());
		return res;
	}
}

Tresor * Munchkin::piocherTresor(){
	if(piocheTresor.size()==0){
		vector<Carte*>::iterator i;
		for(i=defausse.begin();i!=defausse.end();++i){
			if(typeid((**i))==typeid(Equipement) || typeid((**i))==typeid(Potion)){
				piocheTresor.push_back((Tresor*)*i);
				defausse.erase(i);
				i--;
			}
		}
	}
	if(piocheTresor.size()==0){
		cout<<"Impossible de continuer, il n'y a plus de carte dans la pioche"<<endl;
		finPartie=true;
		return NULL;
	}
	else{
		Tresor * res=piocheTresor.front();
		piocheTresor.erase(piocheTresor.begin());
		return res;
	}
}

void Munchkin::defausser(Carte * c){
	defausse.push_back(c);
}

void Munchkin::changementJoueur(Joueur * j){
	unsigned int id=j->getId();
	if(id==joueurs.size()-1){
		courant=*joueurs.begin();
	}
	else{
		vector<Joueur*>::iterator it=joueurs.begin();
		for(unsigned int i=0;i!=id+1;++i){
			it++;
		}
		courant=*it;
	}
	courant->setEtat(courant->getDebut());
	cout<<"Nouv courant : " <<courant->getId()<<endl;
	cout<<joueurs.size()<<endl;
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
