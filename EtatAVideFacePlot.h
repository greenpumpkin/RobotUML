#include <iostream>
#include <string>
#include "Etat.h"
#include "EtatEnRoute.h"

using namespace std;

#ifndef ETAT_A_VIDE_FACE_PLOT_H
#define ETAT_A_VIDE_FACE_PLOT_H

class EtatAVideFacePlot : public EtatEnRoute {

	private:
		static EtatAVideFacePlot *instance;

	protected:
		EtatAVideFacePlot(string nom) : EtatEnRoute(nom) {};

	public:
		static EtatAVideFacePlot *getInstance();
		Etat *evaluerPlot();
		Etat *saisir();
		Etat *tourner();
		Etat *figer();
		
};
#endif
