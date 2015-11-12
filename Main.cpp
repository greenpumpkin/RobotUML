#include "Robot.h"
#include "Etat.h"
#include "EtatFige.h"

using namespace std;

int main()
{
	Robot r0(3, 4);
	r0.avancer(4,5);
	r0.afficher();

    return 0;
}

