all:Joueur.o Carte.o Monstre.o Malediction.o Race.o Tresor.o Equipement.o Effet.o Munchkin.o Personnage.o Joueur.o OuvrirPorte.o PillerPiece.o DebutTour.o Bagarre.o FinTour.o Attente.o MalusBonus.o MalusBonusDeguerpir.o PerteGainNiv.o CarteSupMain.o PerteObjMax.o ComportementEffet.o Potion.o
	g++ -Wall -g main.cpp obj/Debug/include/Carte/Tresor/Potion/Potion.o obj/Debug/include/Effet/ComportementEffet/PerteObjMax/PerteObjMax.o obj/Debug/include/Effet/ComportementEffet/CarteSupMain/CarteSupMain.o obj/Debug/include/Effet/ComportementEffet/ComportementEffet.o obj/Debug/include/Effet/ComportementEffet/MalusBonus/MalusBonus.o obj/Debug/include/Carte/Porte/Malediction/Malediction.o obj/Debug/include/Effet/ComportementEffet/MalusBonusDeguerpir/MalusBonusDeguerpir.o obj/Debug/include/Effet/ComportementEffet/PerteGainNiv/PerteGainNiv.o obj/Debug/include/Personnage/Joueur/EtatJoueur/Attente/Attente.o  obj/Debug/include/Carte/Tresor/Tresor.o obj/Debug/include/Personnage/Joueur/EtatJoueur/FinTour/FinTour.o obj/Debug/include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o obj/Debug/include/Personnage/Joueur/EtatJoueur/PillerPiece/PillerPiece.o obj/Debug/include/Personnage/Joueur/EtatJoueur/OuvrirPorte/OuvrirPorte.o obj/Debug/include/Personnage/Joueur/EtatJoueur/DebutTour/DebutTour.o obj/Debug/include/Carte/Carte.o obj/Debug/include/Personnage/Joueur/EtatJoueur/EtatJoueur.o obj/Debug/include/Carte/Porte/Porte.o obj/Debug/include/Carte/Porte/Monstre/Monstre.o obj/Debug/include/Carte/Tresor/Equipement/Equipement.o obj/Debug/include/Carte/Porte/Race/Race.o obj/Debug/include/Effet/Effet.o obj/Debug/include/Personnage/Personnage.o obj/Debug/include/Personnage/Joueur/Joueur.o obj/Debug/include/Munchkin/Munchkin.o -o main



Carte.o:
	g++ -Wall include/Carte/Carte.cpp -o obj/Debug/include/Carte/Carte.o -c
	
Porte.o: Carte.o
	g++ -Wall include/Carte/Porte/Porte.cpp -o obj/Debug/include/Carte/Porte/Porte.o -c
	
Malediction.o:Porte.o
	g++ -Wall include/Carte/Porte/Malediction/Malediction.cpp -o obj/Debug/include/Carte/Porte/Malediction/Malediction.o -c

Monstre.o: Porte.o Personnage.o
	g++ -Wall include/Carte/Porte/Monstre/Monstre.cpp -o obj/Debug/include/Carte/Porte/Monstre/Monstre.o -c
	
Race.o:Porte.o
	g++ -Wall include/Carte/Porte/Race/Race.cpp -o obj/Debug/include/Carte/Porte/Race/Race.o -c
	
Tresor.o:Carte.o
	g++ -Wall include/Carte/Tresor/Tresor.cpp -o obj/Debug/include/Carte/Tresor/Tresor.o -c
	
Equipement.o:Tresor.o
	g++ -Wall include/Carte/Tresor/Equipement/Equipement.cpp -o obj/Debug/include/Carte/Tresor/Equipement/Equipement.o -c

Potion.o:Tresor.o
	g++ -Wall include/Carte/Tresor/Potion/Potion.cpp -o obj/Debug/include/Carte/Tresor/Potion/Potion.o -c

Effet.o:
	g++ -Wall include/Effet/Effet.cpp -o obj/Debug/include/Effet/Effet.o -c
	
Munchkin.o:Joueur.o
	g++ -Wall include/Munchkin/Munchkin.cpp -o obj/Debug/include/Munchkin/Munchkin.o -c
	
Personnage.o:
	g++ -Wall include/Personnage/Personnage.cpp -o obj/Debug/include/Personnage/Personnage.o -c

Joueur.o: Personnage.o 
	g++ -Wall include/Personnage/Joueur/Joueur.cpp -o obj/Debug/include/Personnage/Joueur/Joueur.o -c
	
EtatJoueur.o:
	g++ -Wall include/Personnage/Joueur/EtatJoueur/EtatJoueur.cpp -o obj/Debug/include/Personnage/Joueur/EtatJoueur/EtatJoueur.o -c
	
