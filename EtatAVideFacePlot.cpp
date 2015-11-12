#include <iostream>
#include <string>
#include "Robot.h"
#include "Etat.h"
#include "EtatEnRoute.h"
#include "EtatAVide.h"
#include "EtatAVideFacePlot.h"
#include "EtatEnChargeFacePlot.h"

using namespace std;

EtatAVideFacePlot * EtatAVideFacePlot::instance = new EtatAVideFacePlot("À vide face plot");

EtatAVideFacePlot * EtatAVideFacePlot::getInstance()
{
	return instance;
}

Etat * EtatAVideFacePlot::evaluerPlot()
{
	return instance;
}

Etat * EtatAVideFacePlot::saisir()
{
	return EtatEnChargeFacePlot::getInstance();
}

Etat * EtatAVideFacePlot::tourner()
{
	return EtatAVide::getInstance();
}
