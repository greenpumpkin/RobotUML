#include <iostream>
#include <string>
#include "EtatFige.h"
#include "Robot.h"

using namespace std;

EtatFige * EtatFige::instance = new EtatFige("Figé");
Etat * EtatFige::ancienEtat;

EtatFige * EtatFige::getInstance()
{
	return instance;
}

void EtatFige::setEtat(Etat* nouvelEtat)
{
	ancienEtat = nouvelEtat;
}

Etat *EtatFige::repartir()
{
	return ancienEtat;
}