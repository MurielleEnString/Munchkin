
#ifndef MALEDICTION_HPP
	#define MALEDICTION_HPP

#include "../Porte.hpp"
#include "../../../Effet/Effet.hpp"
#include <string>

class Malediction:public Porte{
	public:
		Malediction(std::string nom, Effet * e);
		Malediction(std::string nom, std::string description, Effet * e);
	private:
		Effet * e;
	
};



#endif
