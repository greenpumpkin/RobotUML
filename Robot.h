#ifndef _date_h
#define _date_h

#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "Etat.h"
#include "Objet.h"

class Robot {
	private:
		String _direction;
		Etat e;
		Objet objet;
		int xPos;
		int yPos;
	public: 
		Robot(int x, int y);
		Robot();
		avancer(int x, int y);
		tourner(String direction);
		saisir(Objet o);
		poser();
		int peser();
		rencontrerPlot(Plot p);
		int evaluerPlot();
		figer();
		repartir();
		afficher();
		class Action_Impossible{};
};

#endif
