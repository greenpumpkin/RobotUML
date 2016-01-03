/*!
* 
* Classe Defaire.h
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include <iostream>     
#include <string>
#include "Commande.h"
#include "Robot.h"

using namespace std;

#ifndef _DEFAIRE_H
#define _DEFAIRE_H

class Defaire : public Commande {
	public:
		Defaire(string c);
		Defaire(): Commande("defaire"){}
		Commande* constructeurVirtuel(LecteurCommandes *lc);

		void execute();
		bool isReversible();
};

#endif
