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
	for(auto it = Commande::commandesPossibles().cbegin(); it != Commande::commandesPossibles().cend(); ++it)
	{
		commandes.push_back(it->first);
	}

	while(true)
	{
		string ligne;
		cout <<"Commande :"<< endl;
		cin >> ligne;
		transform(ligne.begin(), ligne.end(),ligne.begin(), ::tolower);
		if (!isCommande(ligne)) 
		{
			cout <<"Cette commande n'existe pas encore"<< endl;
		} 
		else 
		{
		Commande * command = Commande::nouvelleCommande(ligne, this);
		try 
		{
		command->execute();	
		} 
		catch(Etat::Action_Impossible)
		{
		cout <<"Action impossible vu l'état"<< endl;
		}
		}
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
