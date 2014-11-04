#include "CouvreChef.hpp"

void CouvreChef::equiper(Joueur * j){
	vector<Equipement*>::iterator it=j->getBagage().begin();
	while((*it)->compare(this) || it!=j->getBagage().end()){
		++it;
	}
	if((*it)->compare(this)){
		j->getBagage().erase(it);
		if(j->getTete()!=NULL){
			j->getBagage().push_back(j->getTete());
		}
		j->setTete(this);
	}
}
