#include "Bagarre.hpp"

Bagarre::Bagarre(Joueur *j):EtatJoueur(j){}
Bagarre::~Bagarre(){}

void Bagarre::combattre(Monstre * m){
	//Envoie signal aux autres joueurs... ou pas !
	mons=m;
	cout<<"bagarre"<<endl;
	cout<<"Le monstre a une force de : "<<calculForceMonstre(m)<<endl;
	cout<<"Vous avez une force de : "<<calculForceJoueur()<<endl;
	if(calculForceJoueur()>calculForceMonstre(m)){
		cout<<"Vous gagnez le combat"<<endl;
		for(int i=0;i<m->getTresors();i++){
			
			Tresor * recomp=joueur->getJeu()->piocherTresor();
			cout<<recomp->Getnom()<<endl;
			joueur->getMain().push_back(recomp);
			cout<<joueur->getMain().size()<<endl;			
		}
		joueur->setNiveau(joueur->getNiveau()+m->getNbNiv());
		joueur->getJeu()->getDefausse().push_back((Carte*)m);
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
	combattre(mons);
}



