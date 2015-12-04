#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Peser.h"
#include "Robot.h"

using namespace std;

Peser * Peser::instance = new Peser();

Commande* Peser::constructeurVirtuel(LecteurCommandes *lc){
	return instance;
}

void Peser::execute(){
	recepteur->peser();
}

void Peser::desexecute(){
	cout<<"non implémenté"<<endl;
}
