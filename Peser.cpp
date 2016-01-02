#include "Peser.h"

using namespace std;

Commande* Peser::constructeurVirtuel(LecteurCommandes *lc){
	return new Peser(recepteur);
}

void Peser::execute(){
	commandesExecutees().push(this);
	recepteur->peser();
}

bool Peser::isReversible(){
	return false;
}



