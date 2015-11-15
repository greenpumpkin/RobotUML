/*!
* Fichier Robot.cpp
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/


#include <iostream>
#include <time.h>
#include <string>
#include <cctype>
#include <vector>
#include "Robot.h"
#include "EtatAVide.h"
#include "Observable.h"

using namespace std;

/* Constructeurs */

Robot::Robot(int x, int y)
{
    etat = Etat::getPremierEtat();
    _position.setX(x);
    _position.setY(y);
    _direction = "N";
    _ordre = "Aucun ordre n'a encore été donné (état initial)";
}

Robot::Robot()
{
    etat = Etat::getPremierEtat();
    _position.setX(0);
    _position.setY(0);
    _direction = "N";
    _ordre = "Aucun ordre n'a encore été donné (état initial)";
}

/* Méthode permettant de faire une mise à jour en avertissant les observateurs */
void Robot::notifier()
{
    for (vector<Observateur *>::iterator i = _afficheurs.begin(); i!= _afficheurs.end(); ++i)
        (*i)->afficher();
}


/* Méthode permettant au robot d'avancer à la position (x,y) */
void Robot::avancer(int x, int y)
{
    try {
        etat = etat->avancer();
        _position.setX(x);
        _position.setY(y);
        _ordre = "avancer";
        notifier();
    }
    catch (Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état." << endl;
    }
}

/* Méthode permettant au robot de tourner dans la direction N,S,E ou O */
void Robot::tourner(string direction){
	
    try {
      if (direction != _direction)
      {
        etat = etat->tourner();
        _direction = direction;
        _plot = Plot(0);
      }
        _ordre = "tourner";
        notifier();
    }
    catch (Etat::Action_Impossible) {
    	cerr << "Action impossible vu l'état." << endl;
    }
}

/* Méthode permettant au robot de saisir l'objet o */
void Robot::saisir(Objet o)
{
	try {
        etat = etat->saisir();
        _objet = o;
        _ordre = "saisir";
        notifier();
    }
    catch (Etat::Action_Impossible) {
    	cerr << "Action impossible vu l'état." << endl;
    }
}

/* Méthode permettant au robot de poser un objet */
void Robot::poser()
{
    try {
       etat = etat->poser();
       _objet = Objet(0);
       _ordre = "poser";
       notifier();
    }
    catch(Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état." << endl;
    }
}

/* Méthode permettant au robot de peser un objet. 
 * Le poids de cet objet est retourné */
int Robot::peser()
{
    try {
       etat = etat->peser();
       _ordre = "peser";
       notifier();
       return _objet.getPoids();
    }
    catch(Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état." << endl;
    }
    return -1;
}

/* Méthode permettant au robot de rencontrer un plot p */
void Robot::rencontrerPlot(Plot p)
{
    try {
       etat = etat->rencontrerPlot();
       _plot = p;
       _ordre = "rencontrer plot";
       notifier();
    }
    catch(Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état." << endl;
    }
}

/* Méthode permettant au robot d'évaluer un plot.
 * La hauteur du plot est retournée. */
int Robot::evaluerPlot()
{
    try {
       etat = etat->evaluerPlot();
       _ordre = "évaluer plot";
       notifier();
       return _plot.getHauteur();
    }
    catch(Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état." << endl;
    }
    return -1;
}

/* Méthode permettant de figer le robot */
void Robot::figer()
{
    try {
       etat = etat->figer();
       _ordre = "figer";
       notifier();
    }
    catch(Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état." << endl;
    }
}

/* Méthode permettant au robot de repasser à l'état enRoute */
void Robot::repartir()
{
    try {
       etat = etat->repartir();
       _ordre = "repartir";
       notifier();
    }
    catch(Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état." << endl;
    }
}

/* Accesseurs */

Etat * Robot::getEtat()
{
    return etat;
}

Objet Robot::getObjet()
{
    return _objet;
}

string Robot::getDirection()
{
    return _direction;
}

Position Robot::getPosition()
{
    return _position;
}

Plot Robot::getPlot()
{
    return _plot;
}

string Robot::getOrdre()
{
    return _ordre;
}