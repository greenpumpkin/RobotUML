#include "Robot.h"
#include "Etat.h"
#include "EtatFige.h"
#include <iostream>

using namespace std;

int main()
{
	Robot * r0bis = new Robot(3, 4);
	//r0bis->avancer(2,2);
	r0bis->afficher();


    return 0;
}

