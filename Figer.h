#include <iostream>  
#include <string>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Robot.h"

using namespace std;

#ifndef _FIGER_H
#define _FIGER_H

class Figer : public CommandeRobot {
	
	public:
		

		Figer(Robot *r): CommandeRobot("Figer", r){}
		Commande* constructeurVirtuel(LecteurCommandes *lc);

		void execute();
		void desexecute();
		bool isReversible();
};

#endif