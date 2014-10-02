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

/****************************************************************************************************/
class EtatJoueur;

class Joueur:public Personnage{
  public:
    //Constructeur
    Joueur();

    //Destructeur
    ~Joueur();

    //Mutateurs
    void pioche();
    void poseEquipement(Equipement e);
    void equiper(Equipement e);
    void desequiper(Equipement e);
    void tirerUneCarte();
	void poserUnMonstre();
	void setEtat(EtatJoueur * e);
    
    EtatJoueur * getOuvrirLaPorte();
	EtatJoueur * getPiller();
	EtatJoueur * getBagarre();
	EtatJoueur * getCharite();

  protected:

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
