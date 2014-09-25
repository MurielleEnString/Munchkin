#include "TourDeJeu.hpp"

TourDeJeu::TourDeJeu(){
	ouvrirLaPorte=new PhasesTour(this);
	piller=new PhasesTour(this);
	bagarre=new PhasesTour(this);
	charite=new PhasesTour(this);
}


void TourDeJeu::setPhase(PhasesTour * p){
	phase_=p
}
PhasesTour * TourDeJeu::getOuvrirLaPorte(){
	return ouvrirLaPorte;
}
PhasesTour * TourDeJeu::getPiller(){
	return piller;
}
PhasesTour * TourDeJeu::getBagarre(){
	return bagarre;
}
PhasesTour * TourDeJeu::getCharite(){
	return charite;
}
