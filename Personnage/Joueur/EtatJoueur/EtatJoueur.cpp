#include "EtatJoueur.hpp"


EtatJoueur::EtatJoueur(Joueur * j){
	joueur=j;
}

void EtatJoueur::poseEquipement(Equipement e){
	vector<Equipement> * v=joueur->getBagage();
}

void EtatJoueur::equiper(Equipement e){
	int i=0;
	//while(joueur->bagage[i]!=e){
		i++;
	//}
		

}
