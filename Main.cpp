#include "Robot.h"
#include "Etat.h"
#include "EtatFige.h"
#include <iostream>

using namespace std;

int main()
{
	Robot * r0 = new Robot(3, 4);
	r0->afficher();

	Plot p;
	r0->rencontrerPlot(p);
	r0->afficher();

	Objet o;
	r0->saisir(o);
	r0->afficher();

	r0->figer();
	r0->afficher();

	r0->repartir();
	r0->afficher();

    return 0;
}

