/*******************************************************************************
** Author: Matthew Goelzer
** Date: 1/31/2019
**Desription: Program calculates surface area and volume of a box using classes
********************************************************************************/


#include <iostream>
#include "Box.hpp"


//Default contrsuctor for Box
Box::Box()
{
	width = 1;
	height = 1;
	length = 1;
}

//contructor that takes the arguments for width, height, and length
Box::Box(double w, double h, double l)
{
	width = w;
	height = h;
	length = l;
}

//Box width
void Box::setWidth(double w)
{
	width = w;
}

double Box::getWidth()
{
	return width;
}

//Box height
void Box::setHeight(double h)
{
	height = h;
}

double Box::getHeight()
{
	return height;
}

//Box length
void Box::setLength(double l)
{
	length = l;
}

double Box::getLength()
{
	return length;
}

//calculates surface area
double Box::calcSurfaceArea()
{
	return 2*((height*width)+(height*length)+(width*length));
}

//calcualtes volume
double Box::calcVolume()
{
	return width * length * height;
}
































 



