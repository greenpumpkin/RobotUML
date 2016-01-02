#include <iostream>
#include <string>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Robot.h"
#include "Objet.h"

using namespace std;

#ifndef _COMMANDE_POSER_H
#define _COMMANDE_POSER_H

class Poser : public CommandeRobot {
	private:
		Objet _old_objet;
	public:
		//Poser(string c);
		Poser(Robot *r): CommandeRobot("Poser",r){}
		Commande* constructeurVirtuel(LecteurCommandes *lc);

		void execute();
		void desexecute();
};

#endif