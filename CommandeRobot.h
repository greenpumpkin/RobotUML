#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "Robot.h"
#include "LecteurCommandes.h"

using namespace std;

#ifndef _COMMANDE_ROBOT_H
#define _COMMANDE_ROBOT_H

class CommandeRobot : public Commande {
	protected:
		Robot *recepteur;

		CommandeRobot(string c): Commande(c){}

	public:
		//virtual Commande* constructeurVirtuel()=0;
		virtual void execute()=0;
		virtual void desexecute()=0;
		void setRobot(Robot * r){ recepteur=r;}
};

#endif