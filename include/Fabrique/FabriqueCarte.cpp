#include "FabriqueCarte.hpp"

FabriqueCarte::FabriqueCarte(){
}

FabriqueCarte::FabriqueCarte(FabriqueCarte * f1, FabriqueCarte * f2){
	fp=f1;
	ft=f2;
}


Carte * FabriqueCarte::creerCarte(string nom){
	
	vector<string> champs=decompString(nom);
	cout<<champs.front()<<endl;
	if(champs.front()=="Equipement" || champs.front()=="Potion" || champs.front()=="Armure" || champs.front()=="Chaussure" || champs.front()=="Main" || champs.front()=="CouvreChef"){
		//cout<<"ft "<<champs.front()<<endl;
		return ft->fabriquerCarte(champs);
	}
	
	else if(champs.front()=="Malediction" || champs.front()=="Monstre" || champs.front()=="Race"){
		cout<<"fp "<<champs.front()<<endl;
		return fp->fabriquerCarte(champs);
	}
}

Carte * FabriqueCarte::fabriquerCarte(vector<string> champs){
		return NULL;
}

vector<string> FabriqueCarte::decompString(string nom){
	int i=0;
	int n=1;
	int c=0;
	string champ="";
	
	
	while(nom[i]!='\0'){
		if(nom[i]==';'){
			++n;
		}
		++i;
	}
	
	vector<string> res;
	i=0;
	while(nom[i]!='\0'){
		
		if(nom[i]==';'){
			res.push_back(champ);
			++c;
			champ="";
		}
		else champ+=nom[i];
		++i;
	}
	return res;
}

