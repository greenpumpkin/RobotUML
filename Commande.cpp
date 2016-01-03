/*!
* 
* Fichier Commande.cpp
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include "Commande.h"

using namespace std;

Commande::Commande(string c){
	commandesPossibles()[c]=this;
}

map<string, Commande*>& Commande::commandesPossibles(){
	static map<string, Commande*>* commandesPossibles= new map<string, Commande*>();
	return *commandesPossibles;
}

stack<Commande*>& Commande::commandesExecutees(){
	static stack<Commande*>* commandesExecutees= new stack<Commande*>();
	return *commandesExecutees;
}

Commande* Commande::nouvelleCommande(string c, LecteurCommandes *lc){
	return commandesPossibles()[c]->constructeurVirtuel(lc);
}



