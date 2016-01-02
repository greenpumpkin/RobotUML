#include "EvaluerPlot.h"

using namespace std;

Commande* EvaluerPlot::constructeurVirtuel(LecteurCommandes *lc){
	return new EvaluerPlot(recepteur);
}

void EvaluerPlot::execute(){
	commandesExecutees().push(this);
	recepteur->evaluerPlot();
}

void EvaluerPlot::desexecute(){
	cout<<"La commande 'Evaluer Plot' n'est pas réversible"<<endl;
}
