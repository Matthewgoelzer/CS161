/******************************************************
** Author: Matthew Goelzer
**Date: 2/1/2019
**Description: Calulates distance traveled of a taxi cap given x and y coodrinates
******************************************************/

#include "Taxicab.hpp"
#include <cmath>
#include <iostream>


//default constructor
Taxicab::Taxicab()
{
	xCoord = 0;
	yCoord = 0;
	distanceTraveled = 0;
	xMove = 0;
	yMove = 0;
}

//constructor that takes arguments x, y, and sets distance traveled to 0
Taxicab::Taxicab(int newX, int newY)
{
	xCoord = newX;
	yCoord = newY;
	distanceTraveled = 0;
}

//x coordiantes 
void Taxicab::setXCoord(int newX)
{
	xCoord = newX;
}

int Taxicab::getXCoord()
{
	return xCoord;
}

//y coordinats
void Taxicab::setYCoord(int newY)
{
	yCoord = newY;
}

int Taxicab::getYCoord()
{
	return yCoord;
}


//move in x direction
void Taxicab::moveX(int newX)
{
	 xCoord = xCoord + newX;
	 distanceTraveled = distanceTraveled + std::abs(newX);
}

//move in y direction
void Taxicab::moveY(int newY)
{
	yCoord = yCoord + newY;
	distanceTraveled = distanceTraveled + std::abs(newY);
}

//total distance traveled
int Taxicab::getDistanceTraveled()
{
	return distanceTraveled;
}













