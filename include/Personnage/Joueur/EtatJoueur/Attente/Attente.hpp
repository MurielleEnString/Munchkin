/**
 * \file Attente.hpp
 * \brief declaration classe Attente
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


#ifndef ATTENTE_HPP
	#define ATTENTE_HPP
	
	#include "../EtatJoueur.hpp"
	#include "../../Joueur.hpp"
	
class Race;


class Attente:public EtatJoueur{
	public:
		Attente(Joueur * j);
		virtual ~Attente();
};


	
#endif


