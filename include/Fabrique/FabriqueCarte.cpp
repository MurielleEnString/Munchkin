#include "FabriqueCarte.hpp"

FabriqueCarte::FabriqueCarte(){}
FabriqueCarte::~FabriqueCarte(){}

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
