/***********************************************
**Author: Matthew Goelzer
** Date: 2/1/19
** Description: Header file for Taxicab.cpp
***********************************************/
#ifndef TAXICAB_HPP
#define TAXICAB_HPP

class Taxicab
{
private:
	int xCoord;
	int yCoord;
	int distanceTraveled;
	int xMove;
	int yMove;

public:
	Taxicab();
	Taxicab(int newX, int newY);
	void setXCoord(int);
	void setYCoord(int);
	void setDistanceTraveled();
	int getXCoord();
	int getYCoord();
	int getDistanceTraveled();
	void moveX(int);
	void moveY(int);

};
#endif // !TAXICAB_HPP

