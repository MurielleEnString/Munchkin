#include "FabriqueCarte.hpp"

FabriqueCarte::FabriqueCarte(){
}

FabriqueCarte::FabriqueCarte(FabriqueCarte * f1, FabriqueCarte * f2){
	ft=f1;
	fp=f2;
}


Carte * FabriqueCarte::creerCarte(string nom){
	
	string type=typeACreer(nom);
	if(type=="Equipement" || type=="Potion" || type=="Armure" || type=="Chaussure" || type=="Main" || type=="Couvrechef"){
		cout<<"ft "<<type<<endl;
		return ft->fabriquerCarte(nom);
	}
	else if(type=="Malediction" || type=="Monstre" || type=="Race"){
		cout<<"fp "<<type<<endl;
		return fp->fabriquerCarte(nom);
	}
}

Carte * FabriqueCarte::fabriquerCarte(string nom){
		return NULL;
}

string FabriqueCarte::typeACreer(string nom){
	int i=0;
	string type="";
	while(nom[i]!=';'){
		type+=nom[i];
		++i;
	}
	return type;
}

