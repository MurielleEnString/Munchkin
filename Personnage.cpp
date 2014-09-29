
#include "Personnage.h"

Personnage::Personnage(int niv){
	niveau=niv;
	force=0;
}

Personnage::~Personnage(){
	
	
}

int Personnage::getNiveau(){
	return niveau;
}


