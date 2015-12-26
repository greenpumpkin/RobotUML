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
	int hauteur=lc->getInt("Donner un entier pour la hauteur du plot: ");
	_plot=Plot(hauteur);
	recepteur=lc->getRobot();
	return instance;
}

void RencontrerPlot::execute(){
	recepteur->rencontrerPlot(_plot);
}

void RencontrerPlot::desexecute(){
	cout<<"non implémenté"<<endl;
}
