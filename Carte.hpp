/*
  Fichier Carte.hpp
  Définition de la classe Carte
  Auteur : LE CORVEC Quentin Cdrik Boua
*/

/****************************************************************************************************/

#ifndef CARTE_HPP
#define CARTE_HPP
#include <string>
#include <iostream>
using namespace std;

/****************************************************************************************************/

class Carte {
  private :
    //Attributs
    protected :
		std::string nom;
		string description;

  public :
    //Constructeur
    Carte(string n); //Constructeur par défaut
    Carte(string n, string d);

    //Destructeur
    ~Carte();

    //Accesseurs
    void afficher() const;

    //Mutateurs

}; //Class Carte



/****************************************************************************************************/


#endif // CARTE_HPP

/****************************************************************************************************/
