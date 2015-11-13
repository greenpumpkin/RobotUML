#include <iostream>
#include <time.h>
#include <string>
#include <cctype>
#include <vector>
#include "Robot.h"
#include "Observateur.h"
#include "AfficheurConsole.h"

using namespace std;

void AfficheurConsole::afficher(){
    cout << "Position: (" << _robot.getPosition().getX() << " ; "<< _robot.getPosition().getY() << ")" << endl;
    cout << "Direction: " << _robot.getDirection() << endl;
    if (_robot.getObjet().getPoids() != 0)
        cout << "Poids de l'objet: " << _robot.getObjet().getPoids() << endl;
    cout << "Etat du robot: " << _robot.getEtat()->getNom() << endl;
}