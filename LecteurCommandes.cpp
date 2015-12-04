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
		Commande *c=Commande::nouvelleCommande(ligne, this);
		//c->setRobot(robot);
		c->execute(); 
	}
}

int LecteurCommandes::getInt(string message){
	cout << message;
	string entier;
	cin >> entier;
	while(!isNumber(entier)) {
	    cout << "Enter un nombre:";
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

string getDirection(string message){
	cout << message;
	string direction;
	cin >> direction;
	while(direction!="N"||direction!="O"||direction!="S"||direction!="E") {
	    cout << "Enter une direction (N, O, S, E):";
	    cin.clear();
	    cin >> direction;
	}  
	return direction;
}
