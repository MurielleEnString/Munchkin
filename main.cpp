#include <iostream>

#include "include/Munchkin/Munchkin.hpp"
#include "include/Personnage/Joueur/Joueur.hpp"
#include "include/Carte/Carte.hpp"
#include "include/Effet/Effet.hpp"
#include <vector>
#include <typeinfo>





using namespace std;

int main() {
	int choix;
  Munchkin * m = new Munchkin("blabla", 3);
  Porte * p=new Monstre("Manticor-nithorynque",new Effet(-2, new PerteGainNiv()),6,1);
  cout<<p->type()<<endl;
  
  
  while(!m->getFinPartie()){
	Joueur * j=m->getCourant();
	//j->getDebut()->piocherPorteFaceVisible();

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
		
		case 1:{
			j->getEtat()->piocherPorteFaceVisible();
			break;
		}
		case 2:{
			j->getEtat()->piocherPorteFaceCache();
		}
		case 3:{
			break;
		}
		case 4:{
			break;
		}
		case 5:{
			break;
		}
		case 6:{
			break;
		}
		case 7:{
			break;
		}
		case 8:{
			break;
		}
		case 9:{
			break;
		}
		case 10:{
			break;
		}
		case 11:{
			break;
		}
		
		default:
			break;
	}
		//void vendreObjets(vector<Tresor> * sacAvendre);
		
}
  
  
  
 
	
  
  return 0;
}
