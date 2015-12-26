#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Repartir.h"
#include "Robot.h"

using namespace std;

Repartir * Repartir::instance = new Repartir();

Commande* Repartir::constructeurVirtuel(LecteurCommandes *lc){
	recepteur=lc->getRobot();
	return instance;
}

void Repartir::execute(){
	recepteur->repartir();
}

void Repartir::desexecute(){
	cout<<"non implémenté"<<endl;
}
