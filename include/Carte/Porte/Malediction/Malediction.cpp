# include "Malediction.hpp"

Malediction::Malediction(std::string nom, Effet * e):Porte(nom, e){}
Malediction::Malediction(std::string nom, std::string description, Effet * e):Porte(nom, description, e){}
