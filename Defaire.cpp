#include "Commande.h"
#include "CommandeRobot.h"
#include "Defaire.h"
#include "Robot.h"

using namespace std;

Commande* Defaire::constructeurVirtuel(LecteurCommandes *lc){
	return new Defaire();
}

void Defaire::execute(){
	Commande *lastCommande= commandesExecutees().top();
	lastCommande->desexecute();
	commandesExecutees().pop();
}