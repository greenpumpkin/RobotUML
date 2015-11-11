#include "Robot.h"
#include "Etat.h"
#include "EtatFige.h"

using namespace std;

int main()
{
	cout << Etat::getInstance() << endl;
	cout << Etat::getPremierEtat() << endl;
	cout << EtatFige::getInstance() << endl;
    return 0;
}

