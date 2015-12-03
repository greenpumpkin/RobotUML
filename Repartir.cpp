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
	return new Repartir();
}

void Repartir::execute(){
	recepteur->repartir();
}

void Repartir::desexecute(){
	cout<<"non implémenté"<<endl;
}
