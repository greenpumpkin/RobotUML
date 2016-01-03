/*!
* 
* Classe Saisir.h
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include <iostream> 
#include <string>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Robot.h"
#include "Objet.h"

using namespace std;

#ifndef _COMMANDE_SAISIR_H
#define _COMMANDE_SAISIR_H

class Saisir : public CommandeRobot {
	private:
		Objet _obj;
	public:
		Saisir(Robot *r): CommandeRobot("saisir",r) {}
		Commande* constructeurVirtuel(LecteurCommandes *lc);

		void execute();
		void desexecute();
		bool isReversible();
};

#endif
