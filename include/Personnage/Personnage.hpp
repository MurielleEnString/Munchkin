/**
 * \file Personnage.hpp
 * \brief declaration classe Personnage
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


/****************************************************************************************************/

#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP



class Race;

/****************************************************************************************************/

class Personnage {
  public:
    //Constructeur
    Personnage();
    Personnage(int niv);

    //Destructeur
    virtual ~Personnage();

    //Accesseurs
    int getNiveau();
    void setNiveau(int n);
    int getBonus();
    void setBonus(int b);

  protected:
    //Attributs
    int niveau;
    int bonus;
    Race * race;

  private:

}; //Class Personnage

/****************************************************************************************************/

#endif //PERSONNAGE_HPP

/****************************************************************************************************/
