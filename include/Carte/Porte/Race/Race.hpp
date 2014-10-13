#ifndef RACE_HPP
	#define RACE_HPP
	
#include "../Porte.hpp"
#include<string>

class Effet;

using namespace std;


	
class Race:public Porte{
	protected:
		Effet * e1;
		
	public:
		Race(Effet * e,Effet * e0, string nom, string description);
		~Race();
		
};

#endif
