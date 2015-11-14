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
    cout << "Position: (" << robot->getPosition().getX() << " ; "<< robot->getPosition().getY() << ")" << endl;
    cout << "Direction: " << robot->getDirection() << endl;
    if (robot->getObjet().getPoids() != 0)
        cout << "Poids de l'objet: " << robot->getObjet().getPoids() << endl;
    cout << "Etat du robot: " << robot->getEtat()->getNom() << endl;
}