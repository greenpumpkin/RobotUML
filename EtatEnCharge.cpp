#include <iostream>
#include <string>
#include "Robot.h"
#include "Etat.h"
#include "EtatEnRoute.h"
#include "EtatEnCharge.h"
#include "EtatEnChargeFacePlot.h"
#include "EtatFige.h"

using namespace std;

EtatEnCharge * EtatEnCharge::instance = new EtatEnCharge("En charge");

EtatEnCharge * EtatEnCharge::getInstance()
{
	return instance;
}

Etat * EtatEnCharge::avancer()
{
	return instance;
}

Etat * EtatEnCharge::tourner()
{
	return instance;
}

Etat * EtatEnCharge::rencontrerPlot()
{
	return EtatEnChargeFacePlot::getInstance();
}

Etat * EtatEnCharge::peser()
{
	return instance;
}

Etat * EtatEnCharge::figer()
{
	EtatFige::setEtat(instance);
	return EtatFige::getInstance();
}