/*!
* 
* Classe Avancer.h
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include <iostream>   
#include <string>
#include <map>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Robot.h"

using namespace std;

#ifndef _COMMANDE_AVANCER_H
#define _COMMANDE_AVANCER_H

class Avancer : public CommandeRobot {
	private:
		int _x;
		int _y;
		int _old_x;
		int _old_y;

	public:

		Avancer(Robot * r, int x = 0, int y = 0) : CommandeRobot("avancer",r)
		 {
			//r = recepteur;
			_old_x=r->getPosition().getX();
			_old_y=r->getPosition().getY();
			_x = x;
			_y = y;
		}

		;

		Commande* constructeurVirtuel(LecteurCommandes *lc);

		void execute();
		void desexecute();
		bool isReversible();
};

#endif
