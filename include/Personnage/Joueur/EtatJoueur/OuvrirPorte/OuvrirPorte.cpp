#include "OuvrirPorte.hpp"

OuvrirPorte::OuvrirPorte(Joueur *j):EtatJoueur(j){}

void OuvrirPorte::piocherPorteFaceVisible(){
	
	
	
	Porte * c=joueur->getJeu()->getPiochePorte().front();
	
	cout<<"J'ai pioché "<<c->Getnom()<<endl;
	cout<<c->type()<<" "<<endl;
	
	/*if(typeid(*c )==typeid(Monstre)){
		cout<<"c'est un monstre"<<endl;
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
	}*/
	
}
