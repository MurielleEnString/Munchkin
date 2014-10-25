#include "PerteGainNiv.hpp"

void PerteGainNiv::comp(Personnage * p, int n){
	if(typeid(*p )==typeid(Joueur)){
		if(p->getNiveau()+n>9){
			cout<<"Vous devez gagner le dernier niveau en combattant un monstre"<<endl;
			((Joueur*)p)->setNiveau(9);
		}
		else if(p->getNiveau()+n>=1){
			((Joueur*)p)->setNiveau(((Joueur*)p)->getNiveau()+n);
		}
		else{
			((Joueur*)p)->setNiveau(1);
		}
	}
	
}
