#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Robot.h"
#include "Plot.h"


using namespace std;

#ifndef _COMMANDE_RENCONTRER_PLOT_H
#define _COMMANDE_RENCONTRER_PLOT_H

class RencontrerPlot : public CommandeRobot {
	private:
		static RencontrerPlot *instance;
		Plot _plot;
	public:
		RencontrerPlot(string c);
		RencontrerPlot(): CommandeRobot("Rencontrer Plot"){}
		Commande* constructeurVirtuel(LecteurCommandes *lc);

		void execute();
		void desexecute();
};

#endif