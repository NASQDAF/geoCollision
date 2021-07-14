#pragma once
#include "Figure.h"
class Equilateral_triangle : public Figure
{
private:
	double size;
public:
	Equilateral_triangle() { size = 0; name = "equilateral triangle"; };
	Equilateral_triangle(double a);
	
	double calcPerimeter() override; 
	double getMaxPoint() override;
	double calcArea() override;
};
