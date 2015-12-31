#include <iostream>     
#include <string>
#include "Commande.h"
#include "Robot.h"

using namespace std;

#ifndef _DEFAIRE_H
#define _DEFAIRE_H

class Defaire : public Commande {
	private:
		static Defaire *instance;
	public:
		Defaire(string c);
		Defaire(): Commande("defaire"){}
		Commande* constructeurVirtuel(LecteurCommandes *lc);

		void execute();
};

#endif