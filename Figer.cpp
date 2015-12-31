#include "Figer.h"
using namespace std;

Figer * Figer::instance = new Figer();

Commande* Figer::constructeurVirtuel(LecteurCommandes *lc){
	recepteur=lc->getRobot();
	return instance;
}

void Figer::execute(){
	commandesExecutees().push(instance);
	recepteur->figer();
}

void Figer::desexecute(){
	recepteur->repartir();
}
