#include "EvaluerPlot.h"

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
	cout<<"La commande 'Evaluer Plot' n'est pas réversible"<<endl;
}
