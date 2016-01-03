/*!
* 
* Fichier Defaire.cpp
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include "Commande.h"
#include "CommandeRobot.h"
#include "Defaire.h"
#include "Robot.h"

using namespace std;

Defaire * Defaire::instance = new Defaire();

Commande* Defaire::constructeurVirtuel(LecteurCommandes *lc){
	return instance;
}


void Defaire::execute(){
	Commande *lastCommande= commandesExecutees().top();
	if (lastCommande->isReversible())
		lastCommande->desexecute();
	else 
		cout<<"La dernière commande n'est pas réversible" <<endl;
	commandesExecutees().pop();
}

bool Defaire::isReversible(){
	return false;
}
