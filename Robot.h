#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "Objet.h"
#include "Etat.h"
#include "Plot.h"
#include "Position.h"

#ifndef ROBOT_H
#define ROBOT_H

class Robot {
	
	private:

		Etat *etat;
		string _direction;
		Objet _objet;
		Position _position;
		Plot _plot;
		

	public: 
		//Constructeurs
		Robot();
		Robot(int x, int y);

		//Méthodes
		void avancer(int x, int y);
		void tourner(string direction);
		void saisir(Objet o);
		void poser();
		int peser();
		void rencontrerPlot(Plot p);
		int evaluerPlot();
		void figer();
		void repartir();
		void afficher();
		Etat *getEtat();
};
#endif
