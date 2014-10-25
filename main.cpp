#include <iostream>

#include "include/Munchkin/Munchkin.hpp"
#include "include/Personnage/Joueur/Joueur.hpp"
#include "include/Carte/Carte.hpp"
#include "include/Effet/Effet.hpp"
#include <vector>
#include <typeinfo>





using namespace std;


Carte * choisirCarte(Joueur * j);

int main() {
	int choix;
  Munchkin * m = new Munchkin("blabla", 3);
  Joueur * j=m->getCourant();
  vector<Carte*>::iterator i;
  vector<Equipement*>::iterator i0;
  Carte * c;
  
  
  
  while(!m->getFinPartie()){
	j=m->getCourant();
	

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
			cout<<"niveau : "<<j->getNiveau()<<endl;
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
			
			break;
		}
		case 1:{
			j->getEtat()->piocherPorteFaceVisible();
			break;
		}
		case 2:{
			j->getEtat()->piocherPorteFaceCache();
		}
		case 3:{
			//j->getEtat()->changerRace();
			break;
		}
		case 4:{
			c=choisirCarte(j);
			if(typeid(*c)==typeid(Equipement)){
				
				j->getEtat()->poseEquipement((Equipement*)c);
			}
			else{
				cout<<"Vous n'avez pas choisi un equipement"<<endl;
				j->getMain().push_back(c);
			}
			break;
		}
		case 5:{
			
			//j->getEtat()->equipe();
			break;
		}
		case 6:{
			//j->getEtat()->desequiper();
			break;
		}
		case 7:{
			//j->getEtat()->combattre();
			break;
		}
		case 8:{
			//j->getEtat()->poserMalediction();
			break;
		}
		case 9:{
			//j->getEtat()->poserPotion();
			break;
		}
		case 10:{
			//j->getEtat()->deguerpir()
			break;
		}
		case 11:{
			//j->getEtat()->defausserCarte();
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
}
  
  
  
 
	
  
  return 0;
}


Carte * choisirCarte(Joueur * j){
	Carte * res;
	vector<Carte *>::iterator i;
	unsigned int choix, n=0;
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
	for(n=0;n<choix;n++){
		++i;
	}
	res=*i;
	j->getMain().erase(i);
	return res;
}
