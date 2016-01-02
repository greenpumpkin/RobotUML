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
#include "Commande.h"
#include "Avancer.h"
#include "Defaire.h"
#include "EvaluerPlot.h"
#include "Figer.h"
#include "Peser.h"
#include "Poser.h"
#include "RencontrerPlot.h"
#include "Repartir.h"
#include "Saisir.h"
#include "Tourner.h"

#include <iostream>

using namespace std;

int main()
{
	Robot *r=new Robot(3, 4);
	AfficheurConsole a(r);
	Observateur * obs=&a;
	r->attacher(obs);

	cout << "_____________________\n" << endl;
	r->notifier();

	//Si commandes sur l'entrée standard
	LecteurCommandes lect;
	Avancer avancer(r);
	Defaire defaire;
	EvaluerPlot ep(r);
	Figer figer(r);
	Peser peser(r);
	Poser poser(r);
	RencontrerPlot rp(r);
	Repartir repartir(r);
	Saisir saisir(r);
	Tourner tourner(r);
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
	r->rencontrerPlot(p);
	
	cout << "_____________________\n" << endl;
	r->saisir(o);

	cout << "_____________________\n" << endl;
	r->poser();

	cout << "_____________________\n" << endl;
	r->tourner("S");

	cout << "_____________________\n" << endl;
	r->avancer(1,1);

	cout << "_____________________\n" << endl;
	Objet o2(2);
	Plot p1(4);
	r->rencontrerPlot(p1);

	cout << "_____________________\n" << endl;
	r->saisir(o2);
	
	cout << "_____________________\n" << endl;
	r->peser();

	cout << "_____________________\n" << endl;
	r->figer();

	cout << "_____________________\n" << endl;
	r->repartir();

	cout << "_____________________\n" << endl;
	r->tourner("E");
	*/

    return 0;
}

