#include "Poser.h"

using namespace std;

//Instance de EtatAVideFacePlot
Poser * Poser::instance = new Poser();

Commande* Poser::constructeurVirtuel(LecteurCommandes *lc){
	recepteur=lc->getRobot();
	_old_objet= recepteur->getObjet();
	return instance;
}

void Poser::execute(){
	commandesExecutees().push(instance);
	recepteur->poser();
}

void Poser::desexecute(){
	recepteur->saisir(_old_objet);
}
