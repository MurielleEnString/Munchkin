#include "Bagarre.hpp"

Bagarre::Bagarre(Joueur *j):EtatJoueur(j){}
Bagarre::~Bagarre(){}

bool Bagarre::combattre(Monstre * m){
	//Envoie signal aux autres joueurs... ou pas !
	cout<<"bagarre"<<endl;
	if(calculForceJoueur()>calculForceMonstre(m)){
		for(int i=0;i<m->getTresors();i++){
			cout<<"Vous gagnez le combat"<<endl;
			joueur->getMain().push_back(joueur->getJeu()->getPiocheTresor().back());
			joueur->getJeu()->getPiocheTresor().pop_back();
			
		}
		joueur->setNiv(joueur->getNiveau()+m->getNbNiv());
		joueur->getJeu()->getDefausse().push_back((Carte*)m);
		joueur->setBonus(0);
		joueur->setEtat((EtatJoueur*)joueur->getFin());
		if(joueur->getNiv()>=10){
			joueur->getJeu()->setFinPartie(true);
		}
	}
	else{
		cout<<"Vous perdez le combat"<<endl;
		return false;
				
	}
	return false;
		
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
	if(de+joueur->getValDeguerpir()-6>0){
		cout<<"Vous arrivez à déguerpir"<<endl;
	}
	else{
		cout<<"Le monstre vous attrape"<<endl;
		m->getEffet()->setCible(joueur);
		m->getEffet()->prendEffet();
	}
	joueur->getJeu()->getDefausse().push_back((Carte*)m);
	joueur->setBonus(0);
	joueur->setEtat((EtatJoueur*)joueur->getFin());
}




void Bagarre::poserPotion(Personnage * p, Potion * po){
	if(po->getEffet()!=NULL){
		po->getEffet()->setCible(p);
	}
	p->setBonus(p->getBonus()+po->getBonus());
}

void Bagarre::changerRace(Race * r){
	cout<<"Vous ne pouvez pas changer de race"<<endl;
}

