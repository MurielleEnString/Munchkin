/*
  Fichier Joueur.hpp
  D�finition de la classe Joueur
  Auteur : LE CORVEC Quentin C�dric Bois
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

#include <vector>

class Munchkin;

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
    
	EtatJoueur * getOuvrirLaPorte();
	EtatJoueur * getPiller();
	EtatJoueur * getBagarre();
	EtatJoueur * getCharite();
  
	vector<Equipement> * getBagage();
	vector<Equipement> * getEquipe();
	vector<Carte> * getMain();
	

  private:
    //Attributs
    EtatJoueur * ouvrirLaPorte;
	EtatJoueur * piller;
	EtatJoueur * bagarre;
	EtatJoueur * charite;
	EtatJoueur * debut;
		
	EtatJoueur * etat_;
		
    std::vector<Carte> * main;
    std::vector<Equipement> * bagage;
    std::vector<Equipement> * equipe;
    
    Munchkin * jeu;

}; //Class Joueur

/****************************************************************************************************/

#endif //JOUEUR_HPP

/****************************************************************************************************/
