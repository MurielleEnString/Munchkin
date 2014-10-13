/*
  Fichier Carte.hpp
  Définition de la classe Carte
  Auteur : LE CORVEC Quentin Cédric Bois
*/

/****************************************************************************************************/

#ifndef CARTE_HPP
#define CARTE_HPP

/****************************************************************************************************/

#include <string>
#include "../Effet/Effet.hpp"


/****************************************************************************************************/

class Carte {
  public:
    //Constructeur
    Carte(std::string n, Effet * e); //Constructeur par défaut
    Carte(std::string n, std::string d, Effet * e);

    //Destructeur
    virtual ~Carte();

    //Accesseurs
    std::string Getnom() const;
    std::string Getdescription() const;
    Effet * getEffet();
    void setEffet(Effet * e);

    //Mutateurs
    //void Setnom(string val);
    //void Setdescription(string val);
    
    bool compare(Carte * e);

  protected:
    //Attributs
    std::string nom;
    std::string description;
    Effet * e;

  private:

}; //Class Carte

/****************************************************************************************************/

#endif //CARTE_HPP

/****************************************************************************************************/
