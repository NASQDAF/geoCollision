#pragma once
#include "Figure.h"
class Circle :
	public Figure
{
private:
	double radius;
public:
	Circle() : Circle(0) {};
	Circle(double r) { radius = r; name = "circle";}
	
	double calcPerimeter() override;
	double getMaxPoint() override;
	double calcArea() override;
};

