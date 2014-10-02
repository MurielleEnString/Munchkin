/*
  Fichier Carte.hpp
  D�finition de la classe Carte
  Auteur : LE CORVEC Quentin C�dric Bois
*/

/****************************************************************************************************/

#ifndef CARTE_HPP
#define CARTE_HPP

/****************************************************************************************************/

#include <string>

/****************************************************************************************************/

class Carte {
  public:
    //Constructeur
    Carte(std::string n); //Constructeur par d�faut
    Carte(std::string n, std::string d);

    //Destructeur
    virtual ~Carte();

    //Accesseurs
    std::string Getnom() const;
    std::string Getdescription() const;

    //Mutateurs
    //void Setnom(string val);
    //void Setdescription(string val);
    
    bool compare(Carte * e);

  protected:
    //Attributs
    std::string nom;
    std::string description;

  private:

}; //Class Carte

/****************************************************************************************************/

#endif //CARTE_HPP

/****************************************************************************************************/
