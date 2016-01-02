#include "Avancer.h"

using namespace std;

Commande* Avancer::constructeurVirtuel(LecteurCommandes *lc){
	_x=lc->getInt("Donner un entier pour la position X: ");
	_y=lc->getInt("Donner un entier pour la position Y: ");
	_old_x= recepteur->getPosition().getX();
	_old_y= recepteur->getPosition().getY();
	return new Avancer(recepteur);
}

void Avancer::execute(){
	commandesExecutees().push(this);
	recepteur->avancer(_x,_y);
}

void Avancer::desexecute(){
	recepteur->avancer(_old_x, _old_y);
}
