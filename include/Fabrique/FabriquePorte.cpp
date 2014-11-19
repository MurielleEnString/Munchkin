#include "FabriquePorte.hpp"

FabriquePorte::FabriquePorte(){}

Carte * FabriquePorte::fabriquerCarte(vector<string> champs){
	
	if(champs.front()=="Monstre"){
		return new Monstre(champs[1],NULL,stoi(champs[3]),stoi(champs[4]));
	}
	else if(champs.front()=="Malediction"){
		return new Malediction(champs[1],champs[2],NULL);
	}
	else if(champs.front()=="Race"){
		return new Race(NULL,NULL,champs[1],champs[2]);
	}
	return NULL;
}
