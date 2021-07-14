#include "Equilateral_triangle.h"

Equilateral_triangle::Equilateral_triangle(double a){
    size = a;
	name = "equilateral triangle";
}
double Equilateral_triangle::calcArea()			{return (std::sqrt(3) / 4) * size;}
double Equilateral_triangle::calcPerimeter()	{return 3 * size;}
double Equilateral_triangle::getMaxPoint()		{return size;}