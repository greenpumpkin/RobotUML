/*!
* 
* Classe Tourner.h
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include <iostream>
#include <string>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Robot.h"

using namespace std;

#ifndef _COMMANDE_TOURNER_H
#define _COMMANDE_TOURNER_H

class Tourner : public CommandeRobot {
	private:
		string _direction;
		string _old_direction;
	public:
		Tourner(Robot *r, string dir = "N"): CommandeRobot("tourner",r), _direction(dir) {}
		Commande* constructeurVirtuel(LecteurCommandes *lc);

		void execute();
		void desexecute();
		bool isReversible();
};

#endif
