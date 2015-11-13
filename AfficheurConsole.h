#include <iostream>
#include <string>
#include "Observateur.h"

using namespace std;

#ifndef AFFICHEUR_CONSOLE_H
#define AFFICHEUR_CONSOLE_H

class AfficheurConsole : public Observateur {

	private:
		Robot _robot;
		
	public:
		void afficher();

};
#endif
