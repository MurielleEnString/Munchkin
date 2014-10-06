#include "OuvrirPorte.hpp"

OuvrirPorte::OuvrirPorte(Joueur *j):EtatJoueur(j){
	combat=false;
}

void OuvrirPorte::piocherFaceVisible(){
	/*si malediction : effet malediction
	 * sinon, si monstre -> combat
	 * 		combat=true
	 * 			
	 * sinon, mettre ,en main
	 * if(combat){
	 * 		fin de tour
	 * }
	 * else{
	 * 	tour.setPhase(tour.getPiller());
	 * ou
	 * 	tour.setPhase(tour.getBagarre());
	 * }
	 
	 tour*/
}
