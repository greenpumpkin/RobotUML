#include <iostream>
#include <string>

#ifndef etat_h
#define etat_h

class Etat {

	public:
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