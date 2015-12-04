#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Avancer.h"
#include "Robot.h"

using namespace std;

Avancer * Avancer::instance = new Avancer();

Commande* Avancer::constructeurVirtuel(LecteurCommandes *lc){
	_x=lc->getInt("Donner un entier pour la position X: ");
	_y=lc->getInt("Donner un entier pour la position Y: ");
	cout <<"DANS CONSTRUCTEUR: "<< _y << _x <<endl;
	return instance;
}

void Avancer::execute(){
	cout <<"DANS EXECUTE: "<< _y << _x <<endl;
	recepteur->avancer(_x,_y);
}

void Avancer::desexecute(){
	cout<<"non implémenté"<<endl;
}
