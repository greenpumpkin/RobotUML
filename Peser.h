#include <iostream>   
#include <string>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Robot.h"

using namespace std;

#ifndef _COMMANDE_PESER_H
#define _COMMANDE_PESER_H

class Peser : public CommandeRobot {
	
	public:
		//Peser(string c);
		
		Peser(Robot * r) : CommandeRobot("peser", r){}
		Commande* constructeurVirtuel(LecteurCommandes *lc);

		void execute();
		void desexecute();
};

#endif