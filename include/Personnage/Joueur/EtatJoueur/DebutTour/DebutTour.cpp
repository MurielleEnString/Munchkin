#include "DebutTour.hpp"

DebutTour::DebutTour(Joueur * j):EtatJoueur(j){
}

void DebutTour::piocherPorteFaceVisible(){
	joueur->setEtat(joueur->getOuvrirLaPorte());
	joueur->getEtat()->piocherPorteFaceVisible();
}


