
/**
 * \file Tresor.hpp
 * \brief declaration classe Tresor
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#ifndef TRESOR_HPP
#define TRESOR_HPP

/****************************************************************************************************/

#include "../Carte.hpp"

class Effet;

/****************************************************************************************************/

class Tresor:public Carte {
  public:
    //Constructeur
    Tresor(std::string n, Effet * e, int p); //Constructeur par défaut
    Tresor(std::string n, std::string d, Effet * e, int p);

    //Destructeur
    virtual ~Tresor();

    //Accesseurs
    void afficher() const;
    int getPrix();

    //Mutateurs

  protected:
    //Attributs
    int prix;
    

  private:

}; //Class Tresor

/****************************************************************************************************/

#endif //TRESOR_HPP

/****************************************************************************************************/
