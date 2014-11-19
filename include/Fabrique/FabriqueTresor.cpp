#include "FabriqueTresor.hpp"


FabriqueTresor::FabriqueTresor(){}
Carte * FabriqueTresor::fabriquerCarte(vector<string> champs){
	
	if(champs.front()=="Potion"){
		if(champs.size()>5){
			Effet * e=fe->fabriquerEffet(champs);
		}
		return new Potion(champs[1],champs[2],NULL,stoi(champs[3]),stoi(champs[4]));
	}
	else if(champs.front()=="Equipement"){
		return new Equipement(champs[1],champs[2],stoi(champs[3]),stoi(champs[4]),NULL);
	}
	else if(champs.front()=="Armure"){
	
	}
	else if(champs.front()=="Main"){
	
	}
	else if(champs.front()=="Chaussure"){
	
	}
	else if(champs.front()=="CouvreChef"){
	
	}
	return NULL;
}
