#include "Square.h"

Square::Square(double a){
	size = a;
	name = "square";
}
double Square::calcArea()		{return size * size;}
double Square::calcPerimeter()	{return 4 * size;}
double Square::getMaxPoint()	{return size;}