/*!
* 
* Fichier EtatAVideFacePlot.cpp
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include <iostream>
#include <string>
#include "Robot.h"
#include "Etat.h"
#include "EtatEnRoute.h"
#include "EtatAVide.h"
#include "EtatAVideFacePlot.h"
#include "EtatEnChargeFacePlot.h"
#include "EtatFige.h"

using namespace std;

//Instance de EtatAVideFacePlot
EtatAVideFacePlot * EtatAVideFacePlot::instance = new EtatAVideFacePlot("À vide face plot");

/* Méthode permettant de récupérer l'instance de la classe */
EtatAVideFacePlot * EtatAVideFacePlot::getInstance()
{
	return instance;
}

/* Retourne l'instance de la classe EtatAVideFacePlot */
Etat * EtatAVideFacePlot::evaluerPlot()
{
	return instance;
}

/* Retourne l'instance de la classe EtatEnChargeFacePlot */
Etat * EtatAVideFacePlot::saisir()
{
	return EtatEnChargeFacePlot::getInstance();
}

/* Retourne l'instance de la classe EtatAVideFacePlot */
Etat * EtatAVideFacePlot::tourner()
{
	return EtatAVide::getInstance();
}

/* Méthode mémorisant l'état du robot avant qu'il se fige.
 * Retourne l'instance de la classe EtatFige. */
Etat * EtatAVideFacePlot::figer()
{
	EtatFige::setEtat(instance);
	return EtatFige::getInstance();
}