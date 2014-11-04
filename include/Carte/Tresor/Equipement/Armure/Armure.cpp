#include "Armure.hpp"

void Armure::equiper(Joueur * j){
	vector<Equipement*>::iterator it=j->getBagage().begin();
	while((*it)->compare(this) || it!=j->getBagage().end()){
		++it;
	}
	if((*it)->compare(this)){
		j->getBagage().erase(it);
		if(j->getTorse()!=NULL){
			j->getBagage().push_back(j->getTorse());
		}
		j->setTorse(this);
	}
}
