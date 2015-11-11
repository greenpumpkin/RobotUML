#include "EtatEnRoute.h"
#include "Robot.h"
#include "EtatFige.h"

EtatEnRoute *EtatEnRoute::instance = new EtatEnRoute();

EtatEnRoute::EtatEnRoute()
{}

EtatEnRoute * EtatEnRoute::getInstance()
{
return instance;
}

Etat * EtatEnRoute::figer()
{
	EtatFige::setEtat(instance);
	return EtatFige::getInstance();
}

