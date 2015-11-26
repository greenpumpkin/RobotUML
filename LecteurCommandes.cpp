#include <iostream>     
#include <fstream>
#include <string>
#include "LecteurCommandes.h"
#include "Commande.h"

using namespace std;

void LecteurCommandes::execFichier(){
	string ligne;
	while(getline(fichierEntree, ligne)){
		//Créer un objet commande et appeler execute dessus
		Commande *c=Commande::nouvelleCommande(ligne);
		c->setRobot(robot);
		c->execute(); 
	}
}