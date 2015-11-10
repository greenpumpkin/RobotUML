#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "Objet.h"
#include "Etat.h"
#include "Plot.h"

#ifndef ROBOT_H
#define ROBOT_H

class Robot {
	
	private:

		char* _direction;
		Etat etat;
		Objet _objet;
		int _x;
		int _y;

	public: 

		//Constructeurs
		Robot();
		Robot(int x, int y);

		//Méthodes
		void avancer(int x, int y);
		void tourner(char* direction);
		void saisir(Objet o);
		void poser();
		int peser();
		void rencontrerPlot(Plot p);
		int evaluerPlot();
		void figer();
		void repartir();
		void afficher();
};
#endif
