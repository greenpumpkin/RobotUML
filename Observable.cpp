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
    for (unsigned i=0; i<_afficheurs.size(); ++i)
    	_afficheurs[i]->afficher();
    	//cout << "affichage" << endl;
}

void Observable::attacher(Observateur *o){
    _afficheurs.push_back(o);
}

void Observable::detacher(int i){ 
    //Si en param on a Observateur o:
    /*for (int i=0; i<_afficheurs.size(); ++i){
        if(_afficheurs[i]==o)
            _afficheurs.erase(i);
    }*/
    _afficheurs.erase(_afficheurs.begin()+i-1);
}