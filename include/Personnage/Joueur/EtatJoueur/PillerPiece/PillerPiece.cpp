#include "PillerPiece.hpp"

PillerPiece::PillerPiece(Joueur *j):EtatJoueur(j){
}

void PillerPiece::piocherPorteFaceCache(){
	Carte * c=joueur->getJeu()->piocherPorte();
	joueur->getMain().push_back(c);
	joueur->setEtat(joueur->getFin());
}
