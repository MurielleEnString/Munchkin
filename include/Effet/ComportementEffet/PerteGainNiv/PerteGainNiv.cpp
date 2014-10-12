#include "PerteGainNiv.hpp"

void PerteGainNiv::comp(Personnage * p, int n){
	if(typeid(*p )==typeid(Joueur)){
		((Joueur*)p)->setNiv(((Joueur*)p)->getNiveau()+n);
	}
	
}
