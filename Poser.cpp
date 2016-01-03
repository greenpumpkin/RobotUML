/*!
* 
* Fichier Poser.cpp
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include "Poser.h"

using namespace std;

Commande* Poser::constructeurVirtuel(LecteurCommandes *lc){
	return new Poser(recepteur);
}

void Poser::execute(){
	commandesExecutees().push(this);
	recepteur->poser();
}

void Poser::desexecute(){
	recepteur->saisir(_old_objet);
}

bool Poser::isReversible(){
	return true;
}
