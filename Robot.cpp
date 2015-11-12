#include <iostream>
#include <time.h>
#include <string>
#include <cctype>
#include <vector>
#include "Robot.h"
#include "EtatAVide.h"

using namespace std;

Robot::Robot(int x, int y)
{
	_x = x;
	_y = y;
    etat = EtatAVide::getInstance();
}

Robot::Robot()
{
	_x = 0;
	_y = 0;
    etat = EtatAVide::getInstance();
}

void Robot::avancer(int x, int y)
{
    try {
        *etat = etat->avancer();
        _position.setX(x);
        _position.setY(y);
    }
    catch (Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état." << endl;
    }
}

void Robot::tourner(char* direction){
	
    try {
        *etat = etat->tourner();
        _direction = direction;
    }
    catch (Etat::Action_Impossible) {
    	cerr << "Action impossible vu l'état." << endl;
    }
}

void Robot::saisir(Objet o)
{
	try {
        *etat = etat->saisir();
        _objet = o;
    }
    catch (Etat::Action_Impossible) {
    	cerr << "Action impossible vu l'état." << endl;
    }
}

void Robot::poser()
{
    try {
       *etat = etat->poser();
    }
    catch(Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état." << endl;
    }
}

int Robot::peser()
{
    try {
       *etat = etat->peser();
       return _objet.getPoids();
    }
    catch(Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état." << endl;
    }
    return -1;
}

void Robot::rencontrerPlot(Plot p)
{
    try {
       *etat = etat->rencontrerPlot();
       _plot = p;
    }
    catch(Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état." << endl;
    }
}

int Robot::evaluerPlot()
{
    try {
       *etat = etat->evaluerPlot();
       return _plot.getHauteur();
    }
    catch(Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état." << endl;
    }
    return -1;
}

void Robot::figer()
{
    try {
       *etat = etat->figer();
    }
    catch(Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état." << endl;
    }
}

void Robot::repartir()
{
    try {
       *etat = etat->repartir();
    }
    catch(Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état." << endl;
    }
}

void Robot::afficher()
{
    cout << "Position (X) : " << _position.getX() << endl;
    cout << "Position (Y) : " << _position.getY() << endl;
    cout << "Poids objet : " << _objet.getPoids() << endl;
}