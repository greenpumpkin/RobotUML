#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "CommandeRobot.h"
#include "EvaluerPlot.h"
#include "Robot.h"

using namespace std;

EvaluerPlot * EvaluerPlot::instance = new EvaluerPlot();

Commande* EvaluerPlot::constructeurVirtuel(LecteurCommandes *lc){
	recepteur=lc->getRobot();
	return instance;
}

void EvaluerPlot::execute(){
	recepteur->evaluerPlot();
}

void EvaluerPlot::desexecute(){
	cout<<"non implémenté"<<endl;
}
