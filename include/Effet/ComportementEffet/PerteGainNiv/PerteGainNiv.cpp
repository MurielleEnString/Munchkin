#include "PerteGainNiv.hpp"

void PerteGainNiv::comp(Personnage * p, int n){
	if(typeid(*p )==typeid(Joueur)){
		if((Joueur*)p)->getNiveau()+n>9){
			cout<<"Vous devez gagner le dernier niveau en combattant un monstre"<<endl;
			((Joueur*)p)->setNiv(9);
		}
		else{
			((Joueur*)p)->setNiv(((Joueur*)p)->getNiveau()+n);
		}
	}
	
}
