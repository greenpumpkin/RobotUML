/*!
* 
* Fichier Avancer.cpp
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include "Avancer.h"

using namespace std;

Commande* Avancer::constructeurVirtuel(LecteurCommandes *lc){
	_x=lc->getInt("Donner un entier pour la position X: ");
	_y=lc->getInt("Donner un entier pour la position Y: ");
	return new Avancer(recepteur,_x,_y);
}

void Avancer::execute(){
	commandesExecutees().push(this);
	recepteur->avancer(_x,_y);
}

void Avancer::desexecute(){
	recepteur->avancer(_old_x, _old_y);
}

bool Avancer::isReversible(){
	return true;
}
