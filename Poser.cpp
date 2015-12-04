#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Poser.h"
#include "Robot.h"

using namespace std;

//Instance de EtatAVideFacePlot
Poser * Poser::instance = new Poser();

Commande* Poser::constructeurVirtuel(LecteurCommandes *lc){
	return instance;
}

void Poser::execute(){
	recepteur->poser();
}

void Poser::desexecute(){
	cout<<"non implémenté"<<endl;
}
