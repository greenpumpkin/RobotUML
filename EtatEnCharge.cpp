/*!
* 
* Fichier EtatEnCharge.cpp
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
#include "EtatFige.h"

using namespace std;

//Instance de EtatEnCharge
EtatEnCharge * EtatEnCharge::instance = new EtatEnCharge("En charge");

/* Méthode permettant de récupérer l'instance de la classe */
EtatEnCharge * EtatEnCharge::getInstance()
{
	return instance;
}

/* Retourne l'instance de la classe EtatEnCharge */
Etat * EtatEnCharge::avancer()
{
	return instance;
}

/* Retourne l'instance de la classe EtatEnCharge */
Etat * EtatEnCharge::tourner()
{
	return instance;
}

/* Retourne l'instance de la classe EtatEnChargeFacePlot */
Etat * EtatEnCharge::rencontrerPlot()
{
	return EtatEnChargeFacePlot::getInstance();
}

/* Retourne l'instance de la classe EtatEnCharge */
Etat * EtatEnCharge::peser()
{
	return instance;
}

/* Méthode mémorisant l'état du robot avant qu'il se fige.
 * Retourne l'instance de la classe EtatFige. */
Etat * EtatEnCharge::figer()
{
	EtatFige::setEtat(instance);
	return EtatFige::getInstance();
}