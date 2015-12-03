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
		string delimiter = " ";
		string action = ligne.substr(0, ligne.find(delimiter));
		p1= atoi( ligne.substr(2, ligne.find(delimiter)).c_str());
		//cout<< "uuuuuuuuuuuuu" <<ligne.substr(2, ligne.find(delimiter)) <<"yyyyyyyyyy"<<endl;
		p2= atoi( ligne.substr(4, ligne.find(delimiter)).c_str());
		Commande *c=Commande::nouvelleCommande(action, this);
		c->setRobot(robot);
		c->execute(); 
	}
}
