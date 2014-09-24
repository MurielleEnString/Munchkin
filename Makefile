main: Carte.o Effet.o Equipement.o Joueur.o Monstre.o Personnage.o Tresor.o Potion.o
	g++ main.cpp Carte.o Effet.o Equipement.o Joueur.o Monstre.o Personnage.o Tresor.o Potion.o -o main

Carte.o:
	g++ Carte.cpp -o Carte.o -c

Effet.o:Personnage.o
	g++ Effet.cpp -o Effet.o -c

Equipement.o: Effet.o Tresor.o Personnage.o
	g++ Equipement.cpp -o Equipement.o -c

Joueur.o: Carte.o Equipement.o Personnage.o
	g++ Joueur.cpp -o Joueur.o -c

Monstre.o: Effet.o Personnage.o
	g++ Monstre.cpp -o Monstre.o -c
	

Personnage.o:
	g++ Personnage.cpp -o Personnage.o -c

Tresor.o: Effet.o
	g++ Tresor.cpp -o Tresor.o -c
	
Potion.o:Tresor.o
	g++ Potion.cpp -o Potion.o -c

clean:
	rm -rf *.o


