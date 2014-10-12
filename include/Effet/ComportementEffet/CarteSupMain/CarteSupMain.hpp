#ifndef CARTESUPMAIN_HPP
	#define CARTESUPMAIN_HPP
	
#include "../ComportementEffet.hpp"


	
class CarteSupMain:public ComportementEffet{
	public:
		void comp(Personnage * p, int n);	
};


#endif
