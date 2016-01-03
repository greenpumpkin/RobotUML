/*!
* 
* Fichier Tourner.cpp
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include "Tourner.h"

using namespace std;

Commande* Tourner::constructeurVirtuel(LecteurCommandes *lc){
	_direction=lc->getDirection("Donner une direction (N, O, S ou E): ");
	_old_direction=recepteur->getDirection();
	return new Tourner(recepteur);
}

void Tourner::execute(){
	commandesExecutees().push(this);
	recepteur->tourner(_direction);
}

void Tourner::desexecute(){
	recepteur->tourner(_old_direction);
}

bool Tourner::isReversible(){
	return true;
}
