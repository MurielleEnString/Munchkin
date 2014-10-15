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
#include "../../Carte/Porte/Race/Race.hpp"
#include "EtatJoueur/DebutTour/DebutTour.hpp"
#include "EtatJoueur/OuvrirPorte/OuvrirPorte.hpp"
#include "EtatJoueur/PillerPiece/PillerPiece.hpp"
#include "EtatJoueur/Bagarre/Bagarre.hpp"
#include "EtatJoueur/FinTour/FinTour.hpp"
#include "EtatJoueur/Attente/Attente.hpp"
#include <vector>
#include <string>


using namespace std;

/****************************************************************************************************/


class Effet;
class Munchkin;

class DebutTour;
class OuvrirPorte;
class Bagarre;
class PillerPiece;
class FinTour;
class Attente;


class EtatJoueur;

class Joueur:public Personnage{
  public:
  
	
    //Constructeur
    Joueur(Munchkin * j, int i);

    //Destructeur
    ~Joueur();

    //Mutateurs
    void setNbCartesMain(int n);
    int getNbCartesMain();
    void setNiv(int n);
    int getNiv();
    void setValDeguerpir(int val);
    int getValDeguerpir();
    Race * getRace();
    void setRace(Race *r);
    int getId();
    
    
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
	Race * race;
	
	Munchkin * getJeu();
	

  private:
    //Attributs
    int id;
    int nbCartesMain;
    int valDeguerpir;
    
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
