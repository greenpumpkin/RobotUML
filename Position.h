#include <iostream>
#include <string>

#ifndef position_h
#define position_h

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