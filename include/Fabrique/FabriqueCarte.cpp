#include "FabriqueCarte.hpp"

FabriqueCarte::FabriqueCarte(Munchkin * m, FabriqueCarte * f1, FabriqueCarte * f2){
	ft=f1;
	fp=f2;
	jeu=m;
}

FabriqueCarte::FabriqueCarte(){
}
void FabriqueCarte::creerCarte(string nom){
	if(nom=="Equipement" || nom=="Potion" || nom=="Armure" || nom=="Chaussure" || nom=="Main" || nom=="Couvrechef"){
		jeu->getPiocheTresor().push_back((Tresor * )ft->fabriquerCarte(nom));
	}
}
