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
	return instance;
}

void Figer::execute(){
	recepteur->figer();
}

void Figer::desexecute(){
	cout<<"non implémenté"<<endl;
}
