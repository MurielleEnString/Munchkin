/**
 * \file Main.hpp
 * \brief declaration classe Main
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/
#ifndef MAIN_HPP
#define MAIN_HPP
/****************************************************************************************************/

#include "../Equipement.hpp"
using namespace std;

/****************************************************************************************************/

class Main:public Equipement{
	public:
		void equiper(Joueur * j);
	private :
		int nbMain;
};

#endif
