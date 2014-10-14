#include "OuvrirPorte.hpp"

OuvrirPorte::OuvrirPorte(Joueur *j):EtatJoueur(j){}

void OuvrirPorte::piocherFaceVisible(){
	Carte * c=joueur->getJeu()->piocherPorte();
	cout<<"J'ai pioché "<<c->Getnom()<<endl;
	if(typeid(*c )==typeid(Monstre)){
		joueur->setEtat((EtatJoueur*)joueur->getBagarre());
		joueur->getEtat()->combattre((Monstre*)c);
		
	}
	else{ 
		if(typeid(*c )==typeid(Malediction)){
			((Malediction*)c)->getEffet()->setCible(joueur);
			((Malediction*)c)->getEffet()->prendEffet();
			joueur->getJeu()->getDefausse().push_back((Carte *)c);			
		}
		else{
			joueur->getMain().push_back(c);
		}
	}
	
}
