#include "Robot.h"
#include "Etat.h"
#include "EtatFige.h"
#include "AfficheurConsole.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "___________Etat initial:__________ " << endl;
	Robot r0(3, 4);
	//r0->afficher();

	cout << "___________rencontrer plot-saisir:__________ " << endl;
	Objet o(5);
	Plot p;
	r0.rencontrerPlot(p);
	r0.saisir(o);
	//r0->afficher();

	cout << "___________poser-tourner-avancer:__________ " << endl;
	r0.poser();
	r0.tourner("NORTH");
	r0.avancer(1,1);
	//r0->afficher();

	r0.figer();
	//r0->afficher();

	r0.repartir();
	//r0->afficher();

	AfficheurConsole a(r0);
	Observateur * obs=&a;
	cout << "affichage:" <<endl;
	r0.attacher(obs);
	r0.notifier();


    return 0;
}

