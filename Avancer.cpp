#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Avancer.h"
#include "Robot.h"

using namespace std;

//Instance de EtatAVideFacePlot
Avancer * Avancer::instance = new Avancer();

Commande* Avancer::constructeurVirtuel(){
	return new Avancer();
}

void Avancer::execute(){
	recepteur->avancer(2,2);
}

void Avancer::desexecute(){
	cout<<"non implémenté"<<endl;
}
