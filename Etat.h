#include <iostream>
#include <string>
#include "Plot.h"
#include <string>

using namespace std;

#ifndef ETAT_H
#define ETAT_H

class Etat {

	private:
		static Etat *premierEtat;
		string _nom;

	public:
		//Constructeur
		Etat(string nom) : _nom(nom) {};

		//Exception
		class Action_Impossible {};

		static Etat *getPremierEtat();
		Etat *avancer();
		Etat *evaluerPlot();
		Etat *tourner();
		Etat *rencontrerPlot();
		Etat *poser();
		Etat *saisir();
		Etat *peser();
		Etat *figer();
		Etat *repartir();
		string getNom();

};
#endif
