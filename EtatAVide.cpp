#include "Robot.h"
#include "Etat.h"
#include "EtatEnRoute.h"
#include "EtatAVide.h"

EtatAVide * EtatAVide::instance = new EtatAVide();

EtatAVide::EtatAVide()
{}

EtatAVide * EtatAVide::getInstance()
{
	return instance;
}

Etat * EtatAVide::avancer()
{
	return instance;
}

Etat * EtatAVide::rencontrerPlot()
{
	return EtatAVideFacePlot::getInstance();
}