#include"Race.hpp"

Race::Race(Effet * e,Effet * e0, string nom, string description): Porte(nom, description){
	e1=e;
	e2=e0;
}