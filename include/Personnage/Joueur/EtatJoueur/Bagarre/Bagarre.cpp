#include "Bagarre.hpp"

Bagarre::Bagarre(Joueur *j):EtatJoueur(j){
}


void Bagarre::combattre(Monstre * m){
	//Envoie signal aux autres joueurs... ou pas !
	if(calculForceJoueur()>calculForceMonstre(m)){
		for(int i=0;i<m->getTresors();i++){
			cout<<"Vous gagnez le combat"<<endl;
			joueur->getMain().push_back(joueur->getJeu()->getPiocheTresor().back());
			joueur->getJeu()->getPiocheTresor().pop_back();
			joueur->setNiv(joueur->getNiveau()+m->getNbNiv());
			joueur->getJeu()->getDefaussePorte().push_back((Porte*)m);
			joueur->setBonus(0);
		}
	}
	else{
		cout<<"Vous perdez le combat"<<endl;
		
		//Si pose de bonus => combattre(m);
		//Sinon deguerpir();
		
	}
	joueur->setEtat((EtatJoueur*)joueur->getFin());	
}


int Bagarre::calculForceJoueur(){
	int f=0;
	for(vector<Equipement*>::iterator i=joueur->getEquipe().begin(); i!=joueur->getEquipe().end();++i){
		f=f+(*i)->getBonus();
	}
	return f+joueur->getBonus();+joueur->getNiveau();
}

int Bagarre::calculForceMonstre(Monstre * m){
	return m->getNiveau()+m->getBonus();
}





void Bagarre::deguerpir(Monstre * m){
	srand(time(NULL));
	int de=rand()%6+1;
	cout<<"Vous lancez le dé et faites : "<<de<<endl;
	if(de+2-6>0){
		cout<<"Vous arrivez à déguerpir"<<endl;
	}
	else{
		cout<<"Le monstre vous attrape"<<endl;
		//m->INCIDENT FACHEUX(joueur)
	}
	joueur->getJeu()->getDefaussePorte().push_back((Porte*)m);
}

void Bagarre::poserPotion(Personnage * p){
	
}
