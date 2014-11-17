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
#include "../Munchkin/Munchkin.hpp"
#include <string>


using namespace std;

class Carte;
class Tresor;
class Munchkin;
/****************************************************************************************************/

class FabriqueCarte{
	protected:
		
		FabriqueCarte * ft; //Fabrique de trésors
		FabriqueCarte * fp;//Fabrique de portes
		Munchkin * jeu;
	public:
		FabriqueCarte();
		FabriqueCarte(Munchkin * m, FabriqueCarte * f1, FabriqueCarte * f2);
		void creerCarte(string nom);
		virtual Carte * fabriquerCarte(string nom)=0;
};

#endif
