/*!
* 
* Classe Repartir.h
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

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
		Repartir(Robot *r): CommandeRobot("repartir",r){}
		Commande* constructeurVirtuel(LecteurCommandes *lc);

		void execute();
		void desexecute();
		bool isReversible();
};

#endif
