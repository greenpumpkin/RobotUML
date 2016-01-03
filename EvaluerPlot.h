/*!
* 
* Classe EvaluerPlot.h
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include <iostream>     
#include <string>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Robot.h"

using namespace std;

#ifndef _EVALUER_PLOT_H
#define _EVALUER_PLOT_H

class EvaluerPlot : public CommandeRobot {

	public:
		
		EvaluerPlot(Robot *r): CommandeRobot("evaluer plot",r){}
		Commande* constructeurVirtuel(LecteurCommandes *lc);

		void execute();
		bool isReversible();
};

#endif
