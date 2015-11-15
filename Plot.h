/*!
* 
* Classe Plot.h
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/


#include <iostream>
#include <string>

#ifndef PLOT_H
#define PLOT_H

class Plot {

	private:
		int hauteur;

	public:
		//Constructeur
		Plot(int haut = 0) : hauteur(haut) {}

		//Accesseur
		int getHauteur() 
		{
			return hauteur;
		}
};
#endif