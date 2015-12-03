#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Robot.h"

using namespace std;

#ifndef _COMMANDE_SAISIR_H
#define _COMMANDE_SAISIR_H

class Saisir : public CommandeRobot {
	private:
		static Saisir *instance;
	public:
		Saisir(string c);
		Saisir(): CommandeRobot("Saisir"){}
		Commande* constructeurVirtuel();

		void execute();
		void desexecute();
};

#endif