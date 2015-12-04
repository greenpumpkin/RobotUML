#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Saisir.h"
#include "Robot.h"
#include "Objet.h"

using namespace std;

Saisir * Saisir::instance = new Saisir();

Commande* Saisir::constructeurVirtuel(LecteurCommandes *lc){
	return instance;
}

void Saisir::execute(){
	Objet o(5);
	recepteur->saisir(o);
}

void Saisir::desexecute(){
	cout<<"non implémenté"<<endl;
}
