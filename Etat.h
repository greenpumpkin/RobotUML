#include <iostream>
#include <string>
#include "Plot.h"

#ifndef ETAT_H
#define ETAT_H

class Etat {

	private:
		static Etat *premierEtat;

	public:
		//Exception
		class Action_Impossible {};

		static Etat *getPremierEtat();
		Etat avancer();
		Etat evaluerPlot();
		Etat tourner();
		Etat rencontrerPlot();
		Etat poser();
		Etat saisir();
		Etat peser();
		Etat figer();
		Etat repartir();

};
#endif