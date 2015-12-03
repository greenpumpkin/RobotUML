#include <iostream>     
#include <fstream>
#include <string>
#include <map>
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
		Peser() : CommandeRobot("Peser"){}
		Commande* constructeurVirtuel();

		void execute();
		void desexecute();
};

#endif