#include <iostream>
#include <string>
#include "Etat.h"
#include "EtatEnRoute.h"

#ifndef ETAT_A_VIDE_FACE_PLOT_H
#define ETAT_A_VIDE_FACE_PLOT_H

class EtatAVideFacePlot : public EtatEnRoute {

	private:
		static EtatAVideFacePlot *instance;

	protected:
		EtatAVideFacePlot();

	public:
		static EtatAVideFacePlot *getInstance();
		Etat *evaluerPlot();
		Etat *saisir();

};
#endif