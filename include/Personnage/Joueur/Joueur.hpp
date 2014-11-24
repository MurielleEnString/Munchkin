/**
 * \file Joueur.hpp
 * \brief declaration classe Joueur
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#ifndef JOUEUR_HPP
#define JOUEUR_HPP

/****************************************************************************************************/


#include "../Personnage.hpp"
#include "../../Munchkin/Munchkin.hpp"
#include "../../Carte/Porte/Race/Race.hpp"
#include "EtatJoueur/DebutTour/DebutTour.hpp"
#include "EtatJoueur/OuvrirPorte/OuvrirPorte.hpp"
#include "EtatJoueur/PillerPiece/PillerPiece.hpp"
#include "EtatJoueur/Bagarre/Bagarre.hpp"
#include "EtatJoueur/Attente/Attente.hpp"
#include "../../Carte/Tresor/Equipement/CouvreChef/CouvreChef.hpp"
#include "../../Carte/Tresor/Equipement/Main/Main.hpp"
#include "../../Carte/Tresor/Equipement/Chaussure/Chaussure.hpp"
#include "../../Carte/Tresor/Equipement/Armure/Armure.hpp"
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
class Attente;


class EtatJoueur;

class Main;
class Armure;
class Chaussure;
class CouvreChef;

class Joueur:public Personnage{
  public:
  
	
    //Constructeur
    Joueur(Munchkin * j, int i, Race * r);

    //Destructeur
    ~Joueur();

	void defausser(Carte *c);
	void finTour();
	void equiperEquipement(Equipement * e);
	void equiperCouvreChef(CouvreChef * c);
	void equiper1Main(Main * m);
	void equiper2Main(Main * m);
	void equiperArmure(Armure * a);
	void equiperChaussure(Chaussure * c);
	
    //Mutateurs et Accesseurs
    void setNbCartesMain(int n);
    int getNbCartesMain();
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
	Attente * getAttente();
  
	vector<Equipement*>& getBagage();
	vector<Equipement*>& getEquipe();
	vector<Carte*>& getMain();
	Main * getMaing();
	void setMaing(Main * m);
	Main * getMaind();
	void setMaind(Main * m);
	Armure * getTorse();
	void setTorse(Armure * a);
	Chaussure * getPieds();
	void setPieds(Chaussure * c);
	CouvreChef * getTete();
	void setTete(CouvreChef * c);
	
	
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
	Attente * attente;
	
		
	EtatJoueur * etat_;
	
	Race * race;
		
    std::vector<Carte*>  main;
    std::vector<Equipement*> bagage;
    std::vector<Equipement*> equipe;
    Main * maing;
    Main * maind;
    Chaussure * pieds;
    Armure * torse;
    CouvreChef * tete;
    
    Munchkin * jeu;
    
    

}; //Class Joueur

/****************************************************************************************************/

#endif //JOUEUR_HPP

/****************************************************************************************************/
