#include "Figer.h"
using namespace std;

Commande* Figer::constructeurVirtuel(LecteurCommandes *lc){
	return new Figer(recepteur);
}

void Figer::execute(){
	commandesExecutees().push(this);
	recepteur->figer();
}

void Figer::desexecute(){
	recepteur->repartir();
}
