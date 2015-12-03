#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Robot.h"

using namespace std;

#ifndef _FIGER_H
#define _FIGER_H

class Figer : public CommandeRobot {
	
	private:
		static Figer *instance;
	public:
		Figer(string c);
		Figer(): CommandeRobot("Figer"){}
		Commande* constructeurVirtuel(LecteurCommandes *lc);

		void execute();
		void desexecute();
};

#endif