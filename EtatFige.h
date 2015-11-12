#include <iostream>
#include <string>
#include "Etat.h"

using namespace std;

#ifndef ETAT_FIGE_H
#define ETAT_FIGE_H

class EtatFige : public Etat {

	private:
		static EtatFige *instance;
		static Etat *ancienEtat;

	protected:
		EtatFige();
	
	public:

		//Méthode pour récupérer l'instance de la classe
		static EtatFige *getInstance();
		static void setEtat(Etat*); 
		Etat *repartir();
		string nom();
};
#endif
