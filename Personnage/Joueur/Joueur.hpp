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

#include <vector>

/****************************************************************************************************/

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

  protected:

  private:
    //Attributs
    std::vector<Carte> * main;
    std::vector<Equipement> * bagage;
    std::vector<Equipement> * equipe;

}; //Class Joueur

/****************************************************************************************************/

#endif //JOUEUR_HPP

/****************************************************************************************************/
