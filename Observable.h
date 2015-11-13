#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "Observateur.h"

#ifndef OBSERVABLE_H
#define OBSERVABLE_H

class Observable {
	
	private:

		Vector<Observateur> _afficheurs

	public: 
		void notifier();
		void attacher(Observateur o);
		void detache(Observateur o);
};
#endif
