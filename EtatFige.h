/*!
* 
* Classe EtatFige.h
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include <iostream>
#include <string>
#include "Etat.h"

using namespace std;

#ifndef ETAT_FIGE_H
#define ETAT_FIGE_H

class EtatFige : public Etat {

	private:
		static Etat *ancienEtat;
		static EtatFige *instance;

	protected:
		//Constructeur
		EtatFige(string nom) : Etat(nom) {};

	public:
		static EtatFige *getInstance();
		static void setEtat(Etat*); 
		Etat *repartir();
};
#endif
