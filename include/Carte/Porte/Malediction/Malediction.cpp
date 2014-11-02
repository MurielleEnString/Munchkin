/**
 * \file Malediction.cpp
 * \brief implementation classe Malediction
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


# include "Malediction.hpp"

Malediction::Malediction(std::string nom, Effet * e):Porte(nom, e){}
Malediction::Malediction(std::string nom, std::string description, Effet * e):Porte(nom, description, e){}
