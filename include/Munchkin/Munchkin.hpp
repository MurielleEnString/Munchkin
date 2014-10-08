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

/****************************************************************************************************/

class Munchkin {
	
  public:
    //Constructeur
    Munchkin(std::string filename);

    //Destructeur
    ~Munchkin();
  
	std::vector<Porte*> getPiochePorte();
	std::vector<Porte*> getDefaussePorte();
	std::vector<Tresor*> getPiocheTresor();
	std::vector<Tresor*> getDefausseTresor();
	
	Porte * piocherPorte();

  protected:
    //Attributs
	std::vector<Porte*> piochePorte;
	std::vector<Tresor*> piocheTresor;
	std::vector<Porte*> defaussePorte;
	std::vector<Tresor*> defausseTresor;
  
	std::vector<Joueur> joueurs;
  
  

  private:

}; //Class Munchkin

/****************************************************************************************************/

#endif //MUNCHKIN_HPP

/****************************************************************************************************/
