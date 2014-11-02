/**
 * \file Porte.hpp
 * \brief d�claration classe Porte
 * \author Bois C�dric Le Corvec Quentin
 * \date Octobre 2014
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
    virtual ~Porte();

  protected:

  private:

}; //Class Porte

/****************************************************************************************************/

#endif //PORTE_HPP

/****************************************************************************************************/
