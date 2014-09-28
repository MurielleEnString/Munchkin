#include "Potion.hpp"

Potion::Potion(string n, string d, int p, Effet * e):Tresor(n,d,e,p){	
}

Potion::Potion(string n, int p, Effet * e):Tresor(n,e,p){
}

Potion::~Potion(){}

void Potion::boire(){
	
}

void Potion::donner(Personnage p){}
