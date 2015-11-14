#include <iostream>
#include <string>
#include "Observateur.h"
#include "Observable.h"

using namespace std;

#ifndef AFFICHEUR_CONSOLE_H
#define AFFICHEUR_CONSOLE_H

class AfficheurConsole : public Observateur {

	private:
		Observable _obs;
		
	public:
		AfficheurConsole(Observable r): _obs(r){}

		void afficher();

};
#endif
