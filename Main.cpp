#include "Robot.h"
#include "Etat.h"
#include "EtatFige.h"
#include "AfficheurConsole.h"
#include <iostream>

using namespace std;

int main()
{
	Robot *r0=new Robot(3, 4);
	AfficheurConsole a(r0);
	Observateur * obs=&a;
	r0->attacher(obs);

	cout << "___________Etat initial:__________ " << endl;
	r0->notifier();
	//r0->afficher();

	cout << "___________rencontrer plot-saisir:__________ " << endl;
	Objet o(5);
	Plot p;
	r0->rencontrerPlot(p);
	r0->saisir(o);
	r0->notifier();
	//r0->afficher();

	cout << "___________poser-tourner-avancer:__________ " << endl;
	r0->poser();
	r0->tourner("NORTH");
	r0->avancer(1,1);
	r0->notifier();
	//r0->afficher();

	cout << "___________recontrer plot-saisir-peser:__________ " << endl;
	Objet o2(2);
	r0->rencontrerPlot(p);
	r0->saisir(o2);
	r0->peser();
	r0->notifier();
	//r0->afficher();

	cout << "___________figer:__________ " << endl;
	r0->figer();
	r0->notifier();
	//r0->afficher();

	cout << "___________repartir:__________ " << endl;
	r0->repartir();
	r0->notifier();
	//r0->afficher();



    return 0;
}

