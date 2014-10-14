#include <iostream>

#include "include/Munchkin/Munchkin.hpp"
#include "include/Personnage/Joueur/Joueur.hpp"
#include "include/Carte/Carte.hpp"
#include "include/Effet/Effet.hpp"
#include <vector>
#include <typeinfo>
#include "tinyxml/tinyxml.h"
using namespace std;

int main() {
  //Munchkin * m = new Munchkin("blabla");
  
  
  vector<Carte *> c;
  vector<Carte *>::iterator it;
  //Carte * c1=new Carte("Casque à pointe");
  //c.push_back(new Carte("Bottes"));
  //c.push_back(new Carte("Gants"));
  //c.push_back(new Carte("Echarpe"));
  //c.push_back(new Carte("Armure"));
  //c.push_back(new Carte("Boite aux lettres"));
  //c.pop_back();
  //c.push_back(c1);
  
  it=c.begin();
  while((*it)->Getnom()!="Gants"){ 
	  it++;
	 //cout<<(*it)->Getnom()<<endl;
  }
  //cout<<(*it)->Getnom()<<endl;
  //c.insert(it,new Carte("insertion apres gants"));
  for(it=c.begin();it!=c.end();it++){
	  cout<<(*it)->Getnom()<<endl;
	  
  }
  //Carte * c2=new Monstre("Plante", new Effet(2),10, 2);
  //cout<<typeid(c.front()).name()<<endl;
  //cout<<c.size()<<endl;
 
  
  return 0;
}
