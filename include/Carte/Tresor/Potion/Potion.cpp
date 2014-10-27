#include "Potion.hpp"

Potion::Potion(string n, Effet * e, int p,int b):Tresor(n,e,p){bonus=b;}

Potion::Potion(string n, string d, Effet * e, int p,int b):Tresor(n,d,e,p) {bonus=b;}

Potion::~Potion(){}

int Potion::getBonus(){
	return bonus;
}
