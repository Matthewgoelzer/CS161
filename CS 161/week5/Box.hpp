/******************************************************
** Author: MAtthew Goelzer
** Date: 1/21/2019
** Decription: header file for Box.cpp
*****************************************************/
#ifndef BOX_HPP
#define BOX_HPP

class Box
{
private:
	double height;
	double width;
	double length;

public:
	Box();
	Box(double w, double h, double l);
	void setHeight(double);
	void setWidth(double);
	void setLength(double);
	double calcVolume();
	double calcSurfaceArea();
	double getHeight();
	double getWidth();
	double getLength();

};

#endif
