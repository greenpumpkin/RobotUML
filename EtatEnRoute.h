#include <iostream>
#include <string>
#include "Etat.h"

using namespace std;

#ifndef ETAT_EN_ROUTE_H
#define ETAT_EN_ROUTE_H

class EtatEnRoute : public Etat {

	public:
		Etat *figer();
};
#endif
