#include <iostream>
#include <string>
#include "Etat.h"
#include "EtatEnRoute.h"
#include "EtatAVideFacePlot.h"

#ifndef ETAT_A_VIDE_H
#define ETAT_A_VIDE_H

class EtatAVide : public EtatEnRoute {

	private:
		static EtatAVide *instance;

	protected:
		EtatAVide();

	public:
		static EtatAVide *getInstance();
		Etat *avancer();
		Etat *rencontrerPlot();

};
#endif