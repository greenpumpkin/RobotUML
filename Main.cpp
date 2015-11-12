#include "Robot.h"
#include "Etat.h"
#include "EtatFige.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "___________Etat initial:__________ " << endl;
	Robot * r0 = new Robot(3, 4);
	r0->afficher();

	cout << "___________rencontrer plot-saisir:__________ " << endl;
	Objet o(5);
	Plot p;
	r0->rencontrerPlot(p);
	r0->saisir(o);
	r0->afficher();

	cout << "___________poser-tourner-avancer:__________ " << endl;
	r0->poser();
	r0->tourner("NORTH");
	r0->avancer(1,1);
	r0->afficher();

    return 0;
}

