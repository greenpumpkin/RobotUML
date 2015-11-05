#include <iostream>
#include <time.h>
#include <string>
#include <cctype>
#include <vector>
#include "Date.h"

using namespace std;

Robot::Robot(int x, int y){
	xPos=x;
	yPos=y;
}

Robot::Robot(){
	xPos=0;
	yPos=0;
}

Robot::avancer(int x, int y){
	xPos=x;
	yPos=y;
}

tourner(String direction){
	try { 
        e.tourner(direction);
        _direction=direction; 
    } 
    catch (Robot::Action_Impossible) { 
    	cerr << "Action impossible dans cet état. \n";
    }  
}

saisir(Objet o){
	try { 
        Etat newEtat= e.saisir();
        e=newEtat;
        objet=o; 
    } 
    catch (Robot::Action_Impossible) { 
    	cerr << "Action impossible dans cet état. \n";
    }  
}
poser();
int peser();
rencontrerPlot(Plot p);
int evaluerPlot();
figer();
repartir();
afficher();