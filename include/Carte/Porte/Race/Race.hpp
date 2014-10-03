#ifndef RACE_HPP
	#define RACE_HPP
	
#include "../Porte.hpp"
#include "../../../Effet/Effet.hpp"
	
class Race:public Porte{
	protected:
		Effet * e1;
		Effet * e2;
	public:
		Race();
		~Race();
		
};

#endif