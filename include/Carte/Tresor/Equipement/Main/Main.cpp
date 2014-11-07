#include "Main.hpp"


Main::Main(std::string n, int p,int b, Effet * e) : Equipement(n,p,b,e),nbMain(1) {}
Main::Main(std::string n, std::string d, int p,int b, Effet * e) : Equipement(n,d,p,b,e),nbMain(1) {}
Main::Main(std::string n, std::string d, int p,int b, Effet * e, int nb) : Equipement(n,d,p,b,e),nbMain(nb) {}
Main::Main(std::string n, int p,int b, Effet * e, int nb) : Equipement(n,p,b,e),nbMain(nb) {}


int Main::getNbMain(){
	return nbMain;
}


