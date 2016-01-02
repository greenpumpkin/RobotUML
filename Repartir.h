#include <iostream>   
#include <string>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Robot.h"

using namespace std;

#ifndef _COMMANDE_REPARTIR_H
#define _COMMANDE_REPARTIR_H

class Repartir : public CommandeRobot {
	
	public:
		//Repartir(string c);
		Repartir(Robot *r): CommandeRobot("repartir",r){}
		Commande* constructeurVirtuel(LecteurCommandes *lc);

		void execute();
		void desexecute();
};

#endif