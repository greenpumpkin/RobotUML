#include <iostream>     
#include <fstream>
#include <string>

using namespace std;

#ifndef _LECTEUR_COMMANDES_H
#define _LECTEUR_COMMANDES_H

class LecteurCommandes {
	private:
		istream& fichierEntree;
		//Pile des commandes exécutées pour le 3.6
	public:
		LecteurCommandes(istream& is) : fichierEntree(is){}
		LecteurCommandes() : fichierEntree(cin){}

		void execFichier();
};

#endif