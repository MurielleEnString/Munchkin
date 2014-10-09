#include "FinTour.hpp"

FinTour::FinTour(Joueur * j):EtatJoueur(j){
	}

void FinTour::finirTour(){
	if(joueur->getMain().size()<6){
		joueur->setEtat((EtatJoueur*)joueur->getAttente());
	}
	else{
		cout<<"Vous devez défausser de cartes pour n'en avoir plus que 5 en main"<<endl;
	}
}

void FinTour::defausserCarte(Carte * c){
	vector<Carte*>::iterator i=joueur->getMain().begin();
	while(i!=joueur->getMain().end()){
		if((*i)->compare(c)){
			break;
		}
		i++;
	}
	joueur->getMain().erase(i);
	//AJOUT DE LA CARTE A LA DEFAUSSE
}
