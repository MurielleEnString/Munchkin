#include "MalusBonusDeguerpir.hpp"

void MalusBonusDeguerpir::comp(Personnage * p, int n){
	if(typeid(*p )==typeid(Joueur)){
		((Joueur*)p)->setValDeguerpir(((Joueur*)p)->getValDeguerpir()+n);
	}
}
