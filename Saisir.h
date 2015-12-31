#include <iostream> 
#include <string>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Robot.h"
#include "Objet.h"

using namespace std;

#ifndef _COMMANDE_SAISIR_H
#define _COMMANDE_SAISIR_H

class Saisir : public CommandeRobot {
	private:
		static Saisir *instance;
		Objet _obj;
	public:
		Saisir(string c);
		Saisir(): CommandeRobot("saisir"){}
		Commande* constructeurVirtuel(LecteurCommandes *lc);

		void execute();
		void desexecute();
};

#endif