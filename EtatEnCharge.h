#include <iostream>
#include <string>
#include "Etat.h"
#include "EtatEnRoute.h"

using namespace std;

#ifndef ETAT_EN_CHARGE_H
#define ETAT_EN_CHARGE_H

class EtatEnCharge : public EtatEnRoute {

	private:
		static EtatEnCharge *instance;

	protected:
		EtatEnCharge(string nom) : EtatEnRoute(nom) {};
		
	public:
		static EtatEnCharge *getInstance();
		Etat *avancer();
		Etat *tourner();
		Etat *peser();
		Etat *rencontrerPlot();
		Etat *figer();

};
#endif
