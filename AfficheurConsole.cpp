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
    cout << "Objet (vide si pas d'objet): " << endl;
    if (_robot->getObjet().getPoids() != 0)
        cout << "Poids de l'objet: " << _robot->getObjet().getPoids() << endl;
    cout << "Plot  (vide si pas en face d'un plot): " << endl;
    if (_robot->getPlot().getHauteur() != 0)
    	cout << "Hauteur du plot: " << _robot->getPlot().getHauteur() << endl;

    if (_robot->getOrdre() == "figer")
    	cout << "Le robot est figé." << endl;
    else
    	cout << "Le robot est en attente d'un ordre." << endl;
    
}