/*!
* 
* Classe CommandeRobot.h
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include <iostream>   
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

		CommandeRobot(string c, Robot * _r): Commande(c), recepteur(_r) {}
		
};

#endif
