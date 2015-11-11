#include "EtatEnRoute.h"
#include "Robot.h"

EtatEnRoute *EtatEnRoute::instance = new EtatEnRoute();

EtatEnRoute::EtatEnRoute() 
{}

EtatEnRoute * EtatEnRoute::getInstance()
{
	return instance;
}

