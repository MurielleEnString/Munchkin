/**
 * \file main.cpp
 * \brief programme de tests
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


#include <iostream>

#include "include/Munchkin/Munchkin.hpp"
#include "include/Personnage/Joueur/Joueur.hpp"
#include "include/Carte/Carte.hpp"
#include "include/Effet/Effet.hpp"
#include <vector>
#include <typeinfo>





using namespace std;


Carte * choisirCarte(Joueur * j);
Equipement * choisirEquipement(Joueur * j,vector<Equipement *>& v);
Joueur * choisirJoueur(Munchkin * m);

int main() {
	int choix;
  Munchkin * m = new Munchkin("blabla", 1);
  Joueur * j=m->getCourant();
  vector<Carte*>::iterator i;
  vector<Equipement*>::iterator i0;
  Carte * c;
  vector<Joueur *>::iterator ite;
  int n=0;
  
  
  
  while(!m->getFinPartie()){
	j=m->getCourant();
	n=0;
	//cout<<m->getJoueurs().size()<<endl;
	
	/*for(ite=m->getJoueurs().begin();ite!=m->getJoueurs().end();++i){
			cout<<n<<" Joueur : "<<(*ite)->getId()<<endl;
			++n;
	}*/
	

	cout<<"Actions :"<<endl;
	cout<<"1 : Piocher une porte face visible" <<endl;
	cout<<"2 : Piocher une porte face cachée"<<endl;
	cout<<"3 : Changer de Race"<<endl;
	cout<<"4 : Poser un equipement"<<endl;
	cout<<"5 : Equiper un equipement du bagage"<<endl;
	cout<<"6 : Desequiper un equipement que vous porter"<<endl;
	cout<<"7 : Combattre un monstre de votre main"<<endl;
	cout<<"8 : Maudire un autre joueur avec une malediction de votre main"<<endl;
	cout<<"9 : Poser une potion"<<endl;
	cout<<"10 : Deguerpir"<<endl;
	cout<<"11 : Défausser une carte"<<endl;
	cout<<"12 : finir votre tour"<<endl;
	
	cin>>choix;
	
	switch(choix){
		case 0:{
			for(ite=m->getJoueurs().begin();ite!=m->getJoueurs().end();++ite){
				cout<<n<<" Joueur : "<<(*ite)<<endl;
				++n;
			}
			cout<<endl<<"Vous êtes : joueur "<<j->getId()<<endl;
			cout<<"niveau : "<<j->getNiveau()<<endl;
			cout<<"Votre race : "<<j->getRace()->Getnom()<<endl;
			cout<<"Votre main :"<<j->getMain().size()<<endl;
			for(i=j->getMain().begin();i!=j->getMain().end();++i){
				cout<<(*i)->Getnom()<<endl;
			}
			cout<<"Votre bagage :"<<j->getBagage().size()<<endl;
			for(i0=j->getBagage().begin();i0!=j->getBagage().end();++i0){
				cout<<(*i0)->Getnom()<<endl;
			}
			cout<<"Vos Equipements actifs :"<<j->getEquipe().size()<<endl;
			for(i0=j->getEquipe().begin();i0!=j->getEquipe().end();++i0){
				cout<<(*i0)->Getnom()<<endl;
			}
			if(j->getTorse!=NULL){cout<<"Torse : "<<j->getTorse()->Getnom()<<endl;}
			if(j->getMaing!=NULL){cout<<"Main Gauche : "<<j->getMaing()->Getnom()<<endl;}
			if(j->getMaind!=NULL){cout<<"Main Droite : "<<j->getMaind()->Getnom()<<endl;}
			if(j->getTete!=NULL){cout<<"Tête : "<<j->getTete()->Getnom()<<endl;}
			if(j->getPieds!=NULL){cout<<"Pieds : "<<j->getTete()->Getnom()<<endl};
			cout<<"Votre bonus pour déguerpir : "<<j->getValDeguerpir()<<endl;
			cout<<"Nb cartes max en main : "<<j->getNbCartesMain()<<endl;
			cout<<endl;
			
			break;
		}
		case 1:{
			j->getEtat()->piocherPorteFaceVisible();
			break;
		}
		case 2:{
			j->getEtat()->piocherPorteFaceCache();
			break;
		}
		case 3:{
			c=choisirCarte(j);
			if(c!=NULL && typeid(*c)==typeid(Race)){
				j->getEtat()->changerRace((Race*)c);
			}
			else{
				cout<<"Vous n'avez pas choisi une Race"<<endl;
				j->getMain().push_back(c);
			}
			break;
		}
		case 4:{
			c=choisirCarte(j);
			if(c!=NULL && typeid(*c)==typeid(Equipement)){
				
				j->getEtat()->poseEquipement((Equipement*)c);
			}
			else{
				cout<<"Vous n'avez pas choisi un equipement"<<endl;
				j->getMain().push_back(c);
			}
			break;
		}
		case 5:{
			c=choisirEquipement(j,j->getBagage());
			if(c!=NULL){
				cout<<c->Getnom()<<endl;
				j->getEtat()->equiper((Equipement*)c);
			}
			
			break;
		}
		case 6:{
			c=choisirEquipement(j,j->getEquipe());
			if(c!=NULL){
				cout<<c->Getnom()<<endl;
				j->getEtat()->desequiper((Equipement*)c);
			}
			break;
		}
		case 7:{
			c=choisirCarte(j);
			if(c!=NULL && typeid(*c)==typeid(Monstre)){
				
				j->getEtat()->combattre((Monstre*)c);
			}
			else{
				cout<<"Vous n'avez pas choisi un equipement"<<endl;
				j->getMain().push_back(c);
			}
			break;
		}
		case 8:{
			c=choisirCarte(j);
			if(c!=NULL && typeid(*c)==typeid(Malediction)){
				
				j->getEtat()->poserMalediction(choisirJoueur(m),(Malediction*)c);
			}
			else{
				cout<<"Vous n'avez pas choisi une malediction"<<endl;
				j->getMain().push_back(c);
			}
			
			break;
		}
		case 9:{
			c=choisirCarte(j);
			if(c!=NULL && typeid(*c)==typeid(Potion)){
				
				j->getEtat()->poserPotion(j,(Potion*)c);
			}
			else{
				cout<<"Vous n'avez pas choisi une potion"<<endl;
				j->getMain().push_back(c);
			}
			
			break;
		}
		case 10:{
			
			j->getEtat()->deguerpir();
			break;
		}
		case 11:{
			c=choisirCarte(j);
			if(c!=NULL){
				j->getEtat()->defausserCarte(c);
			}
			else{
				cout<<"Vous n'avez pas de carte en main"<<endl;
			}
			break;
		}
		
		case 12:{
			j->getEtat()->finirTour();
			break;
		}
		
		default:
			break;
	
		//void vendreObjets(vector<Tresor> * sacAvendre);
		
	}
	if(j->getNiveau()==10){
		cout<<"Le joueur "<<j->getId()<<" gagne la partie."<<endl;
	}
	
}
  
  
  
 
	
  delete m;
  return 0;
}


