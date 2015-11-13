#include <iostream>
#include <string>

#ifndef OBJET_H
#define OBJET_H

class Objet {

	private:
		int _poids;

	public:
		Objet(int poids = 0) : _poids(poids) {}
		int getPoids() { return _poids; }
};
#endif