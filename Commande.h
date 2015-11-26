#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Robot.h"

using namespace std;

#ifndef _COMMANDE_H
#define _COMMANDE_H

class Commande {
	private:
		bool reversible;
	public:
		static map<string, Commande*>& commandesPossibles();
		Commande(string c);
		static Commande* nouvelleCommande(string c);

		virtual Commande* constructeurVirtuel()=0;
		virtual void execute()=0;
		virtual void desexecute()=0;
		virtual void setRobot(Robot *r)=0;
};

#endif