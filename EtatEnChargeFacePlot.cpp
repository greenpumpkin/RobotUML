/*!
* 
* Fichier EtatEnChargeFacePlot.cpp
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

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

//Instance de EtatEnChargeFacePlot
EtatEnChargeFacePlot * EtatEnChargeFacePlot::instance = new EtatEnChargeFacePlot("En charge face plot");


/* Méthode permettant de récupérer l'instance de la classe */
EtatEnChargeFacePlot * EtatEnChargeFacePlot::getInstance()
{
	return instance;
}

/* Retourne l'instance de la classe EtatEnChargeFacePlot */
Etat * EtatEnChargeFacePlot::poser()
{
	return EtatAVideFacePlot::getInstance();
}

/* Retourne l'instance de la classe EtatEnChargeFacePlot */
Etat * EtatEnChargeFacePlot::evaluerPlot()
{
	return instance;
}

/* Retourne l'instance de la classe EtatEnChargeFacePlot */
Etat * EtatEnChargeFacePlot::peser()
{
	return instance;
}

/* Retourne l'instance de la classe EtatEnCharge */
Etat * EtatEnChargeFacePlot::tourner()
{
	return EtatEnCharge::getInstance();
}

/* Méthode mémorisant l'état du robot avant qu'il se fige.
 * Retourne l'instance de la classe EtatFige. */
Etat * EtatEnChargeFacePlot::figer()
{
	EtatFige::setEtat(instance);
	return EtatFige::getInstance();
}