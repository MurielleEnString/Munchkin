#include "Chaussure.hpp"


Chaussure::Chaussure(std::string n, int p,int b, Effet * e) : Equipement(n,p,b,e) {}
Chaussure::Chaussure(std::string n, std::string d, int p,int b, Effet * e) : Equipement(n,d,p,b,e) {}

