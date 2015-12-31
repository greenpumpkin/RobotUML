#include "Saisir.h"

using namespace std;

Saisir * Saisir::instance = new Saisir();

Commande* Saisir::constructeurVirtuel(LecteurCommandes *lc){
	int poids=lc->getInt("Donner un entier pour le poids de l'objet: ");
	_obj=Objet(poids);
	recepteur=lc->getRobot();
	return instance;
}

void Saisir::execute(){
	commandesExecutees().push(instance);
	recepteur->saisir(_obj);
}

void Saisir::desexecute(){
	recepteur->poser();
}
