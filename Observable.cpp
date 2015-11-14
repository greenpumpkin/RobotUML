#include <iostream>
#include <time.h>
#include <string>
#include <cctype>
#include <vector>
#include "Observable.h"
#include "Observateur.h"

using namespace std;

void Observable::attacher(Observateur *o){
    _afficheurs.push_back(o);
}

void Observable::detacher(Observateur *o){ 
    for (vector<Observateur *>::iterator i = _afficheurs.begin(); i!= _afficheurs.end(); ++i)
        if (*i == o)
            _afficheurs.erase(i);
}