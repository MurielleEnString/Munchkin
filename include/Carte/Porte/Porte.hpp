/*
  Fichier Porte.hpp
  Définition de la classe Porte
  Auteur : LE CORVEC Quentin Cédric Bois
*/

/****************************************************************************************************/

#ifndef PORTE_HPP
#define PORTE_HPP

/****************************************************************************************************/

#include "../Carte.hpp"

/****************************************************************************************************/

class Porte:public Carte {
  public:
    //Constructeur
    Porte(std::string nom);
    Porte(std::string nom, std::string description);

    //Destructeur
    virtual ~Porte();

  protected:

  private:

}; //Class Porte

/****************************************************************************************************/

#endif //PORTE_HPP

/****************************************************************************************************/
