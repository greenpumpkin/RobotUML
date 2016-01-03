/*!
* 
* Classe LecteurCommandes.h
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include <iostream>     
#include <fstream>
#include <string>
#include "Robot.h"

using namespace std;

#ifndef _LECTEUR_COMMANDES_H
#define _LECTEUR_COMMANDES_H

class LecteurCommandes {
	private:
		istream& fichierEntree;
		
	public:
		
		LecteurCommandes(istream& is) : fichierEntree(is) {}
		LecteurCommandes() : fichierEntree(cin) {}

		void execFichier();

		int getInt(string message);
		bool isNumber(string s);
		string getDirection(string message);

};

#endif
