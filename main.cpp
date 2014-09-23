

using namespace std;

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include"Personnage.cpp"
#include"Joueur.cpp"



int main(){
	Joueur * j1=new Joueur();
	cout<<j1->getNiveau()<<endl;
	
	return 0;
}
