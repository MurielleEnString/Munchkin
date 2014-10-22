#include "PerteGainNiv.hpp"

void PerteGainNiv::comp(Personnage * p, int n){
	if(typeid(*p )==typeid(Joueur)){
		if(p->getNiveau()+n>9){
			cout<<"Vous devez gagner le dernier niveau en combattant un monstre"<<endl;
			((Joueur*)p)->setNiv(9);
		}
		else if(p->getNiveau()+n>=1){
			((Joueur*)p)->setNiv(((Joueur*)p)->getNiveau()+n);
		}
		else{
			((Joueur*)p)->setNiv(1);
		}
	}
	
}
