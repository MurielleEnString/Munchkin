/*
  Fichier Tresor.hpp
  D�finition de la classe Tresor
  Auteur : LE CORVEC Quentin C�dric Bois
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
    Tresor(std::string n, Effet * e, int p); //Constructeur par d�faut
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
