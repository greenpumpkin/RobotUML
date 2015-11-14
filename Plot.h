#include <iostream>
#include <string>

#ifndef PLOT_H
#define PLOT_H

class Plot {

	private:
		int hauteur;

	public:
		Plot(int haut = 0) : hauteur(haut) {}
		int getHauteur() 
		{
			return hauteur;
		}
};
#endif