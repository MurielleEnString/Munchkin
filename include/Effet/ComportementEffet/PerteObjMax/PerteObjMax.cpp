#include "PerteObjMax.hpp"

void comp(Personnage * p, int n){
	if(typeid(*p )==typeid(Joueur)){
		Equipement * e=(*((Joueur*)p)->getEquipe().begin());
		int it=0,max;
		vector<Equipement*>::iterator i;
		for(i=((Joueur*)p)->getEquipe().begin();i!=((Joueur*)p)->getEquipe().end();++i){
			if((*i)->getBonus()>e->getBonus()){
				max=it;
				e=*i;
			}
			++it;
		}
		i=((Joueur*)p)->getEquipe().begin();
		((Joueur*)p)->getJeu()->getDefausse().push_back((*i+max));
		((Joueur*)p)->getEquipe().erase(i+max);
	}
}
		
		
