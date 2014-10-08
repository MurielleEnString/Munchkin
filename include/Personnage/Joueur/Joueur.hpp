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
#include "EtatJoueur/FinTour/FinTour.hpp"
#include "EtatJoueur/Attente/Attente.hpp"
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
class FinTour;
class Attente;

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
	FinTour * getFin();
	Attente * getAttente();
  
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
	FinTour * fin;
	Attente * attente;
	
		
	EtatJoueur * etat_;
		
    std::vector<Carte*>  main;
    std::vector<Equipement*> bagage;
    std::vector<Equipement*> equipe;
    
    Munchkin * jeu;

}; //Class Joueur

/****************************************************************************************************/

#endif //JOUEUR_HPP

/****************************************************************************************************/
