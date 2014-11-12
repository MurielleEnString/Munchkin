/**
 * \file Munchkin.hpp
 * \brief declaration classe Munchkin
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


/****************************************************************************************************/

#ifndef MUNCHKIN_HPP
#define MUNCHKIN_HPP

/****************************************************************************************************/

#include <algorithm> 
#include "../Personnage/Joueur/Joueur.hpp"
#include "../Effet/Effet.hpp"
#include "../Effet/ComportementEffet/PerteGainNiv/PerteGainNiv.hpp"
#include "../Effet/ComportementEffet/CarteSupMain/CarteSupMain.hpp"
#include "../Effet/ComportementEffet/MalusBonus/MalusBonus.hpp"
//#include "../Effet/ComportementEffet/PerteObjMax/PerteObjMax.hpp"
#include "../Effet/ComportementEffet/MalusBonusDeguerpir/MalusBonusDeguerpir.hpp"
#include "../Carte/Tresor/Potion/Potion.hpp"
//#include "../Carte/Tresor/Equipement/Chaussure/Chaussure.hpp"
//#include "../Carte/Tresor/Equipement/CouvreChef/CouvreChef.hpp"
//#include "../Carte/Tresor/Equipement/Main/Main.hpp"
#include "../Carte/Tresor/Equipement/Armure/Armure.hpp"
#include <vector>
<<<<<<< HEAD
#include <ctime> 
#include <cstdlib> 
#include <fstream>
=======
>>>>>>> 1cfeb13c198a19f6fb590d9f35891bf652e09d3c

class Joueur;
class Porte;
class Tresor;

//class Armure;

using namespace std;

<<<<<<< HEAD

=======
>>>>>>> 1cfeb13c198a19f6fb590d9f35891bf652e09d3c
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
