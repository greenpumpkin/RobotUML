/*!
* 
* Fichier Main.cpp
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/


#include "Robot.h"
#include "Etat.h"
#include "EtatFige.h"
#include "AfficheurConsole.h"
#include "LecteurCommandes.h"
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

	//Si commandes sur l'entrée standard
	LecteurCommandes(lect);
	lect.execFichier();

	//Si commandes dans un fichier texte:
	/*ifstream fichier("test.txt", ios::in);  
	if(fichier) { 
		LecteurCommandes lect(fichier);
		lect.execFichier();
	}
	fichier.close();*/

	/*cout << "_____________________\n" << endl;
	Objet o(5);
	Plot p(7);
	r0->rencontrerPlot(p);
	
	cout << "_____________________\n" << endl;
	r0->saisir(o);

	cout << "_____________________\n" << endl;
	r0->poser();

	cout << "_____________________\n" << endl;
	r0->tourner("S");

	cout << "_____________________\n" << endl;
	r0->avancer(1,1);

	cout << "_____________________\n" << endl;
	Objet o2(2);
	Plot p1(4);
	r0->rencontrerPlot(p1);

	cout << "_____________________\n" << endl;
	r0->saisir(o2);
	
	cout << "_____________________\n" << endl;
	r0->peser();

	cout << "_____________________\n" << endl;
	r0->figer();

	cout << "_____________________\n" << endl;
	r0->repartir();

	cout << "_____________________\n" << endl;
	r0->tourner("E");
	*/

    return 0;
}

