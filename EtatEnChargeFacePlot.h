/*!
* 
* Classe EtatEnChargeFacePlot.h
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include <iostream>
#include <string>
#include "Etat.h"
#include "EtatEnRoute.h"

using namespace std;

#ifndef ETAT_EN_CHARGE_FACE_PLOT_H
#define ETAT_EN_CHARGE_FACE_PLOT_H

class EtatEnChargeFacePlot : public EtatEnRoute {

	private:
		static EtatEnChargeFacePlot *instance;

	protected:
		//Constructeur
		EtatEnChargeFacePlot(string nom) : EtatEnRoute(nom) {};

	public:
		static EtatEnChargeFacePlot *getInstance();
		Etat *poser();
		Etat *peser();
		Etat *evaluerPlot();
		Etat *tourner();
		Etat *figer();

};
#endif
