#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Tourner.h"
#include "Robot.h"

using namespace std;

Tourner * Tourner::instance = new Tourner();

Commande* Tourner::constructeurVirtuel(LecteurCommandes *lc){
	//setRobot(lc->getRobot());
	return new Tourner();
}

void Tourner::execute(){
	recepteur->tourner("S");
}

void Tourner::desexecute(){
	cout<<"non implémenté"<<endl;
}
