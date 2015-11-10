#include <iostream>
#include <time.h>
#include <string>
#include <cctype>
#include <vector>
#include "Robot.h"

using namespace std;

Robot::Robot(int x, int y)
{
	_x = x;
	_y = y;
}

Robot::Robot()
{
	_x = 0;
	_y = 0;
}

void Robot::avancer(int x, int y)
{
	_x = x;
	_y = y;
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
    }
    catch(Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état." << endl;
    }
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
    }
    catch(Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état." << endl;
    }
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
{}