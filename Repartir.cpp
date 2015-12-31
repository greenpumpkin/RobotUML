#include "Repartir.h"

using namespace std;

Repartir * Repartir::instance = new Repartir();

Commande* Repartir::constructeurVirtuel(LecteurCommandes *lc){
	recepteur=lc->getRobot();
	return instance;
}

void Repartir::execute(){
	commandesExecutees().push(instance);
	recepteur->repartir();
}

void Repartir::desexecute(){
	recepteur->figer();
}
