# include "Malediction.hpp"

Malediction::Malediction(std::string nom, Effet * e):Porte(nom){
	this->e=e;
}
Malediction::Malediction(std::string nom, std::string description, Effet * e):Porte(nom, description){
	this->e=e;
}
