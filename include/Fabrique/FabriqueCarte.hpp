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
#include <vector>

using namespace std;

class Carte;
class Tresor;
class FabriqueEffet;



/****************************************************************************************************/

class FabriqueCarte{
	protected:
		FabriqueEffet * fe;
	public:
		FabriqueCarte();
		virtual Carte * fabriquerCarte(vector<string> champs)=0;
		vector<string> decompString(string s);
};

#endif
