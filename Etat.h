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
		virtual Etat *avancer();
		virtual Etat *evaluerPlot();
		virtual Etat *tourner();
		virtual Etat *rencontrerPlot();
		virtual Etat *poser();
		virtual Etat *saisir();
		virtual Etat *peser();
		virtual Etat *figer();
		virtual Etat *repartir();
		string getNom();

};
#endif
