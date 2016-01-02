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

void RencontrerPlot::desexecute(){
	//recepteur->tourner("N");
	cout<<"La commande 'Rencontrer Plot' n'est pas réversible, il suffit de tourner"<<endl;
}
