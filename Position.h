/*!
* 
* Classe Position.h
* Auteurs : Chloé Guglielmi et Cindy Najjar
*
*/


#include <iostream>
#include <string>

#ifndef POSITION_H
#define POSITION_H

class Position {

	private:
		int x;
		int y;

	public:
		//Accesseurs
		int getX();
		int getY();
		void setX(int x);
		void setY(int y);


};
#endif