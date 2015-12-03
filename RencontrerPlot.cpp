#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "CommandeRobot.h"
#include "RencontrerPlot.h"
#include "Robot.h"

using namespace std;

RencontrerPlot * RencontrerPlot::instance = new RencontrerPlot();

Commande* RencontrerPlot::constructeurVirtuel(LecteurCommandes *lc){
	return new RencontrerPlot();
}

void RencontrerPlot::execute(){
	Plot p1(1);
	recepteur->rencontrerPlot(p1);
}

void RencontrerPlot::desexecute(){
	cout<<"non implémenté"<<endl;
}
