#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"

using namespace std;

Commande::Commande(string c){
	commandesPossibles()[c]=this;
}

map<string, Commande*>& Commande::commandesPossibles(){
	static map<string, Commande*>* commandesPossibles= new map<string, Commande*>();
	return *commandesPossibles;
}

Commande* Commande::nouvelleCommande(string c){
	return commandesPossibles()[c]->constructeurVirtuel();
	cout<<"nvl com"<<endl;
}



