/**
 * \file FabriqueCarte.hpp
 * \brief declaration classe FabriqueCarte
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


/****************************************************************************************************/

#ifndef FABRIQUECARTE_HPP
#define FABRIQUECARTE_HPP


//#include "FabriqueTresor.hpp"
//#include "FabriquePorte.hpp"
#include <string>
#include <iostream>

using namespace std;

class Carte;
class Tresor;



/****************************************************************************************************/

class FabriqueCarte{
	protected:
		
		FabriqueCarte * ft; //Fabrique de trésors
		FabriqueCarte * fp;//Fabrique de portes
		
	public:
		FabriqueCarte();
		FabriqueCarte(FabriqueCarte * f1, FabriqueCarte * f2);
		Carte * creerCarte(string nom);
		virtual Carte * fabriquerCarte(string nom);
		string typeACreer(string s);
};

#endif
