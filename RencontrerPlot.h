#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Robot.h"

using namespace std;

#ifndef _COMMANDE_RENCONTRER_PLOT_H
#define _COMMANDE_RENCONTRER_PLOT_H

class RencontrerPlot : public CommandeRobot {
	private:
		static RencontrerPlot *instance;
	public:
		RencontrerPlot(string c);
		RencontrerPlot(): CommandeRobot("Rencontrer Plot"){}
		Commande* constructeurVirtuel();

		void execute();
		void desexecute();
};

#endif