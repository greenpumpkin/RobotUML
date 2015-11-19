#include <iostream>     
#include <fstream>
#include <string>
#include "LecteurCommandes.h"

using namespace std;

/*
LecteurCommandes::LecteurCommandes(string fichier){
	filebuf fb;
	if (fb.open (fichier,ios::in))
    	fichierEntree=&fb;
}*/

void LecteurCommandes::execFichier(){
	string ligne;
	while(getline(fichierEntree, ligne)){
		cout << ligne << endl;
		//Créer un objet commande et appeler execute dessu  
	}
}