Carte * choisirCarte(Joueur * j){
	Carte * res;
	vector<Carte *>::iterator i;
	unsigned int choix, n=0;
	if(j->getMain().size()>0){
		for(i=j->getMain().begin();i!=j->getMain().end();++i){
			cout<<n<<" : "<<(*i)->Getnom()<<endl;
			++n;
		}
		cin>>choix;
		while(choix<0 || choix>=j->getMain().size()){
			cout<<"La carte n'existe pas, choisissez en une autre";
			cin>>choix;
		}
		
		i=j->getMain().begin();
		for(n=0;n<choix;++n){
			++i;
		}
		res=*i;
		j->getMain().erase(i);
		return res;
	}
	else{
		cout<<"Vous n'avez pas de carte en main"<<endl;
		return NULL;
	}
}

Equipement * choisirEquipement(Joueur * j,vector<Equipement *>& v){
	vector<Equipement *>::iterator i;
	Equipement * res;
	unsigned int choix, n=0;
	if(v.size()>0){
		for(i=v.begin();i!=v.end();++i){
			cout<<n<<" : "<<(*i)->Getnom()<<endl;
			++n;
		}
		cin>>choix;
		while(choix<0 || choix>=v.size()){
			cout<<"La carte n'existe pas, choisissez en une autre";
			cin>>choix;
		}
		
		i=v.begin();
		for(n=0;n<choix;++n){
			++i;
		}
		res=*i;
		v.erase(i);
		return res;
	}
	else{
		cout<<"Vous n'avez pas d'equipement à cet endroit"<<endl;
	}
	return NULL;
}

Joueur * choisirJoueur(Munchkin * m){
	vector<Joueur *>::iterator i;
	Joueur * res;
	unsigned int choix, n=0;
	cout<<m->getJoueurs().size()<<endl;
		for(i=m->getJoueurs().begin();i!=m->getJoueurs().end();++i){
			cout<<n<<" Joueur : "<<(*i)->getId()<<endl;
			++n;
		}
		cin>>choix;
		while(choix<0 || choix>=m->getJoueurs().size()){
			cout<<"Le joueur n'existe pas, choisissez en un autre";
			cin>>choix;
		}
		
		i=m->getJoueurs().begin();
		for(n=0;n<choix;++n){
			++i;
		}
		res=*i;
		return res;	
}
