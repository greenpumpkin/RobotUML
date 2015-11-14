#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "Observateur.h"
#include "Objet.h"
#include "Etat.h"
#include "Plot.h"
#include "Position.h"

#ifndef OBSERVABLE_H
#define OBSERVABLE_H

using namespace std;

class Observable {
	
	private:
		vector<Observateur*> _afficheurs;

	public: 
		void notifier();
		void attacher(Observateur *o);
		void detacher(int i);

	/*	virtual void avancer(int x, int y)=0;
		virtual void tourner(string direction)=0;
		virtual void saisir(Objet o)=0;
		virtual void poser()=0;
		virtual int peser()=0;
		virtual void rencontrerPlot(Plot p)=0;
		virtual int evaluerPlot()=0;
		virtual void figer()=0;
		virtual void repartir()=0;
		virtual Etat *getEtat()=0;
		virtual Objet getObjet()=0;
		virtual string getDirection()=0;
		virtual Position getPosition()=0;
		virtual Plot getPlot()=0;*/
};
#endif
