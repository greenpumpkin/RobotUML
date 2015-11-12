#include <iostream>
#include <string>
#include "Etat.h"
#include "EtatEnRoute.h"

#ifndef ETAT_EN_CHARGE_H
#define ETAT_EN_CHARGE_H

class EtatEnCharge : public EtatEnRoute {

	private:
		static EtatEnCharge *instance;

	protected:
		EtatEnCharge();

	public:
		static EtatEnCharge *getInstance();
		Etat *avancer();
		Etat *tourner();
		Etat *peser();
		Etat *rencontrerPlot();

};
#endif