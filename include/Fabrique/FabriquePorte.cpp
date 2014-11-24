#include "FabriquePorte.hpp"

FabriquePorte::FabriquePorte():FabriqueCarte(){
	fe=new FabriqueEffet();
}

FabriquePorte::~FabriquePorte(){}

Carte * FabriquePorte::fabriquerCarte(vector<string> champs){
	Effet * e=fe->fabriquerEffet(champs);
	if(champs.front()=="Monstre"){
		if(champs.size()>=6 && champs[5]=="2"){
			return new Monstre(champs[1],e,stoi(champs[3]),stoi(champs[4]),stoi(champs[5]));
		}
			return new Monstre(champs[1],e,stoi(champs[3]),stoi(champs[4]));
	}
	else if(champs.front()=="Malediction"){
		return new Malediction(champs[1],champs[2],e);
	}
	else if(champs.front()=="Race"){
		return new Race(e,NULL,champs[1],champs[2]);
	}
	return NULL;
}
