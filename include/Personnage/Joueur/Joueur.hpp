/*
  Fichier Joueur.hpp
  Définition de la classe Joueur
  Auteur : LE CORVEC Quentin Cédric Bois
*/

/****************************************************************************************************/

#ifndef JOUEUR_HPP
#define JOUEUR_HPP

/****************************************************************************************************/


#include "../Personnage.hpp"
#include "EtatJoueur/DebutTour/DebutTour.hpp"
#include "EtatJoueur/OuvrirPorte/OuvrirPorte.hpp"
#include "EtatJoueur/PillerPiece/PillerPiece.hpp"
#include "EtatJoueur/Bagarre/Bagarre.hpp"

#include <vector>




using namespace std;

/****************************************************************************************************/

class Equipement;
class Effet;
class Munchkin;

class DebutTour;
class OuvrirPorte;
class PillerPiece;
class Bagarre;
class EtatJoueur;

class Joueur:public Personnage{
  public:
  
	
    //Constructeur
    Joueur(Munchkin * j);

    //Destructeur
    ~Joueur();

    //Mutateurs
    
	void setEtat(EtatJoueur * e);
	EtatJoueur * getEtat();
    
    DebutTour * getDebut();
	OuvrirPorte * getOuvrirLaPorte();
	PillerPiece * getPiller();
	Bagarre * getBagarre();
	EtatJoueur * getCharite();
  
	vector<Equipement*> getBagage();
	vector<Equipement*> getEquipe();
	vector<Carte*> getMain();
	
	Munchkin * getJeu();
	

  private:
    //Attributs
	DebutTour * debut;
    OuvrirPorte * ouvrirLaPorte;
	PillerPiece * piller;
	Bagarre * bagarre;
	EtatJoueur * charite;
	
		
	EtatJoueur * etat_;
		
    std::vector<Carte*>  main;
    std::vector<Equipement*> bagage;
    std::vector<Equipement*> equipe;
    
    Munchkin * jeu;

}; //Class Joueur

/****************************************************************************************************/

#endif //JOUEUR_HPP

/****************************************************************************************************/
