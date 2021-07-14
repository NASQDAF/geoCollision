#include "Rectangle.h"

Rectangle::Rectangle(double a , double b){
	sizex = a;
	sizey = b;
	name = "rectangle";
}
double Rectangle::getMaxPoint()		{ return sizex > sizey ? sizex : sizey; }
double Rectangle::calcPerimeter()	{ return 2 * sizex + 2 * sizey; }
double Rectangle::calcArea()		{ return sizex * sizey; }

