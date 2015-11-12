#include "Robot.h"
#include "Etat.h"
#include "EtatFige.h"

using namespace std;

int main()
{
	cout << EtatFige::getInstance() << endl;
    return 0;
}

