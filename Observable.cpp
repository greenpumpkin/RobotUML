#include <iostream>
#include <time.h>
#include <string>
#include <cctype>
#include <vector>
#include "Observable.h"
#include "Observateur.h"

using namespace std;

void Observable::notifier(){
    //for(Observateur o : _afficheurs)
    //    o.afficher();
}

void Observable::attacher(Observateur o){
    _afficheurs.push_back(o);
}

void Observable::detacher(Observateur o){}