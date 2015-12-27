#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Defaire.h"
#include "Robot.h"

using namespace std;

Defaire * Defaire::instance = new Defaire();

Commande* Defaire::constructeurVirtuel(LecteurCommandes *lc){
	return instance;
}

void Defaire::execute(){
	Commande *lastCommande= commandesExecutees().top();
	lastCommande->desexecute();
	commandesExecutees().pop();
}

void Defaire::desexecute(){
}