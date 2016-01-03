/*!
* 
* Classe Peser.h
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

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
		Peser(Robot * r) : CommandeRobot("peser", r){}
		Commande* constructeurVirtuel(LecteurCommandes *lc);

		void execute();
		bool isReversible();
};

#endif
