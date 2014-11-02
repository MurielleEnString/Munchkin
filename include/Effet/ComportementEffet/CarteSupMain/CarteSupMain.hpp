/**
 * \file CarteSupMain.hpp
 * \brief declaration classe CarteSupMain
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#ifndef CARTESUPMAIN_HPP
	#define CARTESUPMAIN_HPP
	
#include "../ComportementEffet.hpp"
#include "../../../Personnage/Joueur/Joueur.hpp"

	
class CarteSupMain:public ComportementEffet{
	public:
		void comp(Personnage * p, int n);	
};


#endif
