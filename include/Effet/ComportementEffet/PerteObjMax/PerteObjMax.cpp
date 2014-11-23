/**
 * \file PerteObjMax.cpp
 * \brief implémentation classe PerteObjMax
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


#include "PerteObjMax.hpp"

//PerteObjMax::~PerteObjMax(){}

void PerteObjMax::comp(Personnage * p, int n){
	if(typeid(*p )==typeid(Joueur)){
		Equipement * e=NULL;
		unsigned int i;
		if(((Joueur*)p)->getEquipe().size()!=0){
			e=((Joueur*)p)->getEquipe().front();
			for(i=0;i<((Joueur*)p)->getEquipe().size()-1;++i){
				if(((Joueur*)p)->getEquipe()[i]->getBonus()>e->getBonus()){
					e=((Joueur*)p)->getEquipe()[i];
				}
			}
		}
		if(e!=NULL && ((Joueur*)p)->getTete()!=NULL){
			if(e->getBonus()<((Joueur*)p)->getTete()->getBonus()){
				e=((Joueur*)p)->getTete();
			}
		}
		else if(e==NULL){
			e=((Joueur*)p)->getTete();
		}
		
		if(e!=NULL && ((Joueur*)p)->getTorse()!=NULL){
			if(e->getBonus()<((Joueur*)p)->getTorse()->getBonus()){
				e=((Joueur*)p)->getTorse();
			}
		}
		else if(e==NULL){
			e=((Joueur*)p)->getTorse();
		}
		
		
		if(e!=NULL && ((Joueur*)p)->getPieds()!=NULL){
			if(e->getBonus()<((Joueur*)p)->getPieds()->getBonus()){
				e=((Joueur*)p)->getPieds();
			}
		}
		else if(e==NULL){
			e=((Joueur*)p)->getPieds();
		}
		
		if(e!=NULL && ((Joueur*)p)->getMaing()!=NULL){
			if(e->getBonus()<((Joueur*)p)->getMaing()->getBonus()){
				e=((Joueur*)p)->getMaing();
			}
		}
		else if(e==NULL){
			e=((Joueur*)p)->getMaing();
		}
		
		if(e!=NULL && ((Joueur*)p)->getMaind()!=NULL){
			if(e->getBonus()<((Joueur*)p)->getMaind()->getBonus()){
				e=((Joueur*)p)->getMaind();
			}
		}
		else if(e==NULL){
			e=((Joueur*)p)->getMaind();
		}
		
		
		if(e!=NULL){
			if(typeid(*e)==typeid(Chaussure)){
				((Joueur*)p)->setPieds(NULL);
				((Joueur*)p)->defausser(e);
			}
			else if(typeid(*e)==typeid(CouvreChef)){
				((Joueur*)p)->setTete(NULL);
				((Joueur*)p)->defausser(e);
			}
			else if(typeid(*e)==typeid(Armure)){
				((Joueur*)p)->setTorse(NULL);
				((Joueur*)p)->defausser(e);
			}
			else if(typeid(*e)==typeid(Main)){
				
				if(((Main*)e)->getNbMain()==2){
					
					((Joueur*)p)->setMaind(NULL);
					((Joueur*)p)->setMaing(NULL);
					((Joueur*)p)->defausser(e);
				}
				else{
					
					if(((Joueur*)p)->getMaing()==e){
						((Joueur*)p)->setMaing(NULL);
						((Joueur*)p)->defausser(e);
					}
					else if(((Joueur*)p)->getMaind()==e){
						((Joueur*)p)->setMaind(NULL);
						((Joueur*)p)->defausser(e);
					}
				}
			}
			else if(typeid(*e)==typeid(Equipement)){
				
				for(i=0;i<((Joueur*)p)->getEquipe().size()-1;++i){
					if(e==((Joueur*)p)->getEquipe()[i]){
						break;
					}
				}
				vector<Equipement*>::iterator it=((Joueur*)p)->getEquipe().begin();
				((Joueur*)p)->defausser((Carte *)(*(it+i)));
				((Joueur*)p)->getEquipe().erase((it+i));
				
			}
		}
	}
}
		
		
