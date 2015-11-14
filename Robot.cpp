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

void Robot::avancer(int x, int y)
{
    try {
        etat = etat->avancer();
        _position.setX(x);
        _position.setY(y);
        _ordre = "avancer";
    }
    catch (Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état." << endl;
    }
}

void Robot::tourner(string direction){
	
    try {
        etat = etat->tourner();
        _direction = direction;
        _ordre = "tourner";
    }
    catch (Etat::Action_Impossible) {
    	cerr << "Action impossible vu l'état." << endl;
    }
}

void Robot::saisir(Objet o)
{
	try {
        etat = etat->saisir();
        _objet = o;
        _ordre = "saisir";
    }
    catch (Etat::Action_Impossible) {
    	cerr << "Action impossible vu l'état." << endl;
    }
}

void Robot::poser()
{
    try {
       etat = etat->poser();
       _ordre = "poser";
    }
    catch(Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état." << endl;
    }
}

int Robot::peser()
{
    try {
       etat = etat->peser();
       _ordre = "peser";
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
       etat = etat->rencontrerPlot();
       _plot = p;
       _ordre = "rencontrer plot";
    }
    catch(Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état." << endl;
    }
}

int Robot::evaluerPlot()
{
    try {
       etat = etat->evaluerPlot();
       _ordre = "évaluer plot";
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
       etat = etat->figer();
       _ordre = "figer";
    }
    catch(Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état." << endl;
    }
}

void Robot::repartir()
{
    try {
       etat = etat->repartir();
       _ordre = "repartir";
    }
    catch(Etat::Action_Impossible) {
        cerr << "Action impossible vu l'état." << endl;
    }
}

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