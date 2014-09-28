#ifndef POTION_HPP
	#define POTION_HPP
	
	#include"Tresor.hpp"
	
class Potion:public Tresor{
	public:
		Potion(string n, string d, int p, Effet * e);
		Potion(string n, int p, Effet * e);
		~Potion();
		void boire();
		void donner(Personnage p);
		
};	
#endif
