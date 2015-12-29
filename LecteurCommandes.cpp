#include <iostream>     
#include <fstream>
#include <string>
#include <algorithm>
#include "LecteurCommandes.h"
#include "Commande.h"

using namespace std;

void LecteurCommandes::execFichier(){
	string ligne;
	while(getline(fichierEntree, ligne)){
		cout<<"----------******------------"<< endl;
		transform(ligne.begin(), ligne.end(), ligne.begin(), ::tolower);
		if(ligne==""){
			getline(fichierEntree, ligne);
			transform(ligne.begin(), ligne.end(), ligne.begin(), ::tolower);
		}
		else if (ligne!="avancer" && ligne!="tourner" && ligne!="saisir" && ligne!="poser" && ligne!="peser" 
				&& ligne!="rencontrer plot" && ligne!="evaluer plot" && ligne!="figer" && ligne!="repartir" && ligne!="defaire"){
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
