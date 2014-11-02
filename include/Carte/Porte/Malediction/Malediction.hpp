/**
 * \file Malediction.hpp
 * \brief déclaration classe Malediction
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */
 
#ifndef MALEDICTION_HPP
	#define MALEDICTION_HPP

#include "../Porte.hpp"
#include <string>

class Effet;

class Malediction:public Porte{
	public:
		Malediction(std::string nom, Effet * e);
		Malediction(std::string nom, std::string description, Effet * e);
	private:
		
	
};



#endif
