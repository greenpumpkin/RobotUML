#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Robot.h"

using namespace std;

#ifndef _COMMANDE_POSER_H
#define _COMMANDE_POSER_H

class Poser : public CommandeRobot {
	private:
		static Poser *instance;
	public:
		Poser(string c);
		Poser(): CommandeRobot("Poser"){}
		Commande* constructeurVirtuel();

		void execute();
		void desexecute();
};

#endif