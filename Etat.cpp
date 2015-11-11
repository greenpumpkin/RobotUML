#include "Etat.h"
#include "EtatFige.h"

Etat *Etat::instance = new Etat();
Etat *Etat::premierEtat;

Etat::Etat() 
{}

Etat * Etat::getInstance() 
{
	return instance;
}

Etat * Etat::getPremierEtat()
{
	premierEtat = EtatFige::getInstance();
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