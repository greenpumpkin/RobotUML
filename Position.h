#include <iostream>
#include <string>

#ifndef POSITION_H
#define POSITION_H

class Position {

	private:
		int x;
		int y;

	public:
		int getX();
		int getY();
		void setX(int x);
		void setY(int y);


};
#endif