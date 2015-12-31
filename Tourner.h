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
		static Tourner *instance;
		string _direction;
		string _old_direction;
	public:
		Tourner(string c);
		Tourner(): CommandeRobot("tourner"){}
		Commande* constructeurVirtuel(LecteurCommandes *lc);

		void execute();
		void desexecute();
};

#endif