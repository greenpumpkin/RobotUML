#include "Repartir.h"

using namespace std;

Commande* Repartir::constructeurVirtuel(LecteurCommandes *lc){
	return new Repartir(recepteur);
}

void Repartir::execute(){
	commandesExecutees().push(this);
	recepteur->repartir();
}

void Repartir::desexecute(){
	recepteur->figer();
}
