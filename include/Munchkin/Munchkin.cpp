/**
 * \file Munchkin.cpp
 * \brief implementation classe Munchkin
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


/****************************************************************************************************/

#include "Munchkin.hpp"

/****************************************************************************************************/

int myrandom (int i) { return std::rand()%i;}


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
	std::srand ( unsigned ( std::time(0) ) );

	
	 
	
	
	
	//CREATION DES CARTES
	FabriqueCarte * fp=new FabriquePorte();
	FabriqueCarte * ft=new FabriqueTresor();
	vector<string> champs;
	string ligne;
	string mot="";
	string id;
	string nom;
	string description;
	filename="Cartes.txt";
  

	std::ifstream ifs(filename.c_str());
	// filename est le nom du ficher de cartes

	if(ifs) {
		while (getline(ifs, ligne)) {
			mot="";
			champs=fp->decompString(ligne);
			if(champs.size()>0){
				if(champs.front()=="Equipement" || champs.front()=="Potion" || champs.front()=="Armure" || champs.front()=="Chaussure" || champs.front()=="Main" || champs.front()=="CouvreChef"){
					piocheTresor.push_back((Tresor*)ft->fabriquerCarte(champs));
				}
				
				else if(champs.front()=="Malediction" || champs.front()=="Monstre" || champs.front()=="Race"){
					piochePorte.push_back((Porte*)fp->fabriquerCarte(champs));
				}
			}
		}
	}
		
	//Melange des pioches
	random_shuffle(piochePorte.begin(), piochePorte.end(), myrandom);
	random_shuffle(piocheTresor.begin(), piocheTresor.end(),myrandom);
	
	//CREATION DES JOUEURS
	for(i=0;i<nbJoueurs;++i){
		joueurs.push_back(new Joueur(this,i, new Race(NULL,NULL,"Humain","")));
	}
	joueurs.front()->setNiveau(7);
	
	for(vector<Joueur*>::iterator it=joueurs.begin();it!=joueurs.end();++it){
		(*it)->getMain().push_back(piocherPorte());
		(*it)->getMain().push_back(piocherPorte());
		(*it)->getMain().push_back(piocherTresor());
		(*it)->getMain().push_back(piocherTresor());
	}
	
	courant=joueurs.front();
	courant->setEtat(courant->getDebut());
	
	
	delete fp;
	delete ft;
  
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

		std::srand ( unsigned ( std::time(0) ) );

		for(i=defausse.begin();i!=defausse.end();++i){
			if(typeid((**i))==typeid(Malediction) || typeid((**i))==typeid(Monstre) || typeid((**i))==typeid(Race)){
				piochePorte.push_back((Porte*)*i);
				defausse.erase(i);
				i--;
			}
		}

		random_shuffle(piochePorte.begin(), piochePorte.end(),myrandom);
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

		std::srand ( unsigned ( std::time(0) ) );

		vector<Carte*>::iterator i;
		for(i=defausse.begin();i!=defausse.end();++i){
			if(typeid((**i))==typeid(Equipement) || typeid((**i))==typeid(Potion)){
				piocheTresor.push_back((Tresor*)*i);
				defausse.erase(i);
				i--;
			}
		}

		random_shuffle(piocheTresor.begin(), piocheTresor.end(),myrandom);

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
