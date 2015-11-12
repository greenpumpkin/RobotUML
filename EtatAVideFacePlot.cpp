#include "Robot.h"
#include "Etat.h"
#include "EtatEnRoute.h"
#include "EtatAVide.h"
#include "EtatAVideFacePlot.h"
#include "EtatEnChargeFacePlot.h"

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

Etat * EtatAVideFacePlot::saisir()
{
	return EtatEnChargeFacePlot::getInstance();
}

Etat * EtatAVideFacePlot::tourner()
{
	return EtatAVide::getInstance();
}