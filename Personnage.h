#ifndef PERSONNAGE_H
	#define PERSONNAGE_H




class Personnage{
	protected:
		int niveau;
		int force;
	public:
		Personnage(int niv);
		~Personnage();
		int getNiveau();
		
	
	
};

#endif