/*
  Fichier Porte.hpp
  D�finition de la classe Porte
  Auteur : LE CORVEC Quentin C�dric Bois
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
    Porte(std::string nom, Effet * e);
    Porte(std::string nom, std::string description, Effet * e);

    //Destructeur
    ~Porte();

  protected:

  private:

}; //Class Porte

/****************************************************************************************************/

#endif //PORTE_HPP

/****************************************************************************************************/
