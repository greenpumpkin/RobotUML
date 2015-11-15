/*!
* 
* Classe Observable.h
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "Observateur.h"
#include "Objet.h"
#include "Etat.h"
#include "Plot.h"
#include "Position.h"

#ifndef OBSERVABLE_H
#define OBSERVABLE_H

using namespace std;

class Observable {
	
	protected:
		vector<Observateur*> _afficheurs;

	public: 
		void notifier();
		void attacher(Observateur *o);
		void detacher(Observateur *o);
};
#endif
