/*
  Fichier Munchkin.hpp
  Définition de la classe Munchkin
  Auteur : LE CORVEC Quentin Cédric Bois
*/

/****************************************************************************************************/

#ifndef MUNCHKIN_HPP
#define MUNCHKIN_HPP

/****************************************************************************************************/

#include "../Carte/Porte/Porte.hpp"
#include "../Carte/Tresor/Tresor.hpp"
#include "../Personnage/Joueur/Joueur.hpp"

#include <vector>

/****************************************************************************************************/

class Munchkin {
  public:
    //Constructeur
    Munchkin(std::string filename);

    //Destructeur
    ~Munchkin();
  
	std::vector<Porte> getPiochePorte();
	std::vector<Porte> getdefaussePorte();
	std::vector<Tresor> getPiocheTresor();
	std::vector<Tresor> getDefausseTresor();

  protected:
    //Attributs
	std::vector<Porte> piochePorte;
	std::vector<Tresor> piocheTresor;
	std::vector<Porte> defaussePorte;
	std::vector<Tresor> defausseTresor;
  
	std::vector<Joueur> joueurs;
  
  

  private:

}; //Class Munchkin

/****************************************************************************************************/

#endif //MUNCHKIN_HPP

/****************************************************************************************************/
