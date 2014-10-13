#include "Bagarre.hpp"

Bagarre::Bagarre(Joueur *j):EtatJoueur(j){}


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
		
		//A TERMINER
		
		
		
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
	if(de+joueur->getValDeguerpir()-6>0){
		cout<<"Vous arrivez à déguerpir"<<endl;
	}
	else{
		cout<<"Le monstre vous attrape"<<endl;
		m->getEffet()->setCible(joueur);
		m->getEffet()->prendEffet();
	}
	joueur->getJeu()->getDefaussePorte().push_back((Porte*)m);
}



//index -> index de la carte de la main (En Commençant à 1)
void Bagarre::poserPotion(Personnage * p, int index){
	vector<Carte *>::iterator i=joueur->getMain().begin();
	Carte * c;		
	for(;index!=1;--index){
		++i;
	}
			
	c=*i;
	if(typeid(*c )!=typeid(Malediction) /*ou potion*/){

		c->getEffet()->setCible((Personnage*)p);
		c->getEffet()->prendEffet();
		joueur->getJeu()->getDefaussePorte().push_back((Porte*)c); //Changer defausses pour défausse commune
	}
	else{
		cout<<"Vous ne pouvez pas poser cette carte maintenant"<<endl;
	}			
}

