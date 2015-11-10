#include <iostream>
#include <string>
#include "Plot.h"

#ifndef ETAT_H
#define ETAT_H

class Etat {

	public:

		//Exception
		class Action_Impossible {};

		Etat avancer(int x, int y);
		Etat evaluerPlot();
		Etat tourner(char* direction);
		Etat rencontrerPlot(Plot p);
		Etat poser();
		Etat saisir();
		Etat peser();
		Etat figer();
		Etat repartir();

};
#endif