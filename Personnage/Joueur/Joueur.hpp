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

#include <vector>

using namespace std;

/****************************************************************************************************/
class EtatJoueur;

class Joueur:public Personnage{
  public:
  
	
    //Constructeur
    Joueur();

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
		
	EtatJoueur * etat_;
		
    std::vector<Carte> * main;
    std::vector<Equipement> * bagage;
    std::vector<Equipement> * equipe;

}; //Class Joueur

/****************************************************************************************************/

#endif //JOUEUR_HPP

/****************************************************************************************************/
