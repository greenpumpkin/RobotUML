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
		Robot *robot;
		//Pile des commandes exécutées pour le 3.6
	public:
		LecteurCommandes(istream& is, Robot *r) : fichierEntree(is), robot(r){}
		LecteurCommandes(Robot *r) : fichierEntree(cin), robot(r){}

		void execFichier();

		Robot *getRobot(){return robot;}
};

#endif