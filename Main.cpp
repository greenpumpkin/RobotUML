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

	cout << "_____________________\n" << endl;
	r0->notifier();
	//r0->afficher();


	cout << "_____________________\n" << endl;
	Objet o(5);
	Plot p;
	r0->rencontrerPlot(p);
	r0->saisir(o);
	r0->notifier();
	//r0->afficher();

	cout << "_____________________\n" << endl;
	r0->poser();
	r0->tourner("N");
	r0->avancer(1,1);
	r0->notifier();
	//r0->afficher();

	cout << "_____________________\n" << endl;
	Objet o2(2);
	r0->rencontrerPlot(p);
	r0->saisir(o2);
	r0->peser();
	r0->notifier();
	//r0->afficher();

	cout << "_____________________\n" << endl;
	r0->figer();
	r0->notifier();
	//r0->afficher();

	cout << "_____________________\n" << endl;
	r0->repartir();
	r0->notifier();
	//r0->afficher();

	cout << "_____________________\n" << endl;
	r0->tourner("E");
	r0->notifier();



    return 0;
}

