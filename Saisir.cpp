/*!
* 
* Fichier Saisir.cpp
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include "Saisir.h"

using namespace std;

Commande* Saisir::constructeurVirtuel(LecteurCommandes *lc){
	int poids=lc->getInt("Donner un entier pour le poids de l'objet: ");
	_obj=Objet(poids);
	return new Saisir(recepteur, poids);
}

void Saisir::execute(){
	commandesExecutees().push(this);
	recepteur->saisir(_obj);
}

void Saisir::desexecute(){
	recepteur->poser();
}

bool Saisir::isReversible(){
	return true;
}
