/*
  Fichier Tresor.hpp
  Définition de la classe Tresor
  Auteur : LE CORVEC Quentin Cédric Bois
*/

/****************************************************************************************************/

#ifndef TRESOR_HPP
#define TRESOR_HPP

/****************************************************************************************************/

#include "../Carte.hpp"
#include "../../Effet/Effet.hpp"

/****************************************************************************************************/

class Tresor:public Carte {
  public:
    //Constructeur
    Tresor(std::string n, Effet * e, int p); //Constructeur par défaut
    Tresor(std::string n, std::string d, Effet * e, int p);

    //Destructeur
    ~Tresor();

    //Accesseurs
    void afficher() const;

    //Mutateurs

  protected:
    //Attributs
    int prix;
    Effet * effet;

  private:

}; //Class Tresor

/****************************************************************************************************/

#endif //TRESOR_HPP

/****************************************************************************************************/
