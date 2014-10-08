#include "OuvrirPorte.hpp"

OuvrirPorte::OuvrirPorte(Joueur *j):EtatJoueur(j){
	
}

void OuvrirPorte::piocherFaceVisible(){
	Carte * c=joueur->getJeu()->piocherPorte();
	cout<<"J'ai pioché "<<c->Getnom()<<endl;
	if(typeid(*c )==typeid(Monstre)){
		
	}
	else{ 
		if(typeid(*c )==typeid(Malediction)){
			
			
			
		}
		else{
			joueur->getMain().push_back(c);
		}
	}
	//if(typeid(c)
	
	//joueur->getMain().push_back(c);
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
