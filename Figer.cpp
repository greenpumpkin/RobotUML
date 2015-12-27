#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Figer.h"
#include "Robot.h"

using namespace std;

Figer * Figer::instance = new Figer();

Commande* Figer::constructeurVirtuel(LecteurCommandes *lc){
	recepteur=lc->getRobot();
	return instance;
}

void Figer::execute(){
	commandesExecutees().push(instance);
	recepteur->figer();
}

void Figer::desexecute(){
	recepteur->repartir();
}
