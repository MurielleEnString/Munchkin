/**
 * \file FabriqueCarte.hpp
 * \brief declaration classe FabriqueCarte
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


/****************************************************************************************************/

#ifndef FABRIQUECARTE_HPP
#define FABRIQUECARTE_HPP

/****************************************************************************************************/

class FabriqueCarte{
	Carte creerCarte(String nom);
	virtual Carte fabriquerCarte(String nom)=0;
};