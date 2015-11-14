#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "Objet.h"
#include "Etat.h"
#include "Plot.h"
#include "Position.h"
#include "Observable.h"

using namespace std;

#ifndef ROBOT_H
#define ROBOT_H

class Robot : public Observable {
	
	private:

		Etat *etat;
		string _direction;
		Objet _objet;
		Position _position;
		Plot _plot;
		string _ordre;
		

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
		Etat *getEtat();
		Objet getObjet();
		string getDirection();
		Position getPosition();
		Plot getPlot();
		string getOrdre();
};
#endif
