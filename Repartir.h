#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Robot.h"

using namespace std;

#ifndef _COMMANDE_REPARTIR_H
#define _COMMANDE_REPARTIR_H

class Repartir : public CommandeRobot {
	private:
		static Repartir *instance;
	public:
		Repartir(string c);
		Repartir(): CommandeRobot("Repartir"){}
		Commande* constructeurVirtuel();

		void execute();
		void desexecute();
};

#endif