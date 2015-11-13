#include <iostream>
#include <string>
#include "Robot.h"
#include "Etat.h"
#include "EtatEnRoute.h"
#include "EtatEnCharge.h"
#include "EtatEnChargeFacePlot.h"
#include "EtatAVideFacePlot.h"
#include "EtatFige.h"

using namespace std;

EtatEnChargeFacePlot * EtatEnChargeFacePlot::instance = new EtatEnChargeFacePlot("En charge face plot");

EtatEnChargeFacePlot * EtatEnChargeFacePlot::getInstance()
{
	return instance;
}

Etat * EtatEnChargeFacePlot::poser()
{
	return EtatAVideFacePlot::getInstance();
}

Etat * EtatEnChargeFacePlot::evaluerPlot()
{
	return instance;
}

Etat * EtatEnChargeFacePlot::peser()
{
	return instance;
}

Etat * EtatEnChargeFacePlot::tourner()
{
	return EtatEnChargeFacePlot::getInstance();
}

Etat * EtatEnChargeFacePlot::figer()
{
	EtatFige::setEtat(instance);
	return EtatFige::getInstance();
}