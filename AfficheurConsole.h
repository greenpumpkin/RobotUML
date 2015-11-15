/*!
* 
* Classe AfficheurConsole.h
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include <iostream>
#include <string>
#include "Observateur.h"
#include "Observable.h"

using namespace std;

#ifndef AFFICHEUR_CONSOLE_H
#define AFFICHEUR_CONSOLE_H

class AfficheurConsole : public Observateur {

	private:
		Robot *_robot;
		
	public:
		//Constructeur
		AfficheurConsole(Robot *r): _robot(r) {}

		void afficher();

};
#endif
