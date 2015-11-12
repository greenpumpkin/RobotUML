#include <string>
#include <iostream>
#include "Etat.h"
#include "EtatFige.h"
#include "EtatAVide.h"

Etat * Etat::premierEtat = EtatAVide::getInstance();

Etat * Etat::getPremierEtat()
{
	return premierEtat;
}

Etat Etat::avancer()
{
	throw Action_Impossible();
}

Etat Etat::evaluerPlot() 
{ 
	throw Action_Impossible(); 
}

Etat Etat::tourner() 
{
	throw Action_Impossible();
}

Etat Etat::rencontrerPlot() 
{
	throw Action_Impossible();
}

Etat Etat::poser() 
{
	throw Action_Impossible();
}

Etat Etat::saisir() 
{
	throw Action_Impossible();
}

Etat Etat::peser() 
{
	throw Action_Impossible();
}

Etat Etat::figer() 
{
	throw Action_Impossible();
}

Etat Etat::repartir() 
{
	throw Action_Impossible();
}

string Etat::nom() 
{
	throw Action_Impossible();
}