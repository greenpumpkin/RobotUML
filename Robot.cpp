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
        _e.tourner(direction);
        _direction = direction;
    }
    catch (Etat::Action_Impossible) {
    	cerr << "Action impossible vu l'état. \n";
    }
}

void Robot::saisir(Objet o)
{
	try {
        Etat newEtat = _e.saisir();
        _e = newEtat;
        _objet = o;
    }
    catch (Etat::Action_Impossible) {
    	cerr << "Action impossible vu l'état. \n";
    }
}

void Robot::poser()
{
    try {
        Etat newEtat = _e.poser();
        _e = newEtat;
    }
    catch(Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état. \n";
    }
}


/**int peser();
rencontrerPlot(Plot p);
int evaluerPlot();
figer();
repartir();
afficher();**/