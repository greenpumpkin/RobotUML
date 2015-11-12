#include "EtatEnRoute.h"
#include "Robot.h"
#include "EtatFige.h"

Etat * EtatEnRoute::figer()
{
	return EtatFige::getInstance();
}

