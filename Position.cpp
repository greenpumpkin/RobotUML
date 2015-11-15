/*!
* 
* Fichier Position.cpp
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/


#include "Position.h"

/* Accesseurs */

int Position::getX() 
{
	return x;
}

int Position::getY() 
{
	return y;
}

/* Modificateurs */

void Position::setX(int hor)
{
	x = hor;
}

void Position::setY(int ver)
{
	y = ver;
}