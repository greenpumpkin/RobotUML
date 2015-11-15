/*!
* 
* Fichier EtatFige.cpp
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include <iostream>
#include <string>
#include "EtatFige.h"
#include "Robot.h"

using namespace std;

//Instance de EtatFiige
EtatFige * EtatFige::instance = new EtatFige("Figé");

Etat * EtatFige::ancienEtat;

/* Méthode permettant de récupérer l'instance de la classe */
EtatFige * EtatFige::getInstance()
{
	return instance;
}

/* Méthode permettant de changer d'état */
void EtatFige::setEtat(Etat* nouvelEtat)
{
	ancienEtat = nouvelEtat;
}

/* Méthode permettant au robot de passer à l'état enRoute */
Etat *EtatFige::repartir()
{
	return ancienEtat;
}