/**
 * \file Munchkin.hpp
 * \brief declaration classe Munchkin
 * \author Bois C�dric Le Corvec Quentin
 * \date Octobre 2014
 */


/****************************************************************************************************/

#ifndef MUNCHKIN_HPP
#define MUNCHKIN_HPP

/****************************************************************************************************/

#include <algorithm> 
#include "../Personnage/Joueur/Joueur.hpp"


#include "../Fabrique/FabriqueTresor.hpp"
#include "../Fabrique/FabriquePorte.hpp"
#include <vector>

#include <ctime> 
#include <cstdlib> 
#include <fstream>
#include <sstream>
#include <string.h>



class Joueur;
class Porte;
class Tresor;

//class Armure;

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
	std::vector<Joueur*>& getJoueurs();
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
