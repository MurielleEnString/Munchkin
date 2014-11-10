/**
 * \file Munchkin.cpp
 * \brief implementation classe Munchkin
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
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
	int i;
	
	
	 
	//CREATION DES JOUEURS
	for(i=0;i<nbJoueurs;++i){
		joueurs.push_back(new Joueur(this,i, new Race(NULL,NULL,"Humain","")));
	}
	
	courant=*joueurs.begin();
	courant->setEtat(courant->getDebut());
	courant->getMain().push_back(new Potion("Cotion de Ponfusion",NULL, 100,3));
	//courant->setNiveau(5);
	
	//CREATION DES CARTES
	
	//Cartes Porte
	piochePorte.push_back(new Monstre("Rat Muscle",new Effet(-1, new PerteGainNiv()),2,3));
	piochePorte.push_back(new Race(new Effet(1,new CarteSupMain()),NULL,"Nain",""));
	piochePorte.push_back(new Malediction("Canard de l'appocalypse","Les avanturiers malins ne ramassent pas de canard dans les donjon, perdez 2 niveaux",new Effet(-2, new PerteGainNiv())));
	piochePorte.push_back(new Monstre("Manticor-nithorynque",new Effet(-2, new PerteGainNiv()),6,1));
	
	piochePorte.push_back(new Race(new Effet(1,new MalusBonusDeguerpir()),NULL,"Elfe",""));
	
	//piochePorte.push_back(new Malediction("Vraiment trop injuste !","Perdez l'objet qui vous donne le plus haut bonus",new Effet(0, new PerteObjMax())));
	
	
	
	
	
	
	//Cartes Trésor
	//piocheTresor.push_back(new Potion("Cotion de Ponfusion",NULL, 100,3));
	piocheTresor.push_back(new Chaussure("Bottes de deplacement frénétique","Ces bottes vous confèrent un bonus de +2 pour deguerpir",400 ,0 ,new Effet(2, new MalusBonusDeguerpir())));
	piocheTresor.push_back(new Main("Enorme Rocher",0,3,NULL,2));
	piocheTresor.push_back(new Main("Targe d'inconscience suicidaire",400,2,NULL));
	piocheTresor.push_back(new Main("Epée (de) Batard(e)",400,2,NULL));
	piocheTresor.push_back(new Main("Tronçonneuse de la mort",600,3,NULL,2));
	piocheTresor.push_back(new Main("Enclume",0,3,NULL,2));
	piocheTresor.push_back(new Main("Lance de 3.50m",200,1,NULL,2));
	piocheTresor.push_back(new Main("Tondeuse à gazon",600,3,NULL,2));
	piocheTresor.push_back(new CouvreChef("Casque de virilité ostentatoire",600,3,NULL));
	piocheTresor.push_back(new CouvreChef("Casque de courage",200,1,NULL));
	piocheTresor.push_back(new Chaussure("Bottes de convocation d'hémoroides",400,2,NULL));
	piocheTresor.push_back(new Chaussure("Bottes de pas de deux",400,2,NULL));
	piocheTresor.push_back(new Armure("Armure de flammes",400,2,NULL));
	piocheTresor.push_back(new Armure("Armure de cuir",200,1,NULL));
	piocheTresor.push_back(new Equipement("Genouilleres perforantes",200,1,NULL));
	piocheTresor.push_back(new Armure("Armure de gluante",200,1,NULL));
	
	//Melange des pioches
	random_shuffle(piochePorte.begin(), piochePorte.end());
	random_shuffle(piocheTresor.begin(), piocheTresor.end());
	
	
	
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
	while(!joueurs.empty()){
		delete joueurs.back();
		joueurs.pop_back();
	}
	while(!defausse.empty()){
		delete defausse.back();
		defausse.pop_back();
	}
	while(!piochePorte.empty()){
		delete piochePorte.back();
		piochePorte.pop_back();
	}
	while(!piocheTresor.empty()){
		delete piocheTresor.back();
		piocheTresor.pop_back();
	}
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
		random_shuffle(piochePorte.begin(), piochePorte.end());
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
		random_shuffle(piocheTresor.begin(), piocheTresor.end());
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
	if(id>=joueurs.size()-1){
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

std::vector<Joueur*>& Munchkin::getJoueurs(){
	return joueurs;
}
