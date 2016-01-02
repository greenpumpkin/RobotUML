#include "Peser.h"

using namespace std;

Commande* Peser::constructeurVirtuel(LecteurCommandes *lc){
	return new Peser(recepteur);
}

void Peser::execute(){
	commandesExecutees().push(this);
	recepteur->peser();
}

void Peser::desexecute(){
	cout<<"La commande 'Peser' n'est pas réversible"<<endl;
}



