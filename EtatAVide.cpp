#include <iostream>
#include <string>
#include "Robot.h"
#include "Etat.h"
#include "EtatEnRoute.h"
#include "EtatAVide.h"
#include "EtatFige.h"

using namespace std;

EtatAVide * EtatAVide::instance = new EtatAVide("À vide");

EtatAVide * EtatAVide::getInstance()
{
	return instance;
}

Etat * EtatAVide::avancer()
{
	return instance;
}

Etat * EtatAVide::tourner()
{
	return instance;
}

Etat * EtatAVide::rencontrerPlot()
{
	return EtatAVideFacePlot::getInstance();
}

Etat * EtatAVide::figer()
{
	EtatFige::setEtat(instance);
	return EtatFige::getInstance();
}
