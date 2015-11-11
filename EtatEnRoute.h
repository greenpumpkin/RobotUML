#include <iostream>
#include <string>
#include "Etat.h"

#ifndef ETAT_EN_ROUTE_H
#define ETAT_EN_ROUTE_H

class EtatEnRoute : public Etat {

	private:
		static EtatEnRoute *instance;
	protected:
		EtatEnRoute();
	public:
		//Méthode pour récupérer l'instance de la classe
		static EtatEnRoute *getInstance();
		Etat *figer();
};
#endif