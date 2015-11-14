#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "Observateur.h"
#include "Objet.h"
#include "Etat.h"
#include "Plot.h"

using namespace std;

void Observateur::afficher(){
	cout << "dans Observateur" << endl;
}
