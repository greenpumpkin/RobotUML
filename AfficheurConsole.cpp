#include <iostream>
#include <time.h>
#include <string>
#include <cctype>
#include <vector>
#include "Robot.h"
#include "Observateur.h"
#include "Observable.h"
#include "AfficheurConsole.h"

using namespace std;

void AfficheurConsole::afficher(){
	cout << "Ordre donné au robot: " << _robot->getOrdre() << endl;
	cout << "Etat du robot après exécution de l'ordre donné: " << _robot->getEtat()->getNom() << endl;
    cout << "Position: (" << _robot->getPosition().getX() << " ; "<< _robot->getPosition().getY() << ")" << endl;
    cout << "Direction: " << _robot->getDirection() << endl;
    
    if (_robot->getObjet().getPoids() != 0)
        cout << "Le robot tient un objet de poids  " << _robot->getObjet().getPoids() << endl;
    else
        cout << "Le robot ne tient pas d'objet." << endl;

    if (_robot->getPlot().getHauteur() != 0)
    	cout << "Le robot est en face d'un plot de hauteur " << _robot->getPlot().getHauteur() << endl;
    else
        cout << "Le robot n'est pas en face d'un plot." << endl;

    if (_robot->getOrdre() == "figer")
    	cout << "Le robot est figé." << endl;
    else
    	cout << "Le robot est en attente d'un ordre." << endl;
    
}