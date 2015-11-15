/*!
* 
* Fichier Etat.cpp
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include <string>
#include <iostream>
#include "Etat.h"
#include "EtatFige.h"
#include "EtatAVide.h"

//Initialisation du premier état du robot
Etat * Etat::premierEtat = EtatAVide::getInstance();

Etat * Etat::avancer()
{
	throw Action_Impossible();
}

Etat * Etat::evaluerPlot() 
{ 
	throw Action_Impossible(); 
}

Etat * Etat::tourner() 
{
	throw Action_Impossible();
}

Etat * Etat::rencontrerPlot() 
{
	throw Action_Impossible();
}

Etat * Etat::poser() 
{
	throw Action_Impossible();
}

Etat * Etat::saisir() 
{
	throw Action_Impossible();
}

Etat * Etat::peser() 
{
	throw Action_Impossible();
}

Etat * Etat::figer() 
{
	throw Action_Impossible();
}

Etat * Etat::repartir() 
{
	throw Action_Impossible();
}


/* Accesseurs */

Etat * Etat::getPremierEtat()
{
	return premierEtat;
}

string Etat::getNom() 
{
	return _nom;
}