/*!
* 
* Classe Objet.h
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/


#include <iostream>
#include <string>

#ifndef OBJET_H
#define OBJET_H

class Objet {

	private:
		int _poids;

	public:
		//Constructeur
		Objet(int poids = 0) : _poids(poids) {}
		//Accesseur
		int getPoids() { return _poids; }
};
#endif