#include "EvaluerPlot.h"

using namespace std;

Commande* EvaluerPlot::constructeurVirtuel(LecteurCommandes *lc){
	return new EvaluerPlot(recepteur);
}

void EvaluerPlot::execute(){
	commandesExecutees().push(this);
	recepteur->evaluerPlot();
}

bool EvaluerPlot::isReversible(){
	return false;
}

