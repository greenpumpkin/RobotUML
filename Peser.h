#include <iostream>   
#include <string>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Robot.h"

using namespace std;

#ifndef _COMMANDE_PESER_H
#define _COMMANDE_PESER_H

class Peser : public CommandeRobot {
	private:
		static Peser *instance;
	
	public:
		Peser(string c);
		Peser() : CommandeRobot("peser"){}
		Commande* constructeurVirtuel(LecteurCommandes *lc);

		void execute();
		void desexecute();
};

#endif