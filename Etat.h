#include <iostream>
#include <string>
#include "Plot.h"

#ifndef ETAT_H
#define ETAT_H

class Etat {

	private:
		static Etat *instance;
		static Etat *premierEtat;

	protected:
		Etat();

	public:

		//Méthode pour récupérer l'instance de la classe
		static Etat *getInstance();
		//Accesseur
		static Etat *getPremierEtat();

		//Exception
		class Action_Impossible {};

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