#ifndef PILLERPIECE_HPP
#define PILLERPIECE_HPP

#include "../EtatJoueur.hpp"



class PillerPiece:public EtatJoueur{
	public:
		PillerPiece(Joueur *j);
		void piocherPorteFaceCache();
	
	
};




#endif