OuvrirPorte.o: EtatJoueur.o Joueur.o
	g++ -Wall include/Personnage/Joueur/EtatJoueur/OuvrirPorte/OuvrirPorte.cpp  -o obj/Debug/include/Personnage/Joueur/EtatJoueur/OuvrirPorte/OuvrirPorte.o -c
	
	
PillerPiece.o: EtatJoueur.o Joueur.o
	g++ -Wall include/Personnage/Joueur/EtatJoueur/PillerPiece/PillerPiece.cpp -o obj/Debug/include/Personnage/Joueur/EtatJoueur/PillerPiece/PillerPiece.o -c
	
	
	
DebutTour.o: EtatJoueur.o Joueur.o
	g++ -Wall include/Personnage/Joueur/EtatJoueur/DebutTour/DebutTour.cpp -o obj/Debug/include/Personnage/Joueur/EtatJoueur/DebutTour/DebutTour.o -c
	
Bagarre.o: EtatJoueur.o Joueur.o
	g++ -Wall include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.cpp -o obj/Debug/include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o -c
	
FinTour.o:EtatJoueur.o Joueur.o
	g++ -Wall include/Personnage/Joueur/EtatJoueur/FinTour/FinTour.cpp -o obj/Debug/include/Personnage/Joueur/EtatJoueur/FinTour/FinTour.o -c
	
Attente.o:EtatJoueur.o Joueur.o
	g++ -Wall include/Personnage/Joueur/EtatJoueur/Attente/Attente.cpp -o obj/Debug/include/Personnage/Joueur/EtatJoueur/Attente/Attente.o -c

ComportementEffet.o:
	g++ -Wall include/Effet/ComportementEffet/ComportementEffet.cpp -o obj/Debug/include/Effet/ComportementEffet/ComportementEffet.o -c
	
MalusBonus.o:ComportementEffet.o
	g++ -Wall include/Effet/ComportementEffet/MalusBonus/MalusBonus.cpp -o obj/Debug/include/Effet/ComportementEffet/MalusBonus/MalusBonus.o -c



MalusBonusDeguerpir.o:ComportementEffet.o
	g++ -Wall include/Effet/ComportementEffet/MalusBonusDeguerpir/MalusBonusDeguerpir.cpp -o obj/Debug/include/Effet/ComportementEffet/MalusBonusDeguerpir/MalusBonusDeguerpir.o -c
	
PerteGainNiv.o:ComportementEffet.o
	g++ -Wall include/Effet/ComportementEffet/PerteGainNiv/PerteGainNiv.cpp -o obj/Debug/include/Effet/ComportementEffet/PerteGainNiv/PerteGainNiv.o -c


CarteSupMain.o:ComportementEffet.o
	g++ -Wall include/Effet/ComportementEffet/CarteSupMain/CarteSupMain.cpp -o obj/Debug/include/Effet/ComportementEffet/CarteSupMain/CarteSupMain.o -c

PerteObjMax.o:ComportementEffet.o
	g++ -Wall include/Effet/ComportementEffet/PerteObjMax/PerteObjMax.cpp -o obj/Debug/include/Effet/ComportementEffet/PerteObjMax/PerteObjMax.o -c



clean:
	rm -rf  *.o




	

	

	

	

	


# DO NOT DELETE

include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Personnage/Joueur/EtatJoueur/EtatJoueur.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Carte/Carte.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Personnage/Joueur/Joueur.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Carte/Carte.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Carte/Tresor/Equipement/Equipement.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Effet/Effet.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Personnage/Personnage.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Carte/Porte/Race/Race.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Carte/Porte/Porte.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Carte/Carte.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Carte/Tresor/Tresor.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Effet/Effet.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Personnage/Personnage.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Personnage/Joueur/EtatJoueur/EtatJoueur.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Munchkin/Munchkin.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Carte/Porte/Porte.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Carte/Tresor/Tresor.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Personnage/Joueur/Joueur.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Personnage/Joueur/EtatJoueur/DebutTour/DebutTour.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Personnage/Joueur/EtatJoueur/OuvrirPorte/OuvrirPorte.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Carte/Porte/Monstre/Monstre.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Personnage/Personnage.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Carte/Porte/Malediction/Malediction.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Personnage/Joueur/EtatJoueur/PillerPiece/PillerPiece.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Carte/Porte/Monstre/Monstre.hpp
include/Personnage/Joueur/EtatJoueur/Bagarre/Bagarre.o: include/Carte/Tresor/Equipement/Equipement.hpp
