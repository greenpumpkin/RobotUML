#include "Tourner.h"

using namespace std;

Tourner * Tourner::instance = new Tourner();

Commande* Tourner::constructeurVirtuel(LecteurCommandes *lc){
	_direction=lc->getDirection("Donner une direction (N, O, S ou E): ");
	recepteur=lc->getRobot();
	_old_direction=recepteur->getDirection();
	return instance;
}

void Tourner::execute(){
	commandesExecutees().push(instance);
	recepteur->tourner(_direction);
}

void Tourner::desexecute(){
	recepteur->tourner(_old_direction);
}
