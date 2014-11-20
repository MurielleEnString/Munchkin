#include "FabriqueTresor.hpp"


FabriqueTresor::FabriqueTresor():FabriqueCarte(){
	fe=new FabriqueEffet();
}

Carte * FabriqueTresor::fabriquerCarte(vector<string> champs){
	
	Effet * e=fe->fabriquerEffet(champs);
	if(champs.front()=="Potion"){
		return new Potion(champs[1],champs[2],e,stoi(champs[3]),stoi(champs[4]));
	}
	else if(champs.front()=="Equipement"){
		return new Equipement(champs[1],champs[2],stoi(champs[3]),stoi(champs[4]),e);
	}
	else if(champs.front()=="Armure"){
		return new Armure(champs[1],champs[2],stoi(champs[3]),stoi(champs[4]),e);
	}
	else if(champs.front()=="Main"){
		if(champs.back()=="2") return new Main(champs[1],champs[2],stoi(champs[3]),stoi(champs[4]),e,stoi(champs.back()));
		else return new Main(champs[1],champs[2],stoi(champs[3]),stoi(champs[4]),e);
	}
	else if(champs.front()=="Chaussure"){
		return new Chaussure(champs[1],champs[2],stoi(champs[3]),stoi(champs[4]),e);
	}
	else if(champs.front()=="CouvreChef"){
	
	}
	return NULL;
}
