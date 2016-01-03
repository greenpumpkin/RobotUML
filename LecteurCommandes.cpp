/*!
* 
* Fichier LecteurCommandes.cpp
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include <sstream>
#include <typeinfo>
#include <vector>
#include <cctype>
#include <algorithm>

#include "LecteurCommandes.h"
#include "Commande.h"

using namespace std;


static vector<string> commandes;

bool isCommande(string ligne)
{
	if(find(commandes.begin(), commandes.end(), ligne) != commandes.end()) {
		return true;
	}
	return false;
}


void LecteurCommandes::execFichier(){
	string ligne;
	for(auto it = Commande::commandesPossibles().cbegin(); it != Commande::commandesPossibles().cend(); ++it)
	{
		//cout << it->first << endl;
		commandes.push_back(it->first);
	}
 	while(getline(fichierEntree, ligne)){
		transform(ligne.begin(), ligne.end(), ligne.begin(), ::tolower);
		if(ligne==""){
 			getline(fichierEntree, ligne);
		}else if (!isCommande(ligne)) {
 			cout<<"La commande "<<ligne<<" n'existe pas encore."<<endl;
 			getline(fichierEntree, ligne);
 		}
 		//Créer un objet commande et appeler execute dessus
 		Commande *c=Commande::nouvelleCommande(ligne, this);
 		c->execute(); 
 		//Pas besoin de try catch, on catch déjà l'exception dans Robot.cpp
 		cout<<"----------******------------"<< endl;
 		cout <<"Commande :"<< endl; 	}

 		fichierEntree.clear();
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
