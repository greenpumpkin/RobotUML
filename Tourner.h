#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Robot.h"

using namespace std;

#ifndef _COMMANDE_TOURNER_H
#define _COMMANDE_TOURNER_H

class Tourner : public CommandeRobot {
	private:
		static Tourner *instance;
	public:
		Tourner(string c);
		Tourner(): CommandeRobot("Tourner"){}
		Commande* constructeurVirtuel();

		void execute();
		void desexecute();
};

#endif