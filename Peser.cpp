#include "Peser.h"

using namespace std;

Peser * Peser::instance = new Peser();

Commande* Peser::constructeurVirtuel(LecteurCommandes *lc){
	recepteur=lc->getRobot();
	return instance;
}

void Peser::execute(){
	commandesExecutees().push(instance);
	recepteur->peser();
}

void Peser::desexecute(){
	cout<<"La commande 'Peser' n'est pas réversible"<<endl;
}



