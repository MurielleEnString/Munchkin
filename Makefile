all:Joueur.o Carte.o Monstre.o Race.o Tresor.o Equipement.o Effet.o Munchkin.o Personnage.o Joueur.o OuvrirPorte.o PillerPiece.o DebutTour.o
	g++ -Wall main.cpp obj/Debug/include/Carte/Carte.o -o main


Carte.o:
	g++ -Wall include/Carte/Carte.cpp -o obj/Debug/include/Carte/Carte.o -c
	
Porte.o: Carte.o
	g++ -Wall include/Carte/Porte/Porte.cpp -o obj/Debug/include/Carte/Porte/Porte.o -c
	
Monstre.o: Porte.o Effet.o Personnage.o
	g++ -Wall include/Carte/Porte/Monstre/Monstre.cpp -o obj/Debug/include/Carte/Porte/Monstre/Monstre.o -c
	
Race.o:Porte.o Effet.o
	g++ -Wall include/Carte/Porte/Race/Race.cpp -o obj/Debug/include/Carte/Porte/Race/Race.o -c
	
Tresor.o:Carte.o Effet.o
	g++ -Wall include/Carte/Tresor/Tresor.cpp -o obj/Debug/include/Carte/Tresor/Tresor.o -c
	
Equipement.o: Effet.o Tresor.o
	g++ -Wall include/Carte/Tresor/Equipement/Equipement.cpp -o obj/Debug/include/Carte/Tresor/Equipement/Equipement.o -c
	
Effet.o:Personnage.o
	g++ -Wall include/Effet/Effet.cpp -o obj/Debug/include/Effet/Effet.o -c
	
Munchkin.o: Porte.o Tresor.o Joueur.o
	g++ -Wall include/Munchkin/Munchkin.cpp -o obj/Debug/include/Munchkin/Munchkin.o -c
	
Personnage.o:Race.o Munchkin.o
	g++ -Wall include/Personnage/Personnage.cpp -o obj/Debug/include/Personnage/Personnage.o -c

Joueur.o: Carte.o Equipement.o Personnage.o EtatJoueur.o Effet.o
	g++ -Wall include/Personnage/Joueur/Joueur.cpp -o obj/Debug/include/Personnage/Joueur/Joueur.o -c
	
EtatJoueur.o:Carte.o Equipement.o Joueur.o Monstre.o
	g++ -Wall include/Personnage/Joueur/EtatJoueur/EtatJoueur.cpp -o obj/Debug/include/Personnage/Joueur/EtatJoueur/EtatJoueur.o -c
	
OuvrirPorte.o: EtatJoueur.o
	g++ -Wall include/Personnage/Joueur/EtatJoueur/OuvrirPorte/OuvrirPorte.cpp -o obj/Debug/include/Personnage/Joueur/EtatJoueur/OuvrirPorte/OuvrirPorte.o -c
	
PillerPiece.o: EtatJoueur.o
	g++ -Wall include/Personnage/Joueur/EtatJoueur/PillerPiece/PillerPiece.cpp -o obj/Debug/include/Personnage/Joueur/EtatJoueur/PillerPiece/PillerPiece.o -c
	
DebutTour.o: EtatJoueur.o
	g++ -Wall include/Personnage/Joueur/EtatJoueur/DebutTour/DebutTour.cpp -o obj/Debug/include/Personnage/Joueur/EtatJoueur/DebutTour/DebutTour.o -c
	

	

clean:
	rm -rf  *.o




	

	

	

	

	


