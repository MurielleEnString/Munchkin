#include "Fabrique.hpp"

FabriqueCarte::FabriqueCarte(Munchkin * m){
	ft=new FabriqueTresor();
	jeu=m;
}
Carte FabriqueCarte::creerCarte(String nom){
	if(nom=="Equipement" || nom=="Potion" || nom=="Armure" || nom=="Chaussure" || nom=="Main" || nom=="Couvrechef")
		return jeu->getPiocheTresor.push_back(ft.fabriquerCarte(nom));
	}
}
