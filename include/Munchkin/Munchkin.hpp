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
  
	std::vector<Porte*> getPiochePorte();
	std::vector<Carte*> getDefausse();
	std::vector<Tresor*> getPiocheTresor();
	
	
	Porte * piocherPorte();

  protected:
    //Attributs
	std::vector<Porte*> piochePorte;
	std::vector<Tresor*> piocheTresor;
	std::vector<Carte*> defausse;
  
	std::vector<Joueur*> joueurs;
  
  

  private:

}; //Class Munchkin

/****************************************************************************************************/

#endif //MUNCHKIN_HPP

/****************************************************************************************************/
