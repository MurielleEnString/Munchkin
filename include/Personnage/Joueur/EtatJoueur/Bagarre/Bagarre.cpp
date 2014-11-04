/**
 * \file Bagarre.cpp
 * \brief implémentation classe Bagarre
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */



#include "Bagarre.hpp"

Bagarre::Bagarre(Joueur *j):EtatJoueur(j){}
Bagarre::~Bagarre(){}

void Bagarre::combattre(Monstre * m){
	
	mons=m;
	cout<<"Le monstre a une force de : "<<calculForceMonstre(m)<<endl;
	cout<<"Vous avez une force de : "<<calculForceJoueur()<<endl;
	if(calculForceJoueur()>calculForceMonstre(m)){
		cout<<"Vous gagnez le combat"<<endl;
		for(int i=0;i<m->getTresors();i++){
			
			Tresor * recomp=joueur->getJeu()->piocherTresor();
			joueur->getMain().push_back(recomp);			
		}
		joueur->setNiveau(joueur->getNiveau()+m->getNbNiv());
		joueur->defausser((Carte*)m);
		joueur->setBonus(0);
		joueur->setEtat((EtatJoueur*)joueur->getFin());
		if(joueur->getNiveau()>=10){
			joueur->getJeu()->setFinPartie(true);
		}
	}
	else{
		cout<<"Vous perdez le combat"<<endl;
				
	}		
}


int Bagarre::calculForceJoueur(){
	int f=0;
	for(vector<Equipement*>::iterator i=joueur->getEquipe().begin(); i!=joueur->getEquipe().end();++i){
		f=f+(*i)->getBonus();
	}
	return f+joueur->getBonus()+joueur->getNiveau();
}

int Bagarre::calculForceMonstre(Monstre * m){
	return m->getNiveau()+m->getBonus();
}





void Bagarre::deguerpir(){
	srand(time(NULL));
	int de=rand()%6+1;
	cout<<"Vous lancez le dé et faites : "<<de<<endl;
	if(de+joueur->getValDeguerpir()-6>0){
		cout<<"Vous arrivez à déguerpir"<<endl;
	}
	else{
		cout<<"Le monstre vous attrape"<<endl;
		mons->getEffet()->setCible(joueur);
		mons->getEffet()->prendEffet();
	}
	joueur->defausser((Carte*)mons);
	joueur->setBonus(0);
	joueur->setEtat((EtatJoueur*)joueur->getFin());
}




void Bagarre::poserPotion(Personnage * p, Potion * po){
	if(po->getEffet()!=NULL){
		po->getEffet()->setCible(p);
		po->getEffet()->prendEffet();
	}
	p->setBonus(p->getBonus()+po->getBonus());
	joueur->defausser(po);
	combattre(mons);
}



