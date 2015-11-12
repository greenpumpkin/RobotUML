#include "Robot.h"
#include "Etat.h"
#include "EtatEnRoute.h"
#include "EtatAVideFacePlot.h"

EtatAVideFacePlot * EtatAVideFacePlot::instance = new EtatAVideFacePlot();

EtatAVideFacePlot::EtatAVideFacePlot()
{}

EtatAVideFacePlot * EtatAVideFacePlot::getInstance()
{
	return instance;
}

Etat * EtatAVideFacePlot::evaluerPlot()
{
	return instance;
}

/**Etat * EtatAVideFacePlot::saisir()
{
	return EtatEnChargeFacePlot::getInstance();
}**/