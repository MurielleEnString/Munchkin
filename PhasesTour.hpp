#ifndef PHASESTOUR_HPP
	#define PHASESTOUR_HPP
	
	#include "TourDeJeu.hpp"

public class PhasesTour{
	protected:
		TourDeJeu tour;
	
	public:
		PhasesTour(TourDeJeu t);
		virtual void piocherFaceVisible();
		virtual void piocherFaceCache();
		virtual void poserUnMonstre();
		virtual void donnerCarte();
}

#endif
