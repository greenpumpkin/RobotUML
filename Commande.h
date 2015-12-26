#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include <stack>
#include "Robot.h"
#include "LecteurCommandes.h"

using namespace std;

#ifndef _COMMANDE_H
#define _COMMANDE_H

class Commande {
	private:
		bool reversible;
	public:
		static stack<Commande> commandesExecutees;
		static map<string, Commande*>& commandesPossibles();
		Commande(string c);
		static Commande* nouvelleCommande(string c, LecteurCommandes *lc);

		virtual Commande* constructeurVirtuel(LecteurCommandes *lc)=0;
		virtual void execute()=0;
		virtual void desexecute()=0;
};

#endif