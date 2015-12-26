#include <iostream>     
#include <fstream>
#include <string>
#include "LecteurCommandes.h"
#include "Commande.h"

using namespace std;

void LecteurCommandes::execFichier(){
	string ligne;
	while(getline(fichierEntree, ligne)){
		if(ligne=="")
			getline(fichierEntree, ligne);
		else if (ligne!="Avancer" && ligne!="Tourner" && ligne!="Saisir" && ligne!="Poser" && ligne!="Peser" 
				&& ligne!="Rencontrer Plot" && ligne!="Evaluer Plot" && ligne!="Figer" && ligne!="Repartir"){
			cout<<"La commande "<<ligne<<" n'existe pas encore."<<endl;
			getline(fichierEntree, ligne);
		}

		//Créer un objet commande et appeler execute dessus
		Commande *c=Commande::nouvelleCommande(ligne, this);
		c->execute(); 
	}
}

int LecteurCommandes::getInt(string message){
	cout << message;
	string entier;
	cin >> entier;
	while(!isNumber(entier)) {
	    cout << "Ce n'est pas un entier. Enter un entier:";
	    cin.clear();
	    cin >> entier;
	}  
	return stoi(entier);
}

bool LecteurCommandes::isNumber(string s){
    for (int i = 0; i < s.size(); i++)
        if (!isdigit(s[i]))
            return false;
    return true;
}

string LecteurCommandes::getDirection(string message){
	cout << message;
	string direction;
	cin >> direction;
	cout<<"direction: "<<direction<<endl;
	while(direction!="N" && direction!="O" && direction!="S" && direction!="E") {
	    cout << "Ce n'est pas une direction. Enter une direction (N, O, S, E):";
	    cin.clear();
	    cin >> direction;
	}  
	return direction;
}
