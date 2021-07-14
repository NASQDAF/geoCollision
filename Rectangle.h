#pragma once
#include "Figure.h"
class Rectangle : public Figure
{
private:
	double sizex;
	double sizey;
public:
	Rectangle() { sizex = 0; sizey = 0; name = "Rectangle "; };
	Rectangle(double a,double b);
	
	double calcPerimeter() override;
	double getMaxPoint() override;
	double calcArea() override;

};