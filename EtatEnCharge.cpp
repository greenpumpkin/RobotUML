#include "Robot.h"
#include "Etat.h"
#include "EtatEnRoute.h"
#include "EtatEnCharge.h"
#include "EtatEnChargeFacePlot.h"

EtatEnCharge * EtatEnCharge::instance = new EtatEnCharge();

EtatEnCharge::EtatEnCharge()
{}

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