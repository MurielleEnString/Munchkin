#include "DebutTour.hpp"

DebutTour::DebutTour(Joueur * j):EtatJoueur(j){
}

void DebutTour::piocherPorteFaceVisible(){
	Carte * c=joueur->getJeu()->piocherPorte();
	cout<<"J'ai pioché "<<c->Getnom()<<endl;
	joueur->getMain().push_back(c);
	//joueur->etat_=joueur->getOuvrirLaPorte();
}


