#include "Main.hpp"


Main::Main(std::string n, int p,int b, Effet * e) : Equipement(n,p,b,e),nbMain(1) {}
Main::Main(std::string n, std::string d, int p,int b, Effet * e) : Equipement(n,d,p,b,e),nbMain(1) {}
Main::Main(std::string n, std::string d, int p,int b, Effet * e, int nb) : Equipement(n,d,p,b,e),nbMain(nb) {}
Main::Main(std::string n, int p,int b, Effet * e, int nb) : Equipement(n,p,b,e),nbMain(nb) {}

void Main::equiper(Joueur * j){
	vector<Equipement*>::iterator it=j->getBagage().begin();
	while((*it)->compare(this) || it!=j->getBagage().end()){
		++it;
	}
	if(nbMain==1){
		if((*it)->compare(this)){
			j->getBagage().erase(it);
			if(j->getMaind()!=NULL){
				if(j->getMaing()!=NULL){
					j->getBagage().push_back(j->getMaind());
					j->setMaind(this);
				}
				else{
					j->setMaing(this);
				}
			}
			else{
				j->setMaind(this);
			}
				
		}
	}
	else if(nbMain==2){
		if(j->getMaind()!=NULL){
			j->getBagage().push_back(j->getMaind());
		}
		if(j->getMaing()!=NULL){
			j->getBagage().push_back(j->getMaing());
		}
		j->setMaind(this);
		j->setMaing(this);
	}
		
}

