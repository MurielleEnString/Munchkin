#include "Armure.hpp"

Armure::Armure(std::string n, int p,int b, Effet * e) : Equipement(n,p,b,e) {}
Armure::Armure(std::string n, std::string d, int p,int b, Effet * e) : Equipement(n,d,p,b,e) {}

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
