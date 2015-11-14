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
    cout << "Position: (" << _obs.getPosition().getX() << " ; "<< _obs.getPosition().getY() << ")" << endl;
    cout << "Direction: " << _obs.getDirection() << endl;
    if (_obs.getObjet().getPoids() != 0)
        cout << "Poids de l'objet: " << _obs.getObjet().getPoids() << endl;
    cout << "Etat du robot: " << _obs.getEtat()->getNom() << endl;
}