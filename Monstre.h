#ifndef MONSTRE_H
	#define MONSTRE_H
	
#include "Personnage.h"
#include "Effet.h"

class Monstre:public Personnage{
	public:
		Monstre(Effet * e, int niv, int nbT);
		Monstre(Effet * e, int niv, int nbT, int nbN);
		~Monstre();
		
		
	private:
		Effet * incident;
		int tresors;
		int nbNiv;
};

#endif