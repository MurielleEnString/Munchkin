



#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include"Personnage.h"
#include"Joueur.h"

using namespace std;



int main(){
	Joueur * j1=new Joueur();
	cout<<j1->getNiveau()<<endl;
	
	return 0;
}
