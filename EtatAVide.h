#include <iostream>
#include <string>
#include "Etat.h"
#include "EtatEnRoute.h"
#include "EtatAVideFacePlot.h"

using namespace std;

#ifndef ETAT_A_VIDE_H
#define ETAT_A_VIDE_H

class EtatAVide : public EtatEnRoute {

	private:
		static EtatAVide *instance;

	protected:
		//EtatAVide();

	public:
		EtatAVide();
		static EtatAVide *getInstance();
		Etat *avancer();
		Etat *rencontrerPlot();
		Etat *tourner();
		string nom();

};
#endif
