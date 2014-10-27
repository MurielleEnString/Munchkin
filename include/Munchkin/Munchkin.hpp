/*
  Fichier Munchkin.hpp
  Définition de la classe Munchkin
  Auteur : LE CORVEC Quentin Cédric Bois
*/

/****************************************************************************************************/

#ifndef MUNCHKIN_HPP
#define MUNCHKIN_HPP

/****************************************************************************************************/


#include "../Personnage/Joueur/Joueur.hpp"
#include "../Effet/Effet.hpp"
#include "../Effet/ComportementEffet/PerteGainNiv/PerteGainNiv.hpp"
#include "../Effet/ComportementEffet/CarteSupMain/CarteSupMain.hpp"
#include "../Effet/ComportementEffet/MalusBonus/MalusBonus.hpp"
//#include "../Effet/ComportementEffet/PerteObjMax/PerteObjMax.hpp"
#include "../Effet/ComportementEffet/MalusBonusDeguerpir/MalusBonusDeguerpir.hpp"
#include "../Carte/Tresor/Potion/Potion.hpp"
#include <vector>

class Joueur;
class Porte;
class Tresor;


using namespace std;

/****************************************************************************************************/

class Munchkin {
	
  public: 
    //Constructeur
    Munchkin(std::string filename, int nbJoueurs);

    //Destructeur
    ~Munchkin();
  
	std::vector<Porte*>& getPiochePorte();
	std::vector<Carte*>& getDefausse();
	std::vector<Tresor*>& getPiocheTresor();
	Joueur * getCourant();
	
	bool getFinPartie();
	void setFinPartie(bool b);
	void changementJoueur(Joueur * j);
	
	
	Porte * piocherPorte();
	Tresor * piocherTresor();
	void defausser(Carte * c);

  private:
    //Attributs
	std::vector<Porte*> piochePorte;
	std::vector<Tresor*> piocheTresor;
	std::vector<Carte*> defausse;
  
	std::vector<Joueur*> joueurs;
	Joueur * courant;
	bool finPartie;
  
  

  

}; //Class Munchkin

/****************************************************************************************************/

#endif //MUNCHKIN_HPP

/****************************************************************************************************/
