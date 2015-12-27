#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "Robot.h"
#include "LecteurCommandes.h"

using namespace std;

#ifndef _DEFAIRE_H
#define _DEFAIRE_H

class Defaire : public Commande {
	private:
		static Defaire *instance;
	public:
		Defaire(string c);
		Defaire(): Commande("Defaire"){}
		Commande* constructeurVirtuel(LecteurCommandes *lc);

		void execute();
		//void desexecute();
};

#endif