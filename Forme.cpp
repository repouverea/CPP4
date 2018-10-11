#include <iostream>
#include "Forme.hpp"

using namespace std;

int Forme::nbformes = 0; 
int Forme::id = -1;

Forme::Forme(Point p,COULEURS coul){
	this -> couleur = coul;
	this -> point = p;
	++ nbformes;
	++ id;
}

Forme::Forme(){
	++id;
}

Point&  Forme::getPoint(){
	return this -> point; 
}

COULEURS  Forme::getCouleur(){
	return this -> couleur;
}

void Forme::setX(int x){
	(this -> point).setX(x);
}

void Forme::setY(int y){
        (this->point).setY(y);
}

void Forme::setCouleur(COULEURS c){
	this -> couleur = c; 
}

int Forme::getId(){
	return this->id;
}

int Forme::prochainId(){
	return id + 1 ;
}
//Forme f1 = Forme(Point(0,0),COULEURS::BLANC);

//Forme f2;
