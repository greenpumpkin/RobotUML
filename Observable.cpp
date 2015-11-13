#include <iostream>
#include <time.h>
#include <string>
#include <cctype>
#include <vector>
#include "Observable.h"
#include "Observateur.h"


void Observable::notifier(){
    for(Observateur o : _afficheurs)
        o.afficher();
}

void Observable::attacher(Observateur o){
    _afficheurs.push_back(o);
}

void Observable::detacher(Observateur o){ //Si ne marche pas, detacher(i)
    for (int i=0; i<_afficheurs.size(); ++i){
        if(_afficheurs[i]==o)
            _afficheurs.erase(i);
    }
}