#include "Avancer.h"

using namespace std;

Avancer * Avancer::instance = new Avancer();

Commande* Avancer::constructeurVirtuel(LecteurCommandes *lc){
	_x=lc->getInt("Donner un entier pour la position X: ");
	_y=lc->getInt("Donner un entier pour la position Y: ");
	recepteur=lc->getRobot();
	_old_x= recepteur->getPosition().getX();
	_old_y= recepteur->getPosition().getY();
	return instance;
}

void Avancer::execute(){
	commandesExecutees().push(instance);
	recepteur->avancer(_x,_y);
}

void Avancer::desexecute(){
	recepteur->avancer(_old_x, _old_y);
}
