
/**
 * \file Race.hpp
 * \brief declaration classe Race
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


#ifndef RACE_HPP
	#define RACE_HPP
	
#include "../Porte.hpp"
#include "../../../Effet/Effet.hpp"
#include<string>

class Effet;
class Joueur;

using namespace std;


	
class Race:public Porte{
	protected:
		Effet * e1;
		
	public:
		Race(Effet * e,Effet * e0, string nom, string description);
		virtual ~Race();
		void poser(Joueur * j);
		
};

#endif
