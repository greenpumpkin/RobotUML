#include <iostream>     
#include <string>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Robot.h"

using namespace std;

#ifndef _EVALUER_PLOT_H
#define _EVALUER_PLOT_H

class EvaluerPlot : public CommandeRobot {
	
	private:
		static EvaluerPlot *instance;
	public:
		EvaluerPlot(string c);
		EvaluerPlot(): CommandeRobot("evaluer plot"){}
		Commande* constructeurVirtuel(LecteurCommandes *lc);

		void execute();
		void desexecute();
};

#endif