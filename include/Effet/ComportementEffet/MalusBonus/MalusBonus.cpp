#include "MalusBonus.hpp"

void MalusBonus::comp(Personnage * p, int n){
	p->setBonus(p->getBonus()+n);
}
