#include "EtatFige.h"
#include "Robot.h"

EtatFige * EtatFige::instance = new EtatFige();
Etat * EtatFige::ancienEtat;

EtatFige::EtatFige()
{}

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