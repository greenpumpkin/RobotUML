#include <iostream>
#include <string>
#include "Observateur.h"
#include "Observable.h"

using namespace std;

#ifndef AFFICHEUR_CONSOLE_H
#define AFFICHEUR_CONSOLE_H

class AfficheurConsole : public Observateur {

	private:
		Robot *robot;
		
	public:
		AfficheurConsole(Robot *r): robot(r){}

		void afficher();

};
#endif
