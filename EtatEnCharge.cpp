#include <iostream>
#include <string>
#include "Robot.h"
#include "Etat.h"
#include "EtatEnRoute.h"
#include "EtatEnCharge.h"
#include "EtatEnChargeFacePlot.h"

using namespace std;

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

string EtatEnCharge::nom() 
{
	return "en charge";
}