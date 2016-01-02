#include <iostream>  
#include <string>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Robot.h"
#include "Plot.h"


using namespace std;

#ifndef _COMMANDE_RENCONTRER_PLOT_H
#define _COMMANDE_RENCONTRER_PLOT_H

class RencontrerPlot : public CommandeRobot {
	private:
		Plot _plot;
	public:
		RencontrerPlot(Robot *r): CommandeRobot("rencontrer plot",r){}
		Commande* constructeurVirtuel(LecteurCommandes *lc);

		void execute();
		bool isReversible();
};

#endif