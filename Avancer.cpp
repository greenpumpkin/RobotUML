#include <iostream>     
#include <fstream>
#include <string>
#include <map>
#include "Commande.h"
#include "CommandeRobot.h"
#include "Avancer.h"
#include "Robot.h"

using namespace std;

Avancer * Avancer::instance = new Avancer();

Commande* Avancer::constructeurVirtuel(LecteurCommandes *lc){
	//setRobot(lc->getRobot()); Probleme: on a perdu recepeteur quand on appelle execute (compile mais ne s'execute pas)
	_x=lc->getX();
	_y=lc->getY();
	cout<< "Y X dans le constr d'avancer: "<<_y << _x <<endl;
	//Renvoyer une erreur si getY ou getX sont nuls
	return new Avancer();//Avancer(lc->getInt())
}

void Avancer::execute(){
	recepteur->avancer(_x,_y);
}

void Avancer::desexecute(){
	cout<<"non implémenté"<<endl;
}
