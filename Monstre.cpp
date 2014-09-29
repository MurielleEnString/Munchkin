#include "Monstre.h"

Monstre::Monstre(Effet * e, int niv, int nbT):Personnage(niv){
	incident=e;
	tresors=nbT;
	nbNiv=1;
	
}

Monstre::Monstre(Effet * e, int niv, int nbT, int nbN):Personnage(niv){
	incident=e;
	tresors=nbT;
	nbNiv=nbN;	
}

Monstre::~Monstre(){
	
	
}