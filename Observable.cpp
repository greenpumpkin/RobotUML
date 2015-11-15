/*!
* 
* Fichier Observable.cpp
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/


#include <iostream>
#include <time.h>
#include <string>
#include <cctype>
#include <vector>
#include "Observable.h"
#include "Observateur.h"

using namespace std;

/* Méthode permettant d'ajouter un observateur à _afficheurs */
void Observable::attacher(Observateur *o){
    _afficheurs.push_back(o);
}

/* Méthode permettant d'enlever un observateur de _afficheurs */
void Observable::detacher(Observateur *o){ 
    for (vector<Observateur *>::iterator i = _afficheurs.begin(); i!= _afficheurs.end(); ++i)
        if (*i == o)
            _afficheurs.erase(i);
}