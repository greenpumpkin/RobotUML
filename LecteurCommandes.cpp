#include <iostream>     
#include <fstream>
#include <string>
#include "LecteurCommandes.h"

using namespace std;

void LecteurCommandes::execFichier(){
	string ligne;
	while(getline(fichierEntree, ligne)){
		cout << ligne << endl;
		//Créer un objet commande et appeler execute dessu  
	}
}