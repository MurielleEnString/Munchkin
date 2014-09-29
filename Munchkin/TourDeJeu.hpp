#ifndef TOURDEJEU_HPP
	#define TOURDEJEU_HPP
	

	#include"PhasesTour/PhasesTour.hpp"
class PhasesTour;


class TourDeJeu{
	
	private:
		PhasesTour * ouvrirLaPorte;
		PhasesTour * piller;
		PhasesTour * bagarre;
		PhasesTour * charite;
		
		PhasesTour * phase_;
		
		
	public:
		TourDeJeu();
		~TourDeJeu();
		void tirerUneCarte();
		void poserUnMonstre();
		void setPhase(PhasesTour * p);
		PhasesTour * getOuvrirLaPorte();
		PhasesTour * getPiller();
		PhasesTour * getBagarre();
		PhasesTour * getCharite();
	
	
	
	
};

#endif
