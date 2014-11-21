#include "FabriqueEffet.hpp"

Effet * FabriqueEffet::fabriquerEffet(vector<string> champs){
	
	string comp="";
	string val="";
	int i,j=1, v;
	Effet * res=NULL;
	for(i=3;i<champs.size();++i){
		
		if(champs[i]!="" && champs[i][0]=='('){
			
			while(champs[i][j]!=','){				//recupération du comportement d'effet
				comp+=champs[i][j];
				++j;
			}
			cout<<"comp : "<<comp<<endl;
			++j;
			while(champs[i][j]!=')'){				//récupération de la valeur de l'effet
				
				val+=champs[i][j];
				j++;
			}
			v=stoi(val);
			cout<<"val : "<<v<<endl;
		}
	}
	
	if(comp=="PerteGainNiv"){
		res=new Effet(v,new PerteGainNiv());
	}
	else if(comp=="PerteObjMax"){
		res=new Effet(v,new PerteObjMax());
	}
	else if(comp=="CarteSupMain"){
		res=new Effet(v,new CarteSupMain());
	}
	else if(comp=="MalusBonus"){
		res=new Effet(v,new MalusBonus());
	}
	else if(comp=="MalusBonusDeguerpir"){
		res=new Effet(v,new MalusBonusDeguerpir());
	}
	return res;
}