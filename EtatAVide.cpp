/*!
* 
* Fichier EtatAVide.cpp
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include <iostream>
#include <string>
#include "Robot.h"
#include "Etat.h"
#include "EtatEnRoute.h"
#include "EtatAVide.h"
#include "EtatFige.h"

using namespace std;

//Instance de EtatAVide
EtatAVide * EtatAVide::instance = new EtatAVide("À vide");


/* Méthode permettant de récupérer l'instance de la classe */
EtatAVide * EtatAVide::getInstance()
{
	return instance;
}

/* Retourne l'instance de la classe EtatAVide */
Etat * EtatAVide::avancer()
{
	return instance;
}

/* Retourne l'instance de la classe EtatAVide */
Etat * EtatAVide::tourner()
{
	return instance;
}

/* Retourne l'instance de la classe EtatAVideFacePlot */
Etat * EtatAVide::rencontrerPlot()
{
	return EtatAVideFacePlot::getInstance();
}

/* Méthode mémorisant l'état du robot avant qu'il se fige.
 * Retourne l'instance de la classe EtatFige. */
Etat * EtatAVide::figer()
{
	EtatFige::setEtat(instance);
	return EtatFige::getInstance();
}
