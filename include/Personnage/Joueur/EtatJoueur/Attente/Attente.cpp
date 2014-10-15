#include "Attente.hpp"
Attente::Attente(Joueur * j):EtatJoueur(j){}

void Attente::changerRace(Race * r){
	cout<<"Vous ne pouvez pas changer de race"<<endl;
}
