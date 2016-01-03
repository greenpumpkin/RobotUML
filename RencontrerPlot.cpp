/*!
* 
* Fichier RencontrerPlot.cpp
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/

#include "RencontrerPlot.h"

using namespace std;

Commande* RencontrerPlot::constructeurVirtuel(LecteurCommandes *lc){
	int hauteur=lc->getInt("Donner un entier pour la hauteur du plot: ");
	_plot=Plot(hauteur);
	return new RencontrerPlot(recepteur);
}

void RencontrerPlot::execute(){
	commandesExecutees().push(this);
	recepteur->rencontrerPlot(_plot);
}

bool RencontrerPlot::isReversible(){
	return false;
}
