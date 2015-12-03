#include <iostream>     
#include <fstream>
#include <string>
#include <map>
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
		EvaluerPlot(): CommandeRobot("Evaluer Plot"){}
		Commande* constructeurVirtuel();

		void execute();
		void desexecute();
};

#endif