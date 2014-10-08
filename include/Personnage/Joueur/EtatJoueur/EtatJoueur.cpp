#include "EtatJoueur.hpp"


EtatJoueur::EtatJoueur(Joueur * j){
	joueur=j;
}

void piocherPorteFaceVisible(){
	cout<<"Vous ne pouvez pas piocher pour l'instant"<<endl;
}

void piocherPorteFaceCache(){
	cout<<"Vous ne pouvez pas piocher pour l'instant"<<endl;
}	


void EtatJoueur::poseEquipement(Equipement * e){
	joueur->getBagage().push_back(e);
	
}

void EtatJoueur::equiper(Equipement * e){
	vector<Equipement*>::iterator i=joueur->getBagage().begin();
	while(i!=joueur->getBagage().end()){
		if((*i)->compare(e)){
			break;
		}
		i++;
	}
	joueur->getBagage().erase(i);
	joueur->getEquipe().push_back(e);
		

}

void EtatJoueur::desequiper(Equipement * e){
	vector<Equipement*>::iterator i=joueur->getEquipe().begin();
	while(i!=joueur->getEquipe().end()){
		if((*i)->compare(e)){
			break;
		}
		i++;
	}
	joueur->getEquipe().erase(i);
	joueur->getBagage().push_back(e);
}

void EtatJoueur::combattre(Monstre * m){
	cout<<"Vous ne pouvez pas poser de monstre maintenant"<<endl;
}

void EtatJoueur::poserMalediction(Joueur * cible, Malediction * m){
	//Appliquer malediction
	joueur->getJeu()->getDefaussePorte().push_back(m);
}

void EtatJoueur::poserPotion(Personnage *){
	cout<<"impossible de poser une potion maintenant"<<endl;
}

void EtatJoueur::defausserCarte(Carte * c){
	cout<<"Vous ne pouvez pas défausser de carte maintenant"<<endl;	
}
void EtatJoueur::finirTour(){
	cout<<"Ce n'est pas le moment de terminer le tour !"<<endl;
}
