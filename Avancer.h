#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Robot.h"

using namespace std;

#ifndef _COMMANDE_AVANCER_H
#define _COMMANDE_AVANCER_H

class Avancer : public CommandeRobot {
	private:
		static Avancer *instance;
		int _x;
		int _y;
	public:
		Avancer(string c);
		Avancer(): CommandeRobot("Avancer"){}
		Commande* constructeurVirtuel(LecteurCommandes *lc);

		void execute();
		void desexecute();
};

#endif