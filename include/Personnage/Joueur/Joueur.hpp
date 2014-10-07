/*
  Fichier Joueur.hpp
  Définition de la classe Joueur
  Auteur : LE CORVEC Quentin Cédric Bois
*/

/****************************************************************************************************/

#ifndef JOUEUR_HPP
#define JOUEUR_HPP

/****************************************************************************************************/

#include "../../Carte/Carte.hpp"
#include "../../Carte/Tresor/Equipement/Equipement.hpp"
#include "../Personnage.hpp"
#include "EtatJoueur/EtatJoueur.hpp"
#include "../../Effet/Effet.hpp"
#include "../../Munchkin/Munchkin.hpp"
#include "EtatJoueur/DebutTour/DebutTour.hpp"
#include "EtatJoueur/OuvrirPorte/OuvrirPorte.hpp"
#include "EtatJoueur/PillerPiece/PillerPiece.hpp"
#include "EtatJoueur/Bagarre/Bagarre.hpp"

#include <vector>

class Munchkin;
class DebutTour;
class OuvrirPorte;
class PillerPiece;
class Bagarre;

using namespace std;

/****************************************************************************************************/
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